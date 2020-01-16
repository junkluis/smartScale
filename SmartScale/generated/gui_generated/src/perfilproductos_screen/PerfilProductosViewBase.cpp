/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/perfilproductos_screen/PerfilProductosViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

PerfilProductosViewBase::PerfilProductosViewBase() :
    buttonCallback(this, &PerfilProductosViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &PerfilProductosViewBase::flexButtonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    lapiz2.setXY(131, 103);
    lapiz2.setVisible(false);
    lapiz2.setBitmap(touchgfx::Bitmap(BITMAP_EDIT_ID));

    backgroundmenu.setXY(0, 0);
    backgroundmenu.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_TITLE_ID));

    txt_tituloPerfil.setXY(20, 24);
    txt_tituloPerfil.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txt_tituloPerfil.setLinespacing(0);
    txt_tituloPerfil.setTypedText(touchgfx::TypedText(T_SINGLEUSEID36));

    btnPesoEsp.setBoxWithBorderPosition(0, 0, 96, 94);
    btnPesoEsp.setBorderSize(5);
    btnPesoEsp.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    btnPesoEsp.setPosition(162, 130, 96, 94);
    btnPesoEsp.setVisible(false);
    btnPesoEsp.setAlpha(0);
    btnPesoEsp.setAction(flexButtonCallback);

    btnDiferenciaPerm.setBoxWithBorderPosition(0, 0, 93, 94);
    btnDiferenciaPerm.setBorderSize(5);
    btnDiferenciaPerm.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    btnDiferenciaPerm.setPosition(283, 130, 93, 94);
    btnDiferenciaPerm.setVisible(false);
    btnDiferenciaPerm.setAlpha(0);
    btnDiferenciaPerm.setAction(flexButtonCallback);

    btnDescripcion.setBoxWithBorderPosition(0, 0, 15, 16);
    btnDescripcion.setBorderSize(5);
    btnDescripcion.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    btnDescripcion.setPosition(454, 96, 15, 16);
    btnDescripcion.setAlpha(0);

    btnTitulo.setBoxWithBorderPosition(0, 0, 339, 25);
    btnTitulo.setBorderSize(5);
    btnTitulo.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    btnTitulo.setPosition(128, 69, 339, 25);
    btnTitulo.setVisible(false);
    btnTitulo.setAlpha(0);
    btnTitulo.setAction(flexButtonCallback);

    perfilesButtons.setPosition(0, 47, 112, 225);
    perfilesButtons.setScrollbarsColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    perfilesButtons.setScrollbarsAlpha(118);

    btnSlot5Per.setXY(0, 245);
    btnSlot5Per.setBitmaps(touchgfx::Bitmap(BITMAP_BOTONPERFIL_ID), touchgfx::Bitmap(BITMAP_BOTONPERFILPRESSED_ID));
    btnSlot5Per.setAction(buttonCallback);
    perfilesButtons.add(btnSlot5Per);

    txtSlot5Per.setPosition(0, 263, 112, 24);
    txtSlot5Per.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtSlot5Per.setLinespacing(0);
    Unicode::snprintf(txtSlot5PerBuffer, TXTSLOT5PER_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID82).getText());
    txtSlot5Per.setWildcard(txtSlot5PerBuffer);
    txtSlot5Per.setTypedText(touchgfx::TypedText(T_SINGLEUSEID81));
    perfilesButtons.add(txtSlot5Per);

    btnSlot4Per.setXY(0, 184);
    btnSlot4Per.setBitmaps(touchgfx::Bitmap(BITMAP_BOTONPERFIL_ID), touchgfx::Bitmap(BITMAP_BOTONPERFILPRESSED_ID));
    btnSlot4Per.setAction(buttonCallback);
    perfilesButtons.add(btnSlot4Per);

    txtSlot4Per.setPosition(0, 202, 112, 24);
    txtSlot4Per.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtSlot4Per.setLinespacing(0);
    Unicode::snprintf(txtSlot4PerBuffer, TXTSLOT4PER_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID84).getText());
    txtSlot4Per.setWildcard(txtSlot4PerBuffer);
    txtSlot4Per.setTypedText(touchgfx::TypedText(T_SINGLEUSEID83));
    perfilesButtons.add(txtSlot4Per);

    btnSlot3Per.setXY(0, 123);
    btnSlot3Per.setBitmaps(touchgfx::Bitmap(BITMAP_BOTONPERFIL_ID), touchgfx::Bitmap(BITMAP_BOTONPERFILPRESSED_ID));
    btnSlot3Per.setAction(buttonCallback);
    perfilesButtons.add(btnSlot3Per);

    txtSlot3Per.setPosition(0, 141, 112, 24);
    txtSlot3Per.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtSlot3Per.setLinespacing(0);
    Unicode::snprintf(txtSlot3PerBuffer, TXTSLOT3PER_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID86).getText());
    txtSlot3Per.setWildcard(txtSlot3PerBuffer);
    txtSlot3Per.setTypedText(touchgfx::TypedText(T_SINGLEUSEID85));
    perfilesButtons.add(txtSlot3Per);

    btnSlot2Per.setXY(0, 62);
    btnSlot2Per.setBitmaps(touchgfx::Bitmap(BITMAP_BOTONPERFIL_ID), touchgfx::Bitmap(BITMAP_BOTONPERFILPRESSED_ID));
    btnSlot2Per.setAction(buttonCallback);
    perfilesButtons.add(btnSlot2Per);

    txtSlot2Per.setPosition(0, 80, 112, 24);
    txtSlot2Per.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtSlot2Per.setLinespacing(0);
    Unicode::snprintf(txtSlot2PerBuffer, TXTSLOT2PER_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID88).getText());
    txtSlot2Per.setWildcard(txtSlot2PerBuffer);
    txtSlot2Per.setTypedText(touchgfx::TypedText(T_SINGLEUSEID87));
    perfilesButtons.add(txtSlot2Per);

    btnSlot1Per.setXY(0, 1);
    btnSlot1Per.setBitmaps(touchgfx::Bitmap(BITMAP_BOTONPERFIL_ID), touchgfx::Bitmap(BITMAP_BOTONPERFILPRESSED_ID));
    btnSlot1Per.setAction(buttonCallback);
    perfilesButtons.add(btnSlot1Per);

    txtSlot1Per.setPosition(0, 19, 112, 24);
    txtSlot1Per.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtSlot1Per.setLinespacing(0);
    Unicode::snprintf(txtSlot1PerBuffer, TXTSLOT1PER_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID90).getText());
    txtSlot1Per.setWildcard(txtSlot1PerBuffer);
    txtSlot1Per.setTypedText(touchgfx::TypedText(T_SINGLEUSEID89));
    perfilesButtons.add(txtSlot1Per);

    homeButton.setBoxWithBorderPosition(0, 0, 65, 39);
    homeButton.setBorderSize(5);
    homeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(49, 49, 49), touchgfx::Color::getColorFrom24BitRGB(75, 83, 86), touchgfx::Color::getColorFrom24BitRGB(49, 49, 49), touchgfx::Color::getColorFrom24BitRGB(75, 83, 86));
    homeButton.setBitmaps(Bitmap(BITMAP_HOME_ID), Bitmap(BITMAP_HOME_ID));
    homeButton.setBitmapXY(0, 0);
    homeButton.setPosition(411, 5, 65, 39);
    homeButton.setAction(flexButtonCallback);

    TxtDisplayPerfilDesc.setPosition(153, 78, 316, 34);
    TxtDisplayPerfilDesc.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    TxtDisplayPerfilDesc.setLinespacing(0);
    Unicode::snprintf(TxtDisplayPerfilDescBuffer, TXTDISPLAYPERFILDESC_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID107).getText());
    TxtDisplayPerfilDesc.setWildcard(TxtDisplayPerfilDescBuffer);
    TxtDisplayPerfilDesc.setTypedText(touchgfx::TypedText(T_SINGLEUSEID91));

    TxtDisplayDesc.setPosition(162, 78, 193, 40);
    TxtDisplayDesc.setVisible(false);
    TxtDisplayDesc.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    TxtDisplayDesc.setLinespacing(0);
    Unicode::snprintf(TxtDisplayDescBuffer, TXTDISPLAYDESC_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID108).getText());
    TxtDisplayDesc.setWildcard(TxtDisplayDescBuffer);
    TxtDisplayDesc.setTypedText(touchgfx::TypedText(T_SINGLEUSEID92));

    circle1.setPosition(180, 160, 60, 60);
    circle1.setCenter(30, 30);
    circle1.setRadius(30);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    circle1.setPainter(circle1Painter);

    txtPesoEsperado.setXY(187, 175);
    txtPesoEsperado.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    txtPesoEsperado.setLinespacing(0);
    Unicode::snprintf(txtPesoEsperadoBuffer, TXTPESOESPERADO_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID109).getText());
    txtPesoEsperado.setWildcard(txtPesoEsperadoBuffer);
    txtPesoEsperado.resizeToCurrentText();
    txtPesoEsperado.setTypedText(touchgfx::TypedText(T_SINGLEUSEID93));

    textArea2_1.setXY(199, 197);
    textArea2_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID94));

    textArea2_1_1.setXY(187, 132);
    textArea2_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2_1_1.setLinespacing(0);
    textArea2_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID95));

    circle1_2.setPosition(300, 158, 60, 60);
    circle1_2.setCenter(30, 30);
    circle1_2.setRadius(30);
    circle1_2.setLineWidth(0);
    circle1_2.setArc(0, 360);
    circle1_2Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    circle1_2.setPainter(circle1_2Painter);

    txtDiferenciaPerm.setXY(307, 173);
    txtDiferenciaPerm.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    txtDiferenciaPerm.setLinespacing(0);
    Unicode::snprintf(txtDiferenciaPermBuffer, TXTDIFERENCIAPERM_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID110).getText());
    txtDiferenciaPerm.setWildcard(txtDiferenciaPermBuffer);
    txtDiferenciaPerm.resizeToCurrentText();
    txtDiferenciaPerm.setTypedText(touchgfx::TypedText(T_SINGLEUSEID99));

    textArea2_1_3.setXY(319, 195);
    textArea2_1_3.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2_1_3.setLinespacing(0);
    textArea2_1_3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID100));

    textArea2_1_1_2.setXY(307, 130);
    textArea2_1_1_2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2_1_1_2.setLinespacing(0);
    textArea2_1_1_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID101));

    lapiz1.setXY(131, 82);
    lapiz1.setVisible(false);
    lapiz1.setBitmap(touchgfx::Bitmap(BITMAP_EDIT_ID));

    lapiz3.setXY(227, 201);
    lapiz3.setVisible(false);
    lapiz3.setBitmap(touchgfx::Bitmap(BITMAP_EDIT_ID));

    lapiz4.setXY(346, 200);
    lapiz4.setVisible(false);
    lapiz4.setBitmap(touchgfx::Bitmap(BITMAP_EDIT_ID));

    eliminarDatos.setXY(410, 207);
    eliminarDatos.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_ERASE_ID), touchgfx::Bitmap(BITMAP_ERASE_ID));
    eliminarDatos.setIconXY(18, 18);
    eliminarDatos.setAction(buttonCallback);

    btnEditarPerfil.setXY(410, 143);
    btnEditarPerfil.setBitmaps(touchgfx::Bitmap(BITMAP_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_ROUND_ICON_BUTTON_PRESSED_ID));
    btnEditarPerfil.setAction(buttonCallback);

    modalWindow1.setBackground(touchgfx::BitmapId(BITMAP_MODAL_BACKGROUND_ID), 70, 16);
    modalWindow1.setShadeColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    modalWindow1.setShadeAlpha(150);
    modalWindow1.hide();

    textArea1.setXY(172, 67);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID119));
    modalWindow1.add(textArea1);

    image1.setXY(51, 35);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_WARNING_ID));
    modalWindow1.add(image1);

    CerrarModal.setXY(85, 159);
    CerrarModal.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    CerrarModal.setLabelText(touchgfx::TypedText(T_SINGLEUSEID120));
    CerrarModal.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    CerrarModal.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    CerrarModal.setAction(buttonCallback);
    modalWindow1.add(CerrarModal);

    add(lapiz2);
    add(backgroundmenu);
    add(txt_tituloPerfil);
    add(btnPesoEsp);
    add(btnDiferenciaPerm);
    add(btnDescripcion);
    add(btnTitulo);
    add(perfilesButtons);
    add(homeButton);
    add(TxtDisplayPerfilDesc);
    add(TxtDisplayDesc);
    add(circle1);
    add(txtPesoEsperado);
    add(textArea2_1);
    add(textArea2_1_1);
    add(circle1_2);
    add(txtDiferenciaPerm);
    add(textArea2_1_3);
    add(textArea2_1_1_2);
    add(lapiz1);
    add(lapiz3);
    add(lapiz4);
    add(eliminarDatos);
    add(btnEditarPerfil);
    add(modalWindow1);
}

