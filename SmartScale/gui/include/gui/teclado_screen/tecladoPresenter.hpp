#ifndef TECLADO_PRESENTER_HPP
#define TECLADO_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class tecladoView;

class tecladoPresenter : public Presenter, public ModelListener
{
public:
    tecladoPresenter(tecladoView& v);

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

    virtual ~tecladoPresenter() {};

private:
    tecladoPresenter();

    tecladoView& view;
};


#endif // TECLADO_PRESENTER_HPP
