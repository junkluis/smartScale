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

	Unicode::strncpy(txtSlot1PerBuffer, (presenter->getTitulo(0)).c_str(), TXTSLOT1PER_SIZE);
	Unicode::strncpy(txtSlot2PerBuffer, (presenter->getTitulo(1)).c_str(), TXTSLOT2PER_SIZE);
	Unicode::strncpy(txtSlot3PerBuffer, (presenter->getTitulo(2)).c_str(), TXTSLOT3PER_SIZE);
	Unicode::strncpy(txtSlot4PerBuffer, (presenter->getTitulo(3)).c_str(), TXTSLOT4PER_SIZE);
	Unicode::strncpy(txtSlot5PerBuffer, (presenter->getTitulo(4)).c_str(), TXTSLOT5PER_SIZE);

	if (presenter->getEditor() == true) {
		btnEditarPerfil.forceState(true);
		PerfilProductosView::EditarPerfil();
		
		std::string titulo = (char*)(presenter->getTituloEditable());
		//std::string descrip = (char*)(presenter->getDescriEditable());

		Unicode::strncpy(TxtDisplayPerfilDescBuffer, titulo.c_str(), TXTDISPLAYPERFILDESC_SIZE);
		//Unicode::strncpy(TxtDisplayDescBuffer, descrip.c_str(), TXTDISPLAYDESC_SIZE);
		Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", presenter->getPesoEditable());
		Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", presenter->getDifeEditable());

		txtPesoEsperado.invalidate();
		TxtDisplayDesc.invalidate();
		TxtDisplayPerfilDesc.invalidate();
		txtDiferenciaPerm.invalidate();

	}
	else {

		presenter->seleccionarSlot(0);
		Unicode::strncpy(TxtDisplayPerfilDescBuffer, (presenter->getTitulo(0)).c_str(), TXTDISPLAYPERFILDESC_SIZE);
		Unicode::strncpy(TxtDisplayDescBuffer, (presenter->getDescripcion(0)).c_str(), TXTDISPLAYDESC_SIZE);
		Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", presenter->getPesoPromedio(0));
		Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", presenter->getDiferenciaPermitida(0));

		txtPesoEsperado.invalidate();
		TxtDisplayDesc.invalidate();
		TxtDisplayPerfilDesc.invalidate();
		txtDiferenciaPerm.invalidate();
		
	}

	
	
	
	
}

void PerfilProductosView::inputPerfilTitulo() {
	accion = "Titulo";
	presenter->setTecladoAccion(accion);
}

void PerfilProductosView::inputPerfilDescripcion() {
	accion = "Descripcion";
	presenter->setTecladoAccion(accion);
}

void PerfilProductosView::EditarPerfil() {
	bool estado = btnEditarPerfil.getState();
	touchgfx::Image lapices[4] = { lapiz1, lapiz2, lapiz3, lapiz4 };
	touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > btns[4] = { btnPesoEsp, btnDiferenciaPerm, btnDescripcion, btnTitulo };

	if (estado == 0) {
		//Guardar
		
		lapiz1.setVisible(false);
		lapiz2.setVisible(false);
		lapiz3.setVisible(false);
		lapiz4.setVisible(false);
		btnPesoEsp.setVisible(false);
		btnDiferenciaPerm.setVisible(false);
		btnDescripcion.setVisible(false);
		btnTitulo.setVisible(false);

		for (int i = 0; i < 4; i++) {
			lapices[i].invalidate();
			btns[i].invalidate();
		}

		std::string titulo = (char*)(presenter->getTituloEditable());
		float pesoEdit = presenter->getPesoEditable();
		float difEdit = presenter->getDifeEditable();

		float val1 = false;
		float val2 = false;
		float val3 = false;

		int x = Unicode::strlen(titulo.c_str());

		if (x > 0) {
			val1 = true;
		}
		if (pesoEdit > 0 && pesoEdit < 99) {
			val2 = true;
		}
		if (difEdit > 0 && difEdit < 99) {
			val3 = true;
		}

		if (val1 == true &&
			val2 == true &&
			val3 == true ) {
			//GUARDAR PERFIL
			presenter->setEditor(false);
			int slot = presenter->getSeleccionSlot();
			presenter->setTitulo(titulo, slot);
			presenter->setDescripcion("Sin Descripción", slot);
			presenter->setPesoPromedio(pesoEdit, slot);
			presenter->setDiferenciaPermitida(difEdit, slot);
			Unicode::strncpy(TxtDisplayPerfilDescBuffer, titulo.c_str(), TXTDISPLAYPERFILDESC_SIZE);
			Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", pesoEdit);
			Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", difEdit);
			if (slot == 0) {
				Unicode::strncpy(txtSlot1PerBuffer, titulo.c_str(), TXTSLOT1PER_SIZE);
				txtSlot1Per.invalidate();
			}
			else if (slot == 1) {
				Unicode::strncpy(txtSlot2PerBuffer, titulo.c_str(), TXTSLOT2PER_SIZE);
				txtSlot2Per.invalidate();
			}
			else if (slot == 2) {
				Unicode::strncpy(txtSlot3PerBuffer, titulo.c_str(), TXTSLOT3PER_SIZE);
				txtSlot3Per.invalidate();
			}
			else if (slot == 3) {
				Unicode::strncpy(txtSlot4PerBuffer, titulo.c_str(), TXTSLOT4PER_SIZE);
				txtSlot4Per.invalidate();
			}
			else if (slot == 4) {
				Unicode::strncpy(txtSlot5PerBuffer, titulo.c_str(), TXTSLOT5PER_SIZE);
				txtSlot5Per.invalidate();
			}

			txtPesoEsperado.invalidate();
			TxtDisplayDesc.invalidate();
			TxtDisplayPerfilDesc.invalidate();
			txtDiferenciaPerm.invalidate();

		}
		else {
			btnEditarPerfil.forceState(false);
			modalWindow1.show();
			
		}
		
	}
	else {
		//Editar
		presenter->setEditor(true);
		lapiz1.setVisible(true);
		lapiz2.setVisible(true);
		lapiz3.setVisible(true);
		lapiz4.setVisible(true);
		btnPesoEsp.setVisible(true);
		btnDiferenciaPerm.setVisible(true);
		btnDescripcion.setVisible(true);
		btnTitulo.setVisible(true);

		for (int i = 0; i < 4; i++) {
			lapices[i].invalidate();
			btns[i].invalidate();
		}

	}

}

