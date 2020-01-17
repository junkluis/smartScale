#ifndef INFORMACIONPRESENTER_HPP
#define INFORMACIONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class InformacionView;

class InformacionPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    InformacionPresenter(InformacionView& v);

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

    virtual ~InformacionPresenter() {};

private:
    InformacionPresenter();

    InformacionView& view;
};


#endif // INFORMACIONPRESENTER_HPP
