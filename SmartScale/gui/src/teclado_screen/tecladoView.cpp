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
