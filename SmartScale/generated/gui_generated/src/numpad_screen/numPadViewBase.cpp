/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/numpad_screen/numPadViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

numPadViewBase::numPadViewBase() :
    buttonCallback(this, &numPadViewBase::buttonCallbackHandler)
{
    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(233, 232, 226));

    btnGuardarNum.setXY(343, 131);
    btnGuardarNum.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_OK_ID), touchgfx::Bitmap(BITMAP_BTN_OK_PRESSED_ID));
    btnGuardarNum.setAction(buttonCallback);

    txt_num.setPosition(342, 81, 122, 35);
    txt_num.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    txt_num.setLinespacing(0);
    txt_numBuffer[0] = 0;
    txt_num.setWildcard(txt_numBuffer);
    txt_num.setTypedText(touchgfx::TypedText(T_SINGLEUSEID111));

    boxWithBorder1.setPosition(55, 54, 71, 72);
    boxWithBorder1.setColor(touchgfx::Color::getColorFrom24BitRGB(241, 241, 241));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(135, 135, 135));
    boxWithBorder1.setBorderSize(3);

    num.setXY(65, 66);
    num.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    num.setLinespacing(0);
    Unicode::snprintf(numBuffer, NUM_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID117).getText());
    num.setWildcard(numBuffer);
    num.resizeToCurrentText();
    num.setTypedText(touchgfx::TypedText(T_SINGLEUSEID113));

    textArea1_1.setXY(141, 66);
    textArea1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID114));

    boxWithBorder1_1.setPosition(170, 54, 71, 72);
    boxWithBorder1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(241, 241, 241));
    boxWithBorder1_1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(135, 135, 135));
    boxWithBorder1_1.setBorderSize(3);

    dec.setXY(180, 66);
    dec.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    dec.setLinespacing(0);
    Unicode::snprintf(decBuffer, DEC_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID118).getText());
    dec.setWildcard(decBuffer);
    dec.resizeToCurrentText();
    dec.setTypedText(touchgfx::TypedText(T_SINGLEUSEID115));

    upMainNum.setXY(60, 136);
    upMainNum.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_32_ID));
    upMainNum.setIconXY(15, 22);
    upMainNum.setAction(buttonCallback);

    UpDecNum.setXY(175, 136);
    UpDecNum.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_32_ID));
    UpDecNum.setIconXY(15, 22);
    UpDecNum.setAction(buttonCallback);

    downMainNum.setXY(61, 196);
    downMainNum.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID));
    downMainNum.setIconXY(15, 22);
    downMainNum.setAction(buttonCallback);

    downDecNum.setXY(175, 196);
    downDecNum.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID));
    downDecNum.setIconXY(15, 22);
    downDecNum.setAction(buttonCallback);

    medida.setXY(254, 66);
    medida.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    medida.setLinespacing(0);
    medida.setTypedText(touchgfx::TypedText(T_SINGLEUSEID116));

    add(box1);
    add(btnGuardarNum);
    add(txt_num);
    add(boxWithBorder1);
    add(num);
    add(textArea1_1);
    add(boxWithBorder1_1);
    add(dec);
    add(upMainNum);
    add(UpDecNum);
    add(downMainNum);
    add(downDecNum);
    add(medida);
}

void numPadViewBase::setupScreen()
{

}

//Called when the screen is done with transition/load
void numPadViewBase::afterTransition()
{
    //cargarDatos
    //When screen is entered call virtual function
    //Call cargarDatos
    cargarDatos();
}

void numPadViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnGuardarNum)
    {
        //RegresarPerfilEditor
        //When btnGuardarNum clicked change screen to PerfilProductos
        //Go to PerfilProductos with no screen transition
        application().gotoPerfilProductosScreenNoTransition();

        //registrarCambioNumero
        //When RegresarPerfilEditor completed call virtual function
        //Call registrarCambioNumero
        registrarCambioNumero();
    }
    else if (&src == &upMainNum)
    {
        //upMainNum
        //When upMainNum clicked call virtual function
        //Call incrementoNum
        incrementoNum();
    }
    else if (&src == &UpDecNum)
    {
        //UpDecNum
        //When UpDecNum clicked call virtual function
        //Call incrementoDec
        incrementoDec();
    }
    else if (&src == &downMainNum)
    {
        //downMainNum
        //When downMainNum clicked call virtual function
        //Call reducirNum
        reducirNum();
    }
    else if (&src == &downDecNum)
    {
        //dowDecNum
        //When downDecNum clicked call virtual function
        //Call reducirDec
        reducirDec();
    }
}
