#ifndef BALANZAINTELIGENTEPRESENTER_HPP
#define BALANZAINTELIGENTEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class BalanzaInteligenteView;

class BalanzaInteligentePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    BalanzaInteligentePresenter(BalanzaInteligenteView& v);

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

    virtual ~BalanzaInteligentePresenter() {};

	std::string getSlot(int id) {
		return model->getSlotInfo(id);
	}

	void setSlot(std::string slot, int id) {
		model->setSlotInfo(slot, id);
	}

	void seleccionarSlot(int id) {
		model->seleccionarSlot(id);
	}

	int getSeleccionSlot() {
		return model->getSeleccion();
	}

	//GET SET INFO SLOT
	void setTitulo(std::string titulo, int id) {
		model->setTitulo(titulo, id);
	}

	std::string getTitulo(int id) {
		return model->getTitulo(id);
	}

	void setDescripcion(std::string descr, int id) {
		model->setDescripcion(descr, id);
	}

	std::string getDescripcion(int id) {
		return model->getDescripcion(id);
	}

	void setPesoPromedio(float peso, int id) {
		model->setPesoPromedio(peso, id);
	}

	float getPesoPromedio(int id) {
		return model->getPesoPromedio(id);
	}

	void setDiferenciaPermitida(float diferencia, int id) {
		model->setDiferenciaPermitida(diferencia, id);
	}

	float getDiferenciaPermitida(int id) {
		return model->getDiferenciaPermitida(id);
	}
	//FIN GET SET INFO SLOT

private:
    BalanzaInteligentePresenter();

    BalanzaInteligenteView& view;
};


#endif // BALANZAINTELIGENTEPRESENTER_HPP
