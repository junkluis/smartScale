#ifndef INFORMACIONVIEW_HPP
#define INFORMACIONVIEW_HPP

#include <gui_generated/informacion_screen/InformacionViewBase.hpp>
#include <gui/informacion_screen/InformacionPresenter.hpp>

class InformacionView : public InformacionViewBase
{
public:
    InformacionView();
    virtual ~InformacionView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // INFORMACIONVIEW_HPP
