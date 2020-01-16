/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef PERFILPRODUCTOSVIEWBASE_HPP
#define PERFILPRODUCTOSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/perfilproductos_screen/PerfilProductosPresenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/containers/ScrollableContainer.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/containers/ModalWindow.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
class PerfilProductosViewBase : public touchgfx::View<PerfilProductosPresenter>
{
public:
    PerfilProductosViewBase();
    virtual ~PerfilProductosViewBase() {}
    virtual void setupScreen();
    virtual void afterTransition();

    /*
     * Virtual Action Handlers
     */
    virtual void CargarDatos()
    {
        // Override and implement this function in PerfilProductos
    }

    virtual void Per1Config()
    {
        // Override and implement this function in PerfilProductos
    }

    virtual void Per2Config()
    {
        // Override and implement this function in PerfilProductos
    }

    virtual void Per3Config()
    {
        // Override and implement this function in PerfilProductos
    }

    virtual void Per4Config()
    {
        // Override and implement this function in PerfilProductos
    }

    virtual void Per5Config()
    {
        // Override and implement this function in PerfilProductos
    }

    virtual void inputPerfilTitulo()
    {
        // Override and implement this function in PerfilProductos
    }

    virtual void EditarPerfil()
    {
        // Override and implement this function in PerfilProductos
    }

    virtual void ingresarPesoEsperado()
    {
        // Override and implement this function in PerfilProductos
    }

    virtual void vaciarPerfil()
    {
        // Override and implement this function in PerfilProductos
    }

    virtual void ingresarDiferenciaPerm()
    {
        // Override and implement this function in PerfilProductos
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image lapiz2;
    touchgfx::Image backgroundmenu;
    touchgfx::TextArea txt_tituloPerfil;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > btnPesoEsp;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > btnDiferenciaPerm;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > btnDescripcion;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > btnTitulo;
    touchgfx::ScrollableContainer perfilesButtons;
    touchgfx::Button btnSlot5Per;
    touchgfx::TextAreaWithOneWildcard txtSlot5Per;
    touchgfx::Button btnSlot4Per;
    touchgfx::TextAreaWithOneWildcard txtSlot4Per;
    touchgfx::Button btnSlot3Per;
    touchgfx::TextAreaWithOneWildcard txtSlot3Per;
    touchgfx::Button btnSlot2Per;
    touchgfx::TextAreaWithOneWildcard txtSlot2Per;
    touchgfx::Button btnSlot1Per;
    touchgfx::TextAreaWithOneWildcard txtSlot1Per;

    touchgfx::ImageButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > > homeButton;
    touchgfx::TextAreaWithOneWildcard TxtDisplayPerfilDesc;
    touchgfx::TextAreaWithOneWildcard TxtDisplayDesc;
    touchgfx::Circle circle1;
    touchgfx::PainterRGB565 circle1Painter;
    touchgfx::TextAreaWithOneWildcard txtPesoEsperado;
    touchgfx::TextArea textArea2_1;
    touchgfx::TextArea textArea2_1_1;
    touchgfx::Circle circle1_2;
    touchgfx::PainterRGB565 circle1_2Painter;
    touchgfx::TextAreaWithOneWildcard txtDiferenciaPerm;
    touchgfx::TextArea textArea2_1_3;
    touchgfx::TextArea textArea2_1_1_2;
    touchgfx::Image lapiz1;
    touchgfx::Image lapiz3;
    touchgfx::Image lapiz4;
    touchgfx::ButtonWithIcon eliminarDatos;
    touchgfx::ToggleButton btnEditarPerfil;
    touchgfx::ModalWindow modalWindow1;
    touchgfx::TextArea textArea1;
    touchgfx::Image image1;
    touchgfx::ButtonWithLabel CerrarModal;


    /*
     * Wildcard Buffers
     */
    static const uint16_t TXTSLOT5PER_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtSlot5PerBuffer[TXTSLOT5PER_SIZE];
    static const uint16_t TXTSLOT4PER_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtSlot4PerBuffer[TXTSLOT4PER_SIZE];
    static const uint16_t TXTSLOT3PER_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtSlot3PerBuffer[TXTSLOT3PER_SIZE];
    static const uint16_t TXTSLOT2PER_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtSlot2PerBuffer[TXTSLOT2PER_SIZE];
    static const uint16_t TXTSLOT1PER_SIZE = 16;
    touchgfx::Unicode::UnicodeChar txtSlot1PerBuffer[TXTSLOT1PER_SIZE];
    static const uint16_t TXTDISPLAYPERFILDESC_SIZE = 30;
    touchgfx::Unicode::UnicodeChar TxtDisplayPerfilDescBuffer[TXTDISPLAYPERFILDESC_SIZE];
    static const uint16_t TXTDISPLAYDESC_SIZE = 67;
    touchgfx::Unicode::UnicodeChar TxtDisplayDescBuffer[TXTDISPLAYDESC_SIZE];
    static const uint16_t TXTPESOESPERADO_SIZE = 6;
    touchgfx::Unicode::UnicodeChar txtPesoEsperadoBuffer[TXTPESOESPERADO_SIZE];
    static const uint16_t TXTDIFERENCIAPERM_SIZE = 6;
    touchgfx::Unicode::UnicodeChar txtDiferenciaPermBuffer[TXTDIFERENCIAPERM_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<PerfilProductosViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<PerfilProductosViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // PERFILPRODUCTOSVIEWBASE_HPP
