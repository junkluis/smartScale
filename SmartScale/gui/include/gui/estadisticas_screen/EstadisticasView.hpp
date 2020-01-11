#ifndef ESTADISTICASVIEW_HPP
#define ESTADISTICASVIEW_HPP

#include <gui_generated/estadisticas_screen/EstadisticasViewBase.hpp>
#include <gui/estadisticas_screen/EstadisticasPresenter.hpp>

class EstadisticasView : public EstadisticasViewBase
{
public:
    EstadisticasView();
    virtual ~EstadisticasView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // ESTADISTICASVIEW_HPP
