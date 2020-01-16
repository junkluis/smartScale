#ifndef NUMPADVIEW_HPP
#define NUMPADVIEW_HPP

#include <gui_generated/numpad_screen/numPadViewBase.hpp>
#include <gui/numpad_screen/numPadPresenter.hpp>

class numPadView : public numPadViewBase
{
public:
    numPadView();
    virtual ~numPadView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
	virtual void reducirDec();
	virtual void reducirNum();
	virtual void incrementoDec();
	virtual void incrementoNum();
	virtual void registrarCambioNumero();
	virtual void cargarDatos();

protected:
	float valorTotal;
	int parteEntera=0;
	int parteDecimal=0;
	float valorEditable;
	std::string accion;
};

#endif // NUMPADVIEW_HPP
