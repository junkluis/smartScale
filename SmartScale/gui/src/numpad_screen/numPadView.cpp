#include <gui/numpad_screen/numPadView.hpp>

numPadView::numPadView()
{
}

void numPadView::setupScreen()
{
    numPadViewBase::setupScreen();
}

void numPadView::tearDownScreen()
{
    numPadViewBase::tearDownScreen();
}

void numPadView::cargarDatos() 
{
	valorTotal = presenter->getPesoEsperado();
	accion = presenter->getNumPadAccion();
	if (accion == "Peso Esperado") {
		valorEditable = presenter->getPesoEditable();
	}
	else if (accion == "Diferencia\nPermitida") {
		valorEditable = presenter->getDifeEditable();
	}
}

void numPadView::reducirDec() {
	if (valorTotal > 0 && parteDecimal > 0) {
		parteDecimal = parteDecimal - 1;
		valorTotal = parteEntera + (parteDecimal*0.1);
		Unicode::snprintf(decBuffer, DEC_SIZE, "%d", parteDecimal);
		dec.invalidate();
	}
}

void numPadView::incrementoDec() {
	if (parteDecimal < 9) {
		parteDecimal = parteDecimal + 1;
		valorTotal = parteEntera + (parteDecimal*0.1);
		Unicode::snprintf(decBuffer, DEC_SIZE, "%d", parteDecimal);
		dec.invalidate();
	}
}

void numPadView::reducirNum() {
	if (parteEntera > 0) {
		parteEntera = parteEntera - 1;
		valorTotal = parteEntera + (parteDecimal * 0.01);
		Unicode::snprintf(numBuffer, NUM_SIZE, "%d", parteEntera);
		num.invalidate();
	}
}

void numPadView::incrementoNum() {
	if (parteEntera < 99) {
		parteEntera = parteEntera + 1;
		valorTotal = parteEntera + (parteDecimal * 0.01);
		Unicode::snprintf(numBuffer, NUM_SIZE, "%d", parteEntera);
		num.invalidate();
	}
}

void numPadView::registrarCambioNumero() {
	//presenter->setPesoEsperado(valorTotal);
	if (accion == "Peso Esperado") {
		presenter->setPesoEditable(valorTotal);
	}
	else if (accion == "Diferencia\nPermitida") {
		presenter->setDifeEditable(valorTotal);
	}
}