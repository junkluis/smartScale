#include <gui/balanzainteligente_screen/BalanzaInteligenteView.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

BalanzaInteligenteView::BalanzaInteligenteView()
{
	
}

void BalanzaInteligenteView::setupScreen()
{
    BalanzaInteligenteViewBase::setupScreen();
}

void BalanzaInteligenteView::tearDownScreen()
{
    BalanzaInteligenteViewBase::tearDownScreen();
}

void BalanzaInteligenteView::CalcularPeso()
{
	//Obtener peso del sensor
	float peso = 0;
	float promedio;
	float delta;
	int perfilSeleccionado = presenter->getSeleccionSlot();

	//Pesos de prueba
	float pesosPrueba[5] = { 1.0, 2.25, 1.25, 0, 0};

	//Reemplazar por peso obtenido por el sensor
	peso = pesosPrueba[perfilSeleccionado-1];

	promedio = presenter->getPesoPromedio(perfilSeleccionado-1);
	delta = presenter->getDiferenciaPermitida(perfilSeleccionado - 1);
	
	//txtResultadoPesar
	Unicode::snprintfFloat(txtResultadoPesarBuffer, TXTRESULTADOPESAR_SIZE, "%0.2f", peso);
	Unicode::snprintfFloat(txtResultadoSmallBuffer, TXTRESULTADOSMALL_SIZE, "%0.2f", peso);
	txtResultadoPesar.invalidate();
	txtResultadoSmall.invalidate();

	

	porcentaje = ((peso * 185)/(promedio))+260;
	float diferenciaObtenida = promedio - peso;
	if (diferenciaObtenida < 0) {
		diferenciaObtenida = diferenciaObtenida * (-1);
	}

	//Datos del Resultados Modal
	Unicode::snprintfFloat(pesoObtenidoModalBuffer, PESOOBTENIDOMODAL_SIZE, "%0.2f", peso);
	Unicode::snprintfFloat(promedioModalBuffer, PESOOBTENIDOMODAL_SIZE, "%0.2f", presenter->getPesoPromedio(perfilSeleccionado-1));
	Unicode::snprintfFloat(diferenciaModalBuffer, PESOOBTENIDOMODAL_SIZE, "%0.2f", diferenciaObtenida);
	Unicode::snprintfFloat(permitidoModalBuffer, PESOOBTENIDOMODAL_SIZE, "%0.2f", presenter->getDiferenciaPermitida(perfilSeleccionado-1));
	promedioModal.invalidate();
	diferenciaModal.invalidate();
	permitidoModal.invalidate();
	pesoObtenidoModal.invalidate();

	Unicode::snprintfFloat(pesoObtenidoEnviarBuffer, PESOOBTENIDOMODAL_SIZE, "%0.2f", peso);
	Unicode::snprintfFloat(promedioEnviarBuffer, PESOOBTENIDOMODAL_SIZE, "%0.2f", presenter->getPesoPromedio(perfilSeleccionado - 1));
	Unicode::snprintfFloat(diferenciaEnviarBuffer, PESOOBTENIDOMODAL_SIZE, "%0.2f", diferenciaObtenida);
	Unicode::snprintfFloat(permitidoEnviarBuffer, PESOOBTENIDOMODAL_SIZE, "%0.2f", presenter->getDiferenciaPermitida(perfilSeleccionado - 1));
	pesoObtenidoEnviar.invalidate();
	promedioEnviar.invalidate();
	diferenciaEnviar.invalidate();
	permitidoEnviar.invalidate();

	if (peso == 0) {
		envioDatos.setVisible(false);
		envioDatos.invalidate();
	}
	else {
		envioDatos.setVisible(true);
		envioDatos.invalidate();
	}


	widgetCircular.setArc(268, 268);
	if (peso > (promedio + delta)) {
		widgetCircularPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(235, 55, 55));
		TxtAlerta.setVisible(true);
		Unicode::strncpy(TxtAlertaBuffer, "EXCEDENTE", TXTALERTA_SIZE);
		TxtAlerta.invalidate();
		alertaPerfil.setVisible(true);
		alertaPerfil.invalidate();
		alertaPerfil.setVisible(false);
		alertaPerfil.invalidate();
	}
	else if (peso < (promedio - delta)) {
		widgetCircularPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 55));
		TxtAlerta.setVisible(true);
		Unicode::strncpy(TxtAlertaBuffer, "FALTANTE", TXTALERTA_SIZE);
		TxtAlerta.invalidate();
		alertaPerfil.setVisible(true);
		alertaPerfil.invalidate();
		alertaPerfil.setVisible(false);
		alertaPerfil.invalidate();
	}
	else {
		widgetCircularPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(55, 210, 210));
		TxtAlerta.setVisible(false);
		Unicode::strncpy(TxtAlertaBuffer, "", TXTALERTA_SIZE);
		TxtAlerta.invalidate();
		alertaPerfil.setVisible(true);
		alertaPerfil.invalidate();
		alertaPerfil.setVisible(false);
		alertaPerfil.invalidate();
	}

	if (perfilSeleccionado == 4 || perfilSeleccionado == 5) {
		alertaPerfil.setVisible(true);
		alertaPerfil.invalidate();
	}

	animacion = true;
	volverAPesar.setVisible(true);
}

