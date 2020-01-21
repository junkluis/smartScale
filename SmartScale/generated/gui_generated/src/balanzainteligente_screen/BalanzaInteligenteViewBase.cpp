/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/balanzainteligente_screen/BalanzaInteligenteViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

BalanzaInteligenteViewBase::BalanzaInteligenteViewBase() :
    buttonCallback(this, &BalanzaInteligenteViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &BalanzaInteligenteViewBase::flexButtonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    backgroundmenu.setXY(0, 0);
    backgroundmenu.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_TITLE_ID));

    boxWithBorder1.setPosition(0, 47, 112, 225);
    boxWithBorder1.setColor(touchgfx::Color::getColorFrom24BitRGB(151, 151, 151));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(151, 151, 151));
    boxWithBorder1.setBorderSize(5);

    txt_tituloBalanza.setXY(20, 24);
    txt_tituloBalanza.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txt_tituloBalanza.setLinespacing(0);
    txt_tituloBalanza.setTypedText(touchgfx::TypedText(T_SINGLEUSEID35));

    perfilesButtons.setPosition(0, 47, 112, 225);
    perfilesButtons.setScrollbarsColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    perfilesButtons.setScrollbarsAlpha(118);

    btnSlot5.setXY(0, 245);
    btnSlot5.setBitmaps(touchgfx::Bitmap(BITMAP_BOTONPERFIL_ID), touchgfx::Bitmap(BITMAP_BOTONPERFILPRESSED_ID));
    perfilesButtons.add(btnSlot5);

    btnSlot4.setXY(0, 184);
    btnSlot4.setBitmaps(touchgfx::Bitmap(BITMAP_BOTONPERFIL_ID), touchgfx::Bitmap(BITMAP_BOTONPERFILPRESSED_ID));
    perfilesButtons.add(btnSlot4);

    btnSlot3.setXY(0, 123);
    btnSlot3.setBitmaps(touchgfx::Bitmap(BITMAP_BOTONPERFIL_ID), touchgfx::Bitmap(BITMAP_BOTONPERFILPRESSED_ID));
    perfilesButtons.add(btnSlot3);

    btnSlot2.setXY(0, 62);
    btnSlot2.setBitmaps(touchgfx::Bitmap(BITMAP_BOTONPERFIL_ID), touchgfx::Bitmap(BITMAP_BOTONPERFILPRESSED_ID));
    perfilesButtons.add(btnSlot2);

    btnSlot1.setXY(0, 1);
    btnSlot1.setBitmaps(touchgfx::Bitmap(BITMAP_BOTONPERFIL_ID), touchgfx::Bitmap(BITMAP_BOTONPERFILPRESSED_ID));
    perfilesButtons.add(btnSlot1);

    txtSlot5.setPosition(0, 263, 112, 24);
    txtSlot5.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtSlot5.setLinespacing(0);
    Unicode::snprintf(txtSlot5Buffer, TXTSLOT5_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID73).getText());
    txtSlot5.setWildcard(txtSlot5Buffer);
    txtSlot5.setTypedText(touchgfx::TypedText(T_SINGLEUSEID68));
    perfilesButtons.add(txtSlot5);

    txtSlot4.setPosition(0, 202, 112, 24);
    txtSlot4.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtSlot4.setLinespacing(0);
    Unicode::snprintf(txtSlot4Buffer, TXTSLOT4_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID72).getText());
    txtSlot4.setWildcard(txtSlot4Buffer);
    txtSlot4.setTypedText(touchgfx::TypedText(T_SINGLEUSEID67));
    perfilesButtons.add(txtSlot4);

    txtSlot3.setPosition(0, 141, 112, 24);
    txtSlot3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtSlot3.setLinespacing(0);
    Unicode::snprintf(txtSlot3Buffer, TXTSLOT3_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID71).getText());
    txtSlot3.setWildcard(txtSlot3Buffer);
    txtSlot3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID66));
    perfilesButtons.add(txtSlot3);

    txtSlot2.setPosition(0, 80, 112, 24);
    txtSlot2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtSlot2.setLinespacing(0);
    Unicode::snprintf(txtSlot2Buffer, TXTSLOT2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID70).getText());
    txtSlot2.setWildcard(txtSlot2Buffer);
    txtSlot2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID65));
    perfilesButtons.add(txtSlot2);

    txtSlot1.setPosition(0, 19, 112, 24);
    txtSlot1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtSlot1.setLinespacing(0);
    Unicode::snprintf(txtSlot1Buffer, TXTSLOT1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID69).getText());
    txtSlot1.setWildcard(txtSlot1Buffer);
    txtSlot1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID64));
    perfilesButtons.add(txtSlot1);

    homeButton.setBoxWithBorderPosition(0, 0, 65, 39);
    homeButton.setBorderSize(5);
    homeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(49, 49, 49), touchgfx::Color::getColorFrom24BitRGB(75, 83, 86), touchgfx::Color::getColorFrom24BitRGB(49, 49, 49), touchgfx::Color::getColorFrom24BitRGB(75, 83, 86));
    homeButton.setBitmaps(Bitmap(BITMAP_HOME_ID), Bitmap(BITMAP_HOME_ID));
    homeButton.setBitmapXY(0, 0);
    homeButton.setPosition(411, 5, 65, 39);
    homeButton.setAction(flexButtonCallback);

    contenedor.setXY(136, 55);
    contenedor.setBitmap(touchgfx::Bitmap(BITMAP_CONTAINER_ID));

    btnPesar.setXY(164, 83);
    btnPesar.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_CENTRAL_ID), touchgfx::Bitmap(BITMAP_BTN_CENTRAL_PUSH_ID));
    btnPesar.setAction(buttonCallback);

    txtResultadoPesar.setPosition(164, 135, 147, 50);
    txtResultadoPesar.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    txtResultadoPesar.setLinespacing(0);
    Unicode::snprintf(txtResultadoPesarBuffer, TXTRESULTADOPESAR_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID76).getText());
    txtResultadoPesar.setWildcard(txtResultadoPesarBuffer);
    txtResultadoPesar.setTypedText(touchgfx::TypedText(T_SINGLEUSEID47));

    widgetCircular.setPosition(136, 55, 208, 208);
    widgetCircular.setCenter(103, 103);
    widgetCircular.setRadius(88);
    widgetCircular.setLineWidth(22);
    widgetCircular.setArc(268, 268);
    widgetCircular.setCapPrecision(10);
    widgetCircularPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(55, 210, 210));
    widgetCircular.setPainter(widgetCircularPainter);

    verResultados.setBoxWithBorderPosition(0, 0, 131, 100);
    verResultados.setBorderSize(5);
    verResultados.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    verResultados.setPosition(349, 58, 131, 100);
    verResultados.setAlpha(0);
    verResultados.setAction(flexButtonCallback);

    textArea2.setXY(354, 65);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID49));

    line1.setPosition(304, 158, 51, 15);
    line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1.setPainter(line1Painter);
    line1.setStart(6, 5);
    line1.setEnd(46, 5);
    line1.setLineWidth(10);
    line1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);
    line1.setAlpha(210);

    image4.setXY(224, 190);
    image4.setBitmap(touchgfx::Bitmap(BITMAP_HAND_ID));

    TxtDisplayPerfil.setPosition(354, 89, 116, 19);
    TxtDisplayPerfil.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    TxtDisplayPerfil.setLinespacing(0);
    Unicode::snprintf(TxtDisplayPerfilBuffer, TXTDISPLAYPERFIL_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID74).getText());
    TxtDisplayPerfil.setWildcard(TxtDisplayPerfilBuffer);
    TxtDisplayPerfil.setTypedText(touchgfx::TypedText(T_SINGLEUSEID50));

    textArea3_1.setXY(354, 119);
    textArea3_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea3_1.setLinespacing(0);
    textArea3_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID51));

    txtResultadoSmall.setXY(408, 119);
    txtResultadoSmall.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    txtResultadoSmall.setLinespacing(0);
    Unicode::snprintf(txtResultadoSmallBuffer, TXTRESULTADOSMALL_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID77).getText());
    txtResultadoSmall.setWildcard(txtResultadoSmallBuffer);
    txtResultadoSmall.resizeToCurrentText();
    txtResultadoSmall.setTypedText(touchgfx::TypedText(T_SINGLEUSEID52));

    textArea3_1_2.setXY(355, 136);
    textArea3_1_2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea3_1_2.setLinespacing(0);
    textArea3_1_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID53));

    txtDispProm.setXY(408, 136);
    txtDispProm.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    txtDispProm.setLinespacing(0);
    Unicode::snprintf(txtDispPromBuffer, TXTDISPPROM_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID75).getText());
    txtDispProm.setWildcard(txtDispPromBuffer);
    txtDispProm.resizeToCurrentText();
    txtDispProm.setTypedText(touchgfx::TypedText(T_SINGLEUSEID54));

    TxtAlerta.setPosition(361, 164, 108, 21);
    TxtAlerta.setVisible(false);
    TxtAlerta.setColor(touchgfx::Color::getColorFrom24BitRGB(216, 21, 21));
    TxtAlerta.setLinespacing(0);
    Unicode::snprintf(TxtAlertaBuffer, TXTALERTA_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID78).getText());
    TxtAlerta.setWildcard(TxtAlertaBuffer);
    TxtAlerta.setTypedText(touchgfx::TypedText(T_SINGLEUSEID55));

    volverAPesar.setXY(184, 119);
    volverAPesar.setVisible(false);
    volverAPesar.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    volverAPesar.setLinespacing(0);
    volverAPesar.setTypedText(touchgfx::TypedText(T_SINGLEUSEID56));

    textArea5_1.setXY(282, 175);
    textArea5_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea5_1.setLinespacing(0);
    textArea5_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID57));

    BtnEnviar.setXY(355, 201);
    BtnEnviar.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_PRESSED_ID));
    BtnEnviar.setAction(buttonCallback);

    textArea6.setXY(408, 220);
    textArea6.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea6.setLinespacing(0);
    textArea6.setTypedText(touchgfx::TypedText(T_SINGLEUSEID58));

    image1.setXY(379, 220);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_SEND_ID));

    image3.setXY(440, 73);
    image3.setBitmap(touchgfx::Bitmap(BITMAP_INFO_ID));

    datosDePeso.setBackground(touchgfx::BitmapId(BITMAP_MODAL_BACKGROUND_ID), 70, 16);
    datosDePeso.setShadeColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    datosDePeso.setShadeAlpha(150);
    datosDePeso.hide();

    textArea9.setXY(33, 20);
    textArea9.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea9.setLinespacing(0);
    textArea9.setTypedText(touchgfx::TypedText(T_SINGLEUSEID126));
    datosDePeso.add(textArea9);

    box1_1.setPosition(3, 146, 334, 26);
    box1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(135, 135, 135));
    box1_1.setAlpha(75);
    datosDePeso.add(box1_1);

    box1.setPosition(3, 98, 334, 26);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(135, 135, 135));
    box1.setAlpha(75);
    datosDePeso.add(box1);

    textArea10.setXY(35, 58);
    textArea10.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea10.setLinespacing(0);
    textArea10.setTypedText(touchgfx::TypedText(T_SINGLEUSEID127));
    datosDePeso.add(textArea10);

    textArea10_1.setXY(35, 101);
    textArea10_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea10_1.setLinespacing(0);
    textArea10_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID128));
    datosDePeso.add(textArea10_1);

    textArea10_1_1.setXY(35, 125);
    textArea10_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea10_1_1.setLinespacing(0);
    textArea10_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID129));
    datosDePeso.add(textArea10_1_1);

    textArea10_1_1_1.setXY(33, 150);
    textArea10_1_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea10_1_1_1.setLinespacing(0);
    textArea10_1_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID130));
    datosDePeso.add(textArea10_1_1_1);

    image5.setXY(247, 19);
    image5.setBitmap(touchgfx::Bitmap(BITMAP_INFO_ID));
    datosDePeso.add(image5);

    pesoObtenidoModal.setXY(201, 58);
    pesoObtenidoModal.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    pesoObtenidoModal.setLinespacing(0);
    Unicode::snprintf(pesoObtenidoModalBuffer, PESOOBTENIDOMODAL_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID137).getText());
    pesoObtenidoModal.setWildcard(pesoObtenidoModalBuffer);
    pesoObtenidoModal.resizeToCurrentText();
    pesoObtenidoModal.setTypedText(touchgfx::TypedText(T_SINGLEUSEID131));
    datosDePeso.add(pesoObtenidoModal);

    promedioModal.setXY(227, 100);
    promedioModal.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    promedioModal.setLinespacing(0);
    Unicode::snprintf(promedioModalBuffer, PROMEDIOMODAL_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID136).getText());
    promedioModal.setWildcard(promedioModalBuffer);
    promedioModal.resizeToCurrentText();
    promedioModal.setTypedText(touchgfx::TypedText(T_SINGLEUSEID132));
    datosDePeso.add(promedioModal);

    diferenciaModal.setXY(227, 125);
    diferenciaModal.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    diferenciaModal.setLinespacing(0);
    Unicode::snprintf(diferenciaModalBuffer, DIFERENCIAMODAL_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID138).getText());
    diferenciaModal.setWildcard(diferenciaModalBuffer);
    diferenciaModal.resizeToCurrentText();
    diferenciaModal.setTypedText(touchgfx::TypedText(T_SINGLEUSEID133));
    datosDePeso.add(diferenciaModal);

    permitidoModal.setXY(227, 150);
    permitidoModal.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    permitidoModal.setLinespacing(0);
    Unicode::snprintf(permitidoModalBuffer, PERMITIDOMODAL_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID139).getText());
    permitidoModal.setWildcard(permitidoModalBuffer);
    permitidoModal.resizeToCurrentText();
    permitidoModal.setTypedText(touchgfx::TypedText(T_SINGLEUSEID134));
    datosDePeso.add(permitidoModal);

    cerrarModalResultados.setXY(85, 181);
    cerrarModalResultados.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_PRESSED_ID));
    cerrarModalResultados.setLabelText(touchgfx::TypedText(T_SINGLEUSEID135));
    cerrarModalResultados.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    cerrarModalResultados.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    cerrarModalResultados.setAction(buttonCallback);
    datosDePeso.add(cerrarModalResultados);

    alertaPerfil.setBackground(touchgfx::BitmapId(BITMAP_MODAL_BACKGROUND_ID), 70, 16);
    alertaPerfil.setShadeColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    alertaPerfil.setShadeAlpha(150);
    alertaPerfil.hide();

    image2.setXY(42, 35);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_WARNING_ID));
    alertaPerfil.add(image2);

    textArea7.setXY(159, 58);
    textArea7.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea7.setLinespacing(0);
    textArea7.setTypedText(touchgfx::TypedText(T_SINGLEUSEID79));
    alertaPerfil.add(textArea7);

    cerrarModal.setXY(85, 157);
    cerrarModal.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_PRESSED_ID));
    cerrarModal.setLabelText(touchgfx::TypedText(T_SINGLEUSEID80));
    cerrarModal.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    cerrarModal.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    cerrarModal.setAction(buttonCallback);
    alertaPerfil.add(cerrarModal);

    envioSigfox.setBackground(touchgfx::BitmapId(BITMAP_MODAL_BACKGROUND_ID), 70, 16);
    envioSigfox.setShadeColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    envioSigfox.setShadeAlpha(150);
    envioSigfox.hide();

    textArea9_1.setXY(33, 17);
    textArea9_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea9_1.setLinespacing(0);
    textArea9_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID140));
    envioSigfox.add(textArea9_1);

    box1_1_1.setPosition(3, 136, 334, 26);
    box1_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(135, 135, 135));
    box1_1_1.setAlpha(75);
    envioSigfox.add(box1_1_1);

    box1_2.setPosition(3, 88, 334, 26);
    box1_2.setColor(touchgfx::Color::getColorFrom24BitRGB(135, 135, 135));
    box1_2.setAlpha(75);
    envioSigfox.add(box1_2);

    textArea10_2.setXY(35, 58);
    textArea10_2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea10_2.setLinespacing(0);
    textArea10_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID141));
    envioSigfox.add(textArea10_2);

    textArea10_1_2.setXY(35, 91);
    textArea10_1_2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea10_1_2.setLinespacing(0);
    textArea10_1_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID142));
    envioSigfox.add(textArea10_1_2);

    textArea10_1_1_2.setXY(35, 115);
    textArea10_1_1_2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea10_1_1_2.setLinespacing(0);
    textArea10_1_1_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID143));
    envioSigfox.add(textArea10_1_1_2);

    textArea10_1_1_1_1.setXY(33, 140);
    textArea10_1_1_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea10_1_1_1_1.setLinespacing(0);
    textArea10_1_1_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID144));
    envioSigfox.add(textArea10_1_1_1_1);

    pesoObtenidoEnviar.setXY(201, 58);
    pesoObtenidoEnviar.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    pesoObtenidoEnviar.setLinespacing(0);
    Unicode::snprintf(pesoObtenidoEnviarBuffer, PESOOBTENIDOENVIAR_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID146).getText());
    pesoObtenidoEnviar.setWildcard(pesoObtenidoEnviarBuffer);
    pesoObtenidoEnviar.resizeToCurrentText();
    pesoObtenidoEnviar.setTypedText(touchgfx::TypedText(T_SINGLEUSEID145));
    envioSigfox.add(pesoObtenidoEnviar);

    promedioEnviar.setXY(227, 90);
    promedioEnviar.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    promedioEnviar.setLinespacing(0);
    Unicode::snprintf(promedioEnviarBuffer, PROMEDIOENVIAR_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID148).getText());
    promedioEnviar.setWildcard(promedioEnviarBuffer);
    promedioEnviar.resizeToCurrentText();
    promedioEnviar.setTypedText(touchgfx::TypedText(T_SINGLEUSEID147));
    envioSigfox.add(promedioEnviar);

    diferenciaEnviar.setXY(227, 115);
    diferenciaEnviar.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    diferenciaEnviar.setLinespacing(0);
    Unicode::snprintf(diferenciaEnviarBuffer, DIFERENCIAENVIAR_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID150).getText());
    diferenciaEnviar.setWildcard(diferenciaEnviarBuffer);
    diferenciaEnviar.resizeToCurrentText();
    diferenciaEnviar.setTypedText(touchgfx::TypedText(T_SINGLEUSEID149));
    envioSigfox.add(diferenciaEnviar);

    permitidoEnviar.setXY(227, 140);
    permitidoEnviar.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    permitidoEnviar.setLinespacing(0);
    Unicode::snprintf(permitidoEnviarBuffer, PERMITIDOENVIAR_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID152).getText());
    permitidoEnviar.setWildcard(permitidoEnviarBuffer);
    permitidoEnviar.resizeToCurrentText();
    permitidoEnviar.setTypedText(touchgfx::TypedText(T_SINGLEUSEID151));
    envioSigfox.add(permitidoEnviar);

    btnCerrarModalEnvio.setXY(59, 173);
    btnCerrarModalEnvio.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_REMOVE_32_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_REMOVE_32_ID));
    btnCerrarModalEnvio.setIconXY(15, 15);
    btnCerrarModalEnvio.setAction(buttonCallback);
    envioSigfox.add(btnCerrarModalEnvio);

    textArea11.setXY(199, 184);
    textArea11.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea11.setLinespacing(0);
    textArea11.setTypedText(touchgfx::TypedText(T_SINGLEUSEID154));
    envioSigfox.add(textArea11);

    envioDatos.setXY(127, 173);
    envioDatos.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    envioDatos.setLabelText(touchgfx::TypedText(T_SINGLEUSEID153));
    envioDatos.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    envioDatos.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    envioDatos.setAction(buttonCallback);
    envioSigfox.add(envioDatos);

    image6.setXY(166, 194);
    image6.setBitmap(touchgfx::Bitmap(BITMAP_SEND_ID));
    envioSigfox.add(image6);

    add(backgroundmenu);
    add(boxWithBorder1);
    add(txt_tituloBalanza);
    add(perfilesButtons);
    add(homeButton);
    add(contenedor);
    add(btnPesar);
    add(txtResultadoPesar);
    add(widgetCircular);
    add(verResultados);
    add(textArea2);
    add(line1);
    add(image4);
    add(TxtDisplayPerfil);
    add(textArea3_1);
    add(txtResultadoSmall);
    add(textArea3_1_2);
    add(txtDispProm);
    add(TxtAlerta);
    add(volverAPesar);
    add(textArea5_1);
    add(BtnEnviar);
    add(textArea6);
    add(image1);
    add(image3);
    add(datosDePeso);
    add(alertaPerfil);
    add(envioSigfox);
}

