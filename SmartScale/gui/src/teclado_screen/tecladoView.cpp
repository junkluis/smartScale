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
	Unicode::snprintf(txt_accionBuffer, TXT_ACCION_SIZE, "%s", "luis");
	touchgfx_printf(accion.c_str());
}
