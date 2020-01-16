#ifndef NUMPADPRESENTER_HPP
#define NUMPADPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class numPadView;

class numPadPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    numPadPresenter(numPadView& v);

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

    virtual ~numPadPresenter() {};

	void setPesoEsperado(float pesoEsperado) {
		model->setPesoEsperado(pesoEsperado);
	}

	float getPesoEsperado() {
		return model->getPesoEsperado();
	}

	void setPesoEditable(float peso) {
		model->setPesoEditable(peso);
	}

	float getPesoEditable() {
		return model->getPesoEditable();
	}

	void setDifeEditable(float diferencia) {
		model->setDifeEditable(diferencia);
	}

	float getDifeEditable() {
		return model->getDifeEditable();
	}

	void setNumPadAccion(std::string accion) {
		model->setNumPadAccion(accion);
	}

	std::string getNumPadAccion() {
		return model->getNumPadAccion();
	}



private:
    numPadPresenter();

    numPadView& view;
};


#endif // NUMPADPRESENTER_HPP