void BalanzaInteligenteViewBase::setupScreen()
{

}

//Called when the screen is done with transition/load
void BalanzaInteligenteViewBase::afterTransition()
{
    //CargarDatos
    //When screen is entered call virtual function
    //Call cargarDatos
    cargarDatos();
}

void BalanzaInteligenteViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnPesar)
    {
        //CalcularPeso
        //When btnPesar clicked call virtual function
        //Call CalcularPeso
        CalcularPeso();
    }
    else if (&src == &BtnEnviar)
    {
        //EnvioSigfox
        //When BtnEnviar clicked show envioSigfox
        //Show envioSigfox
        envioSigfox.setVisible(true);
        envioSigfox.invalidate();
    }
    else if (&src == &cerrarModalResultados)
    {
        //Interaction2
        //When cerrarModalResultados clicked hide datosDePeso
        //Hide datosDePeso
        datosDePeso.setVisible(false);
        datosDePeso.invalidate();
    }
    else if (&src == &cerrarModal)
    {
        //cerrarModal
        //When cerrarModal clicked hide alertaPerfil
        //Hide alertaPerfil
        alertaPerfil.setVisible(false);
        alertaPerfil.invalidate();
    }
    else if (&src == &btnCerrarModalEnvio)
    {
        //hideEnvioSigfox
        //When btnCerrarModalEnvio clicked hide envioSigfox
        //Hide envioSigfox
        envioSigfox.setVisible(false);
        envioSigfox.invalidate();
    }
    else if (&src == &envioDatos)
    {
        //enviarDatosSigfox
        //When envioDatos clicked call virtual function
        //Call enviarMedianteSigfox
        enviarMedianteSigfox();
    }
}

void BalanzaInteligenteViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &homeButton)
    {
        //Regresar
        //When homeButton clicked change screen to MenuPrincipal
        //Go to MenuPrincipal with screen transition towards North
        application().gotoMenuPrincipalScreenCoverTransitionNorth();
    }
    else if (&src == &verResultados)
    {
        //mostrarResultadosModal
        //When verResultados clicked show datosDePeso
        //Show datosDePeso
        datosDePeso.setVisible(true);
        datosDePeso.invalidate();
    }
}
