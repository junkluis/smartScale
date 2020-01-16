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

	//GET SET EDITOR
	void setEditor(bool mode) {
		model->setEditor(mode);
	}

	bool getEditor() {
		return model->getEditor();
	}

	void setTituloEditable(uint8_t* titulo) {
		model->setTituloEditable(titulo);
	}

	uint8_t* getTituloEditable() {
		return model->getTituloEditable();
	}

	void setDescriEditable(uint8_t* desc) {
		model->setTituloEditable(desc);
	}

	uint8_t* getDescriEditable() {
		return model->getDescriEditable();
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

	void setNumPadAccion(std::string numPadAccion) {
		model->setNumPadAccion(numPadAccion);
	}

	std::string getNumPadAccion() {
		return model->getNumPadAccion();
	}

	std::string getTecladoAccion() {
		return model->getTecladoAccion();
	}
	//FIN GET SET EDITOR


private:
    PerfilProductosPresenter();

    PerfilProductosView& view;
};


#endif // PERFILPRODUCTOSPRESENTER_HPP
