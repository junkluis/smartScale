#ifndef MENUPRINCIPAL_PRESENTER_HPP
#define MENUPRINCIPAL_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MenuPrincipalView;

class MenuPrincipalPresenter : public Presenter, public ModelListener
{
public:
    MenuPrincipalPresenter(MenuPrincipalView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~MenuPrincipalPresenter() {};

private:
    MenuPrincipalPresenter();

    MenuPrincipalView& view;
};


#endif // MENUPRINCIPAL_PRESENTER_HPP
