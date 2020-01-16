/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MENUPRINCIPALVIEWBASE_HPP
#define MENUPRINCIPALVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/menuprincipal_screen/MenuPrincipalPresenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/SwipeContainer.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class MenuPrincipalViewBase : public touchgfx::View<MenuPrincipalPresenter>
{
public:
    MenuPrincipalViewBase();
    virtual ~MenuPrincipalViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image backgroundmenu;
    touchgfx::SwipeContainer MenuSwap;
    touchgfx::Container Balanza;
    touchgfx::Image imgBalanza;
    touchgfx::TextArea txt_balanzaInteligente;
    touchgfx::ButtonWithLabel empezarBalanza;
    touchgfx::Image image1;

    touchgfx::Container Perfil;
    touchgfx::Image imgPerfil;
    touchgfx::TextArea txt_perfiles;
    touchgfx::ButtonWithLabel empezarPerfiles;
    touchgfx::TextArea subtxt_perfiles;
    touchgfx::Image image1_1;

    touchgfx::Container CerrarSesion;
    touchgfx::Image imgOut;
    touchgfx::ButtonWithLabel Empezar;
    touchgfx::Image image1_2;
    touchgfx::TextArea txt_balanzaInteligente_1;

    touchgfx::Container CerrarSesion_1;
    touchgfx::Image imgOut_1;
    touchgfx::ButtonWithLabel cerrarSesion_1;
    touchgfx::Image image1_3_1;

    touchgfx::TextArea txt_tituloMenu;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MenuPrincipalViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // MENUPRINCIPALVIEWBASE_HPP
