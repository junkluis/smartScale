/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    // ScreenSaver
    void gotoScreenSaverScreenNoTransition();


    // teclado
    void gototecladoScreenNoTransition();


    // MenuPrincipal
    void gotoMenuPrincipalScreenNoTransition();

    void gotoMenuPrincipalScreenCoverTransitionNorth();


    // BalanzaInteligente
    void gotoBalanzaInteligenteScreenCoverTransitionSouth();


    // PerfilProductos
    void gotoPerfilProductosScreenNoTransition();


    // numPad
    void gotonumPadScreenNoTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // ScreenSaver
    void gotoScreenSaverScreenNoTransitionImpl();


    // teclado
    void gototecladoScreenNoTransitionImpl();


    // MenuPrincipal
    void gotoMenuPrincipalScreenNoTransitionImpl();

    void gotoMenuPrincipalScreenCoverTransitionNorthImpl();


    // BalanzaInteligente
    void gotoBalanzaInteligenteScreenCoverTransitionSouthImpl();


    // PerfilProductos
    void gotoPerfilProductosScreenNoTransitionImpl();


    // numPad
    void gotonumPadScreenNoTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
