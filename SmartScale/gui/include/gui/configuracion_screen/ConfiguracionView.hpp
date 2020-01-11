#ifndef CONFIGURACIONVIEW_HPP
#define CONFIGURACIONVIEW_HPP

#include <gui_generated/configuracion_screen/ConfiguracionViewBase.hpp>
#include <gui/configuracion_screen/ConfiguracionPresenter.hpp>

class ConfiguracionView : public ConfiguracionViewBase
{
public:
    ConfiguracionView();
    virtual ~ConfiguracionView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CONFIGURACIONVIEW_HPP
