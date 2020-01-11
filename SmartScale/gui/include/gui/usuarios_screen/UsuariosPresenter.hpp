#ifndef USUARIOSPRESENTER_HPP
#define USUARIOSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class UsuariosView;

class UsuariosPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    UsuariosPresenter(UsuariosView& v);

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

    virtual ~UsuariosPresenter() {};

private:
    UsuariosPresenter();

    UsuariosView& view;
};


#endif // USUARIOSPRESENTER_HPP
