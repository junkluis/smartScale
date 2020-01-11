#ifndef BALANZAINTELIGENTEVIEW_HPP
#define BALANZAINTELIGENTEVIEW_HPP

#include <gui_generated/balanzainteligente_screen/BalanzaInteligenteViewBase.hpp>
#include <gui/balanzainteligente_screen/BalanzaInteligentePresenter.hpp>
#include <touchgfx/containers/SlideMenu.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/hal/Types.hpp>

class BalanzaInteligenteView : public BalanzaInteligenteViewBase
{
public:
    BalanzaInteligenteView();
    virtual ~BalanzaInteligenteView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void CalcularPeso();
    virtual void cargarDatos();
	virtual void Slot1Config();
	virtual void Slot2Config();
	virtual void Slot3Config();
	virtual void Slot4Config();
	virtual void Slot5Config();
	virtual void enviarMedianteSigfox();
	virtual void handleTickEvent();

	//Obtener los datos desde Model.hpp para presentarlo en los botones
	std::string slot1;
	std::string slot2;
	std::string slot3;
	std::string slot4;
	std::string slot5;

	//Pesos promedios de cada perfil
	double pesoProm1;
	double pesoProm2;
	double pesoProm3;
	double pesoProm4;
	double pesoProm5;

	//diferencia permitida antes de mostrar la alerta
	double delta1;
	double delta2;
	double delta3;
	double delta4;
	double delta5;

	//animacion
	bool animacion;
	int porcentaje;


protected:

};

#endif // BALANZAINTELIGENTEVIEW_HPP
