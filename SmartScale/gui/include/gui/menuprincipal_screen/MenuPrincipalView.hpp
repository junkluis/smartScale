#ifndef MENUPRINCIPAL_VIEW_HPP
#define MENUPRINCIPAL_VIEW_HPP

#include <gui_generated/menuprincipal_screen/MenuPrincipalViewBase.hpp>
#include <gui/menuprincipal_screen/MenuPrincipalPresenter.hpp>

class MenuPrincipalView : public MenuPrincipalViewBase
{
public:
    MenuPrincipalView();
    virtual ~MenuPrincipalView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MENUPRINCIPAL_VIEW_HPP
