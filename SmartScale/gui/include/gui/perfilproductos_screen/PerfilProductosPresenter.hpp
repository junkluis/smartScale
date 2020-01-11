#ifndef PERFILPRODUCTOSPRESENTER_HPP
#define PERFILPRODUCTOSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class PerfilProductosView;

class PerfilProductosPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    PerfilProductosPresenter(PerfilProductosView& v);

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

    virtual ~PerfilProductosPresenter() {};

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

	touchgfx::Unicode::UnicodeChar* getTituloPerfil() {
		return model->getTituloPerfil();
	}

	touchgfx::Unicode::UnicodeChar* getDescPerfil() {
		return model->getDescPerfil();
	}

	void setTecladoAccion(std::string accion) {
		model->setTecladoAccion(accion);
	}

private:
    PerfilProductosPresenter();

    PerfilProductosView& view;
};


#endif // PERFILPRODUCTOSPRESENTER_HPP