void PerfilProductosViewBase::setupScreen()
{

}

//Called when the screen is done with transition/load
void PerfilProductosViewBase::afterTransition()
{
    //CargarDatos
    //When screen is entered call virtual function
    //Call CargarDatos
    CargarDatos();
}

void PerfilProductosViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnSlot5Per)
    {
        //Per5Config
        //When btnSlot5Per clicked call virtual function
        //Call Per5Config
        Per5Config();
    }
    else if (&src == &btnSlot4Per)
    {
        //Per4Config
        //When btnSlot4Per clicked call virtual function
        //Call Per4Config
        Per4Config();
    }
    else if (&src == &btnSlot3Per)
    {
        //Per3Config
        //When btnSlot3Per clicked call virtual function
        //Call Per3Config
        Per3Config();
    }
    else if (&src == &btnSlot2Per)
    {
        //Per2Config
        //When btnSlot2Per clicked call virtual function
        //Call Per2Config
        Per2Config();
    }
    else if (&src == &btnSlot1Per)
    {
        //Per1Config
        //When btnSlot1Per clicked call virtual function
        //Call Per1Config
        Per1Config();
    }
    else if (&src == &eliminarDatos)
    {
        //vaciarPerfil
        //When eliminarDatos clicked call virtual function
        //Call vaciarPerfil
        vaciarPerfil();
    }
    else if (&src == &btnEditarPerfil)
    {
        //EditarPerfil
        //When btnEditarPerfil clicked call virtual function
        //Call EditarPerfil
        EditarPerfil();
    }
    else if (&src == &CerrarModal)
    {
        //cerrarModal
        //When CerrarModal clicked hide modalWindow1
        //Hide modalWindow1
        modalWindow1.setVisible(false);
        modalWindow1.invalidate();
    }
}

void PerfilProductosViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &btnPesoEsp)
    {
        //ingresarPesoEsperado
        //When btnPesoEsp clicked call virtual function
        //Call ingresarPesoEsperado
        ingresarPesoEsperado();
    }
    else if (&src == &btnDiferenciaPerm)
    {
        //ingresarDiferenciaPerm
        //When btnDiferenciaPerm clicked call virtual function
        //Call ingresarDiferenciaPerm
        ingresarDiferenciaPerm();
    }
    else if (&src == &btnTitulo)
    {
        //inputPerfilTitulo
        //When btnTitulo clicked call virtual function
        //Call inputPerfilTitulo
        inputPerfilTitulo();
    }
    else if (&src == &homeButton)
    {
        //regresar
        //When homeButton clicked change screen to MenuPrincipal
        //Go to MenuPrincipal with no screen transition
        application().gotoMenuPrincipalScreenNoTransition();
    }
}