void BalanzaInteligenteView::enviarMedianteSigfox() {
	touchgfx_printf("ENVIAR PESO MEDIANTE SIGFOX");
	envioSigfox.hide();
}

void BalanzaInteligenteView::cargarDatos(){

	//Si no ha seleccionado nada, se cargara el perfil 1
	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilBuffer, (presenter->getTitulo(0)).c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", presenter->getPesoPromedio(0));
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();

	Unicode::strncpy(txtSlot1Buffer, (presenter->getTitulo(0)).c_str(), TXTSLOT1_SIZE);
	Unicode::strncpy(txtSlot2Buffer, (presenter->getTitulo(1)).c_str(), TXTSLOT2_SIZE);
	Unicode::strncpy(txtSlot3Buffer, (presenter->getTitulo(2)).c_str(), TXTSLOT3_SIZE);
	Unicode::strncpy(txtSlot4Buffer, (presenter->getTitulo(3)).c_str(), TXTSLOT4_SIZE);
	Unicode::strncpy(txtSlot5Buffer, (presenter->getTitulo(4)).c_str(), TXTSLOT5_SIZE);

	txtSlot1.invalidate();
	txtSlot2.invalidate();
	txtSlot3.invalidate();
	txtSlot4.invalidate();
	txtSlot5.invalidate();

	btnSlot1.forceState(true);
	btnSlot1.invalidate();

}

void BalanzaInteligenteView::Slot1Config() {
	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilBuffer, (presenter->getTitulo(0)).c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", presenter->getPesoPromedio(0));
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();

	btnSlot1.forceState(true);
	btnSlot2.forceState(false);
	btnSlot3.forceState(false);
	btnSlot4.forceState(false);
	btnSlot5.forceState(false);

	btnSlot1.invalidate();
	btnSlot2.invalidate();
	btnSlot3.invalidate();
	btnSlot4.invalidate();
	btnSlot5.invalidate();

}

void BalanzaInteligenteView::Slot2Config() {
	presenter->seleccionarSlot(2);
	Unicode::strncpy(TxtDisplayPerfilBuffer, (presenter->getTitulo(1)).c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", presenter->getPesoPromedio(1));
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();

	btnSlot1.forceState(false);
	btnSlot2.forceState(true);
	btnSlot3.forceState(false);
	btnSlot4.forceState(false);
	btnSlot5.forceState(false);

	btnSlot1.invalidate();
	btnSlot2.invalidate();
	btnSlot3.invalidate();
	btnSlot4.invalidate();
	btnSlot5.invalidate();
}

void BalanzaInteligenteView::Slot3Config() {
	presenter->seleccionarSlot(3);
	Unicode::strncpy(TxtDisplayPerfilBuffer, (presenter->getTitulo(2)).c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", presenter->getPesoPromedio(2));
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();

	btnSlot1.forceState(false);
	btnSlot2.forceState(false);
	btnSlot3.forceState(true);
	btnSlot4.forceState(false);
	btnSlot5.forceState(false);

	btnSlot1.invalidate();
	btnSlot2.invalidate();
	btnSlot3.invalidate();
	btnSlot4.invalidate();
	btnSlot5.invalidate();
}

void BalanzaInteligenteView::Slot4Config() {
	presenter->seleccionarSlot(4);
	Unicode::strncpy(TxtDisplayPerfilBuffer, (presenter->getTitulo(3)).c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", presenter->getPesoPromedio(3));
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();

	btnSlot1.forceState(false);
	btnSlot2.forceState(false);
	btnSlot3.forceState(false);
	btnSlot4.forceState(true);
	btnSlot5.forceState(false);

	btnSlot1.invalidate();
	btnSlot2.invalidate();
	btnSlot3.invalidate();
	btnSlot4.invalidate();
	btnSlot5.invalidate();
}

void BalanzaInteligenteView::Slot5Config() {
	presenter->seleccionarSlot(5);
	Unicode::strncpy(TxtDisplayPerfilBuffer, (presenter->getTitulo(4)).c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", presenter->getPesoPromedio(4));
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();

	btnSlot1.forceState(false);
	btnSlot2.forceState(false);
	btnSlot3.forceState(false);
	btnSlot4.forceState(false);
	btnSlot5.forceState(true);

	btnSlot1.invalidate();
	btnSlot2.invalidate();
	btnSlot3.invalidate();
	btnSlot4.invalidate();
	btnSlot5.invalidate();
}

void BalanzaInteligenteView::handleTickEvent() {
	if (animacion == true) {

		widgetCircular.invalidate();
		widgetCircular.setArc(widgetCircular.getArcStart(), widgetCircular.getArcEnd() + 2);
		widgetCircular.invalidate();

		if (widgetCircular.getArcEnd() > porcentaje) {
			animacion = false;
			
		}

	}

}

