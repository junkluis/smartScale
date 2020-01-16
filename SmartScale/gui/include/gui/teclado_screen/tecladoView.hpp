#ifndef TECLADO_VIEW_HPP
#define TECLADO_VIEW_HPP

#include <gui_generated/teclado_screen/tecladoViewBase.hpp>
#include <gui/teclado_screen/tecladoPresenter.hpp>
#include <gui/common/CustomKeyboard.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class tecladoView : public tecladoViewBase
{
public:
    tecladoView();
    virtual ~tecladoView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void obtenerAccion();
    virtual void registrarEntradaTeclado();
protected:

	CustomKeyboard keyboard;
};

#endif // TECLADO_VIEW_HPP