void PerfilProductosView::vaciarPerfil() {

	int slot = presenter->getSeleccionSlot();
	presenter->setTitulo("Perfil Vacio", slot);
	presenter->setDescripcion("Sin Descripción", slot);
	presenter->setPesoPromedio(0, slot);
	presenter->setDiferenciaPermitida(0, slot);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, (presenter->getTitulo(slot)).c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, (presenter->getDescripcion(slot)).c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", presenter->getPesoPromedio(slot));
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", presenter->getDiferenciaPermitida(slot));
	if (slot == 0) {
		Unicode::strncpy(txtSlot1PerBuffer, (presenter->getTitulo(slot)).c_str(), TXTSLOT1PER_SIZE);
		txtSlot1Per.invalidate();
	}
	else if (slot == 1) {
		Unicode::strncpy(txtSlot2PerBuffer, (presenter->getTitulo(slot)).c_str(), TXTSLOT2PER_SIZE);
		txtSlot2Per.invalidate();
	}
	else if (slot == 2) {
		Unicode::strncpy(txtSlot3PerBuffer, (presenter->getTitulo(slot)).c_str(), TXTSLOT3PER_SIZE);
		txtSlot3Per.invalidate();
	}
	else if (slot == 3) {
		Unicode::strncpy(txtSlot4PerBuffer, (presenter->getTitulo(slot)).c_str(), TXTSLOT4PER_SIZE);
		txtSlot4Per.invalidate();
	}
	else if (slot == 4) {
		Unicode::strncpy(txtSlot5PerBuffer, (presenter->getTitulo(slot)).c_str(), TXTSLOT5PER_SIZE);
		txtSlot5Per.invalidate();
	}

	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();
	

}

void PerfilProductosView::ingresarPesoEsperado() {
	accion = "Peso Esperado";
	presenter->setNumPadAccion(accion);
}

void PerfilProductosView::ingresarDiferenciaPerm() {
	int slot = presenter->getSeleccionSlot();
	presenter->setDifeEditable(presenter->getDiferenciaPermitida(slot));
	accion = "Diferencia\nPermitida";
	presenter->setNumPadAccion(accion);
}

void PerfilProductosView::Per1Config() {
	
	presenter->seleccionarSlot(0);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, (presenter->getTitulo(0)).c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, (presenter->getDescripcion(0)).c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", presenter->getPesoPromedio(0));
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", presenter->getDiferenciaPermitida(0));
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();
	
}

void PerfilProductosView::Per2Config() {
	
	presenter->seleccionarSlot(1);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, (presenter->getTitulo(1)).c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, (presenter->getDescripcion(1)).c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", presenter->getPesoPromedio(1));
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", presenter->getDiferenciaPermitida(1));
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();

}

void PerfilProductosView::Per3Config() {
	
	presenter->seleccionarSlot(2);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, (presenter->getTitulo(2)).c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, (presenter->getDescripcion(2)).c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", presenter->getPesoPromedio(2));
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", presenter->getDiferenciaPermitida(2));
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();
}

void PerfilProductosView::Per4Config() {
	
	presenter->seleccionarSlot(3);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, (presenter->getTitulo(3)).c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, (presenter->getDescripcion(3)).c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", presenter->getPesoPromedio(3));
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", presenter->getDiferenciaPermitida(3));
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();

}

void PerfilProductosView::Per5Config() {
	
	presenter->seleccionarSlot(4);
	Unicode::strncpy(TxtDisplayPerfilDescBuffer, (presenter->getTitulo(4)).c_str(), TXTDISPLAYPERFILDESC_SIZE);
	Unicode::strncpy(TxtDisplayDescBuffer, (presenter->getDescripcion(4)).c_str(), TXTDISPLAYDESC_SIZE);
	Unicode::snprintfFloat(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%0.2f", presenter->getPesoPromedio(4));
	Unicode::snprintfFloat(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%0.2f", presenter->getDiferenciaPermitida(4));
	txtPesoEsperado.invalidate();
	TxtDisplayDesc.invalidate();
	TxtDisplayPerfilDesc.invalidate();
	txtDiferenciaPerm.invalidate();
}