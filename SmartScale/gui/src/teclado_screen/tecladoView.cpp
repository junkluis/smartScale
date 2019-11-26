#include <gui/teclado_screen/tecladoView.hpp>

tecladoView::tecladoView()
{
	keyboard.setPosition(10, 15, 320, 240);
    add(keyboard);
}

void tecladoView::setupScreen()
{
    tecladoViewBase::setupScreen();
}

void tecladoView::tearDownScreen()
{
    tecladoViewBase::tearDownScreen();
}

void tecladoView::obtenerAccion()
{
	std::string accion = presenter->getTecladoAccion();
	Unicode::strncpy(txt_accionBuffer, accion.c_str(), TXT_ACCION_SIZE);
	txt_accion.invalidate();

}

void tecladoView::registrarEntradaTeclado()
{	
	std::string accion = presenter->getTecladoAccion();
	Unicode::strncpy(txt_accionBuffer, keyboard.buffer, TXT_ACCION_SIZE);
	txt_accion.invalidate();
	
	if(accion == "Usuario")
	{
		presenter->setUsuario(keyboard.buffer);
	} else if(accion == "Clave")
	{
		presenter->setClave(keyboard.buffer);
	}
	
    application().gotoScreen1ScreenCoverTransitionSouth();
}