#ifndef TECLADO_PRESENTER_HPP
#define TECLADO_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>
#include <string>

using namespace touchgfx;

class tecladoView;

class tecladoPresenter : public Presenter, public ModelListener
{
public:
    tecladoPresenter(tecladoView& v);

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

    virtual ~tecladoPresenter() {};

    std::string getTecladoAccion(){
        return model->getTecladoAccion();
    }

    void setUsuario(touchgfx::Unicode::UnicodeChar* usuarioInput){
        model->setUsuario(usuarioInput);
    }

    void setClave(touchgfx::Unicode::UnicodeChar* claveInput){
        model->setClave(claveInput);
    }

	void setDescPerfil(touchgfx::Unicode::UnicodeChar* descripcion) {
		model->setDescPerfil(descripcion);
	}

	void setTituloPerfil(touchgfx::Unicode::UnicodeChar* titulo) {
		model->setTituloPerfil(titulo);
	}

	//hello
	void setTituloEditable(uint8_t* titulo) {
		model->setTituloEditable(titulo);
	}

	void setDescriEditable(uint8_t* desc) {
		model->setDescriEditable(desc);
	}



private:

    tecladoPresenter();

    tecladoView& view;
};


#endif // TECLADO_PRESENTER_HPP
