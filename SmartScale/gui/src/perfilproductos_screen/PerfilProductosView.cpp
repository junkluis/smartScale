#include <gui/perfilproductos_screen/PerfilProductosView.hpp>

PerfilProductosView::PerfilProductosView()
{

}

void PerfilProductosView::setupScreen()
{
    PerfilProductosViewBase::setupScreen();
}

void PerfilProductosView::tearDownScreen()
{
    PerfilProductosViewBase::tearDownScreen();
}

void PerfilProductosView::CargarDatos() {

	//cargar datos de perfiles a Model.hpp [DATOS DE PRUEBA]
	std::string datosPrueba[5] = { "Nitrogeno", "Aire Comp.", "Co2", "Perfil Vacio", "Perfil Vacio" };
	slotDesc[0] = "Es un químico extremadamente frío, aproximadamente - 328°F";
	slotDesc[1] = "El aire medicinal usado en las unidades de cuidados intensivos";
	slotDesc[2] = "Puede utilizarse para proporcionar temperaturas de hasta -76 °C";
	slotDesc[3] = "NA";
	slotDesc[4] = "NA";
	esperado[0] = 10.00;
	esperado[1] = 11.00;
	esperado[2] = 12.00;
	esperado[3] = 00.00;
	esperado[4] = 00.00;
	diferencia[0] = 0.1;
	diferencia[1] = 0.2;
	diferencia[2] = 0.2;
	diferencia[3] = 0.0;
	diferencia[4] = 0.0;
	//FIN DE DATOS DE PRUEBA

	presenter->setSlot(datosPrueba[0], 1);
	presenter->setSlot(datosPrueba[1], 2);
	presenter->setSlot(datosPrueba[2], 3);
	presenter->setSlot(datosPrueba[3], 4);
	presenter->setSlot(datosPrueba[4], 5);

	slots[0] = presenter->getSlot(1);
	slots[1] = presenter->getSlot(2);
	slots[2] = presenter->getSlot(3);
	slots[3] = presenter->getSlot(4);
	slots[4] = presenter->getSlot(5);

	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, slots[0].c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, slotDesc[0].c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", esperado[0]);
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", diferencia[0]);
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();

	touchgfx_printf(slots[0].c_str());

	Unicode::strncpy(txtSlot1PerBuffer, slots[0].c_str(), TXTSLOT1PER_SIZE);
	Unicode::strncpy(txtSlot2PerBuffer, slots[1].c_str(), TXTSLOT2PER_SIZE);
	Unicode::strncpy(txtSlot3PerBuffer, slots[2].c_str(), TXTSLOT3PER_SIZE);
	Unicode::strncpy(txtSlot4PerBuffer, slots[3].c_str(), TXTSLOT4PER_SIZE);
	Unicode::strncpy(txtSlot5PerBuffer, slots[4].c_str(), TXTSLOT5PER_SIZE);

	//Unicode::snprintfFloat(txtDispPromBuffer, TXTDISPPROM_SIZE, "%0.2f", pesoProm1);
	//txtDispProm.invalidate();
	

}

void PerfilProductosView::inputPerfilTitulo() {
	presenter->setTecladoAccion("Titulo");
}

void PerfilProductosView::inputPerfilDescripcion() {
	presenter->setTecladoAccion("Descripcion");
}


void PerfilProductosView::Per1Config() {
	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, slots[0].c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, slotDesc[0].c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", esperado[0]);
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", diferencia[0]);
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();
}

void PerfilProductosView::Per2Config() {
	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, slots[1].c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, slotDesc[1].c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", esperado[1]);
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", diferencia[1]);
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();
}

void PerfilProductosView::Per3Config() {
	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, slots[2].c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, slotDesc[2].c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", esperado[2]);
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", diferencia[2]);
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();
}

void PerfilProductosView::Per4Config() {
	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, slots[3].c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, slotDesc[3].c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", esperado[3]);
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", diferencia[3]);
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();
}

void PerfilProductosView::Per5Config() {
	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, slots[4].c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, slotDesc[4].c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", esperado[4]);
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", diferencia[4]);
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();
}