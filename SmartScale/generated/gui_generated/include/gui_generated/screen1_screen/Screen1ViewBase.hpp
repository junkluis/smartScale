/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1_VIEW_BASE_HPP
#define SCREEN1_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/Button.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}

    virtual void setupScreen();

    /*
     * Custom Action Handlers
     */
    virtual void ingresarUsuarioPorTeclado()
    {
        // Override and implement this function in Screen1View
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image fondo;
    touchgfx::TextArea txt_titulo_inicio_sesion;
    touchgfx::ButtonWithLabel btn_iniciar_sesion;
    touchgfx::Button img_usuario;
    touchgfx::Button img_clave;
    touchgfx::TextArea txt_usuario;
    touchgfx::TextArea txt_clave;
    touchgfx::TextArea input_user;
    touchgfx::TextArea input_clave;

private:

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen1ViewBase, const touchgfx::AbstractButton&> buttonCallback;

};

#endif // SCREEN1_VIEW_BASE_HPP
