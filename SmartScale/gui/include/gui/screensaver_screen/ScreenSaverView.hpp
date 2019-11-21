#ifndef SCREENSAVER_VIEW_HPP
#define SCREENSAVER_VIEW_HPP

#include <gui_generated/screensaver_screen/ScreenSaverViewBase.hpp>
#include <gui/screensaver_screen/ScreenSaverPresenter.hpp>

class ScreenSaverView : public ScreenSaverViewBase
{
public:
    ScreenSaverView();
    virtual ~ScreenSaverView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENSAVER_VIEW_HPP
