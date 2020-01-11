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
	float peso;
	float promedio;
	float delta;
	int perfilSeleccionado = presenter->getSeleccionSlot();

	//Pesos de prueba
	float pesosPrueba[5] = { 10.05, 11.31, 11.70, 0, 0};
	float promediosPrueba[5] = { 10.00, 11.00, 12.00, 0, 0 };
	float deltaPrueba[5] = { 0.1, 0.2, 0.2, 0, 0 };
	peso = pesosPrueba[perfilSeleccionado-1];
	promedio = promediosPrueba[perfilSeleccionado - 1];
	delta = deltaPrueba[perfilSeleccionado - 1];

	//txtResultadoPesar
	Unicode::snprintfFloat(txtResultadoPesarBuffer, TXTRESULTADOPESAR_SIZE, "%0.2f", peso);
	Unicode::snprintfFloat(txtResultadoSmallBuffer, TXTRESULTADOSMALL_SIZE, "%0.2f", peso);
	txtResultadoPesar.invalidate();
	txtResultadoSmall.invalidate();

	porcentaje = (peso * 460)/(promedio);
	widgetCircular.setArc(268, 268);
	if (peso > (promedio + delta)) {
		porcentaje = porcentaje - 50;
		widgetCircularPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(235, 55, 55));
		TxtAlerta.setVisible(true);
		Unicode::strncpy(TxtAlertaBuffer, "FALTANTE!", TXTALERTA_SIZE);
		TxtAlerta.invalidate();
	}
	else if (peso < (promedio - delta)) {
		porcentaje = porcentaje + 50;
		widgetCircularPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 55));
		TxtAlerta.setVisible(true);
		Unicode::strncpy(TxtAlertaBuffer, "EXCESO!", TXTALERTA_SIZE);
		TxtAlerta.invalidate();
	}
	else {
		widgetCircularPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(55, 210, 210));
		TxtAlerta.setVisible(false);
		Unicode::strncpy(TxtAlertaBuffer, "", TXTALERTA_SIZE);
		TxtAlerta.invalidate();
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
}

void BalanzaInteligenteView::cargarDatos(){

	//cargar datos de perfiles a Model.hpp
	presenter->setSlot("Nitrogeno", 1);
	presenter->setSlot("Aire Comp.", 2);
	presenter->setSlot("CO2", 3);
	presenter->setSlot("Perfil Vacio", 4);
	presenter->setSlot("Perfil Vacio", 5);
	
	pesoProm1 = 10.00;
	pesoProm2 = 11.00;
	pesoProm3 = 12.00;
	pesoProm4 = 00.00;
	pesoProm5 = 00.00;

	delta1 = 0.1;
	delta2 = 0.2;
	delta3 = 0.2;
	delta4 = 0.0;
	delta5 = 0.0;

	slot1 = presenter->getSlot(1);
	slot2 = presenter->getSlot(2);
	slot3 = presenter->getSlot(3);
	slot4 = presenter->getSlot(4);
	slot5 = presenter->getSlot(5);

	//Si no ha seleccionado nada, se cargara el perfil 1
	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilBuffer, slot1.c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", pesoProm1);
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();
	
	Unicode::strncpy(txtSlot1Buffer, slot1.c_str(), TXTSLOT1_SIZE);
	Unicode::strncpy(txtSlot2Buffer, slot2.c_str(), TXTSLOT2_SIZE);
	Unicode::strncpy(txtSlot3Buffer, slot3.c_str(), TXTSLOT3_SIZE);
	Unicode::strncpy(txtSlot4Buffer, slot4.c_str(), TXTSLOT4_SIZE);
	Unicode::strncpy(txtSlot5Buffer, slot5.c_str(), TXTSLOT5_SIZE);

	txtSlot1.invalidate();
	txtSlot2.invalidate();
	txtSlot3.invalidate();
	txtSlot4.invalidate();
	txtSlot5.invalidate();

}

void BalanzaInteligenteView::Slot1Config() {
	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilBuffer, slot1.c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", pesoProm1);
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();
}

void BalanzaInteligenteView::Slot2Config() {
	presenter->seleccionarSlot(2);
	Unicode::strncpy(TxtDisplayPerfilBuffer, slot2.c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", pesoProm2);
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();
}

void BalanzaInteligenteView::Slot3Config() {
	presenter->seleccionarSlot(3);
	Unicode::strncpy(TxtDisplayPerfilBuffer, slot3.c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", pesoProm3);
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();
}

void BalanzaInteligenteView::Slot4Config() {
	presenter->seleccionarSlot(4);
	Unicode::strncpy(TxtDisplayPerfilBuffer, slot4.c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", pesoProm4);
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();
}

void BalanzaInteligenteView::Slot5Config() {
	presenter->seleccionarSlot(5);
	Unicode::strncpy(TxtDisplayPerfilBuffer, slot5.c_str(), TXTDISPLAYPERFIL_SIZE);
	Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", pesoProm5);
	TxtDisplayPerfil.invalidate();
	txtDispProm.invalidate();
}

void BalanzaInteligenteView::handleTickEvent() {
	if (animacion == true) {

		widgetCircular.setArc(widgetCircular.getArcStart(), widgetCircular.getArcEnd() + 2);
		widgetCircular.invalidate();

		if (widgetCircular.getArcEnd() > porcentaje) {
			animacion = false;
			
		}

	}

}

