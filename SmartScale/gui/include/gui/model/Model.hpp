#ifndef MODEL_HPP
#define MODEL_HPP

#include <touchgfx/Utils.hpp>
#include <string>
#include <touchgfx/Unicode.hpp>



class ModelListener;

/**
 * The Model class defines the data model in the model-view-presenter paradigm.
 * The Model is a singular object used across all presenters. The currently active
 * presenter will have a pointer to the Model through deriving from ModelListener.
 *
 * The Model will typically contain UI state information that must be kept alive
 * through screen transitions. It also usually provides the interface to the rest
 * of the system (the backend). As such, the Model can receive events and data from
 * the backend and inform the current presenter of such events through the modelListener
 * pointer, which is automatically configured to point to the current presenter.
 * Conversely, the current presenter can trigger events in the backend through the Model.
 */
class Model
{
public:
    Model();

    /**
     * Sets the modelListener to point to the currently active presenter. Called automatically
     * when switching screen.
     */
    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    /**
     * This function will be called automatically every frame. Can be used to e.g. sample hardware
     * peripherals or read events from the surrounding system and inject events to the GUI through
     * the ModelListener interface.
     */
    void tick();

    void setTecladoAccion(std::string accion){
        tecladoAccion = accion;
    }

    std::string getTecladoAccion(){
        return tecladoAccion;
    }

    void setUsuario(touchgfx::Unicode::UnicodeChar* usuarioInput){
        usuario = usuarioInput;
    }

    touchgfx::Unicode::UnicodeChar* getUsuario(){
        return usuario;
    }

    void setClave(touchgfx::Unicode::UnicodeChar* claveInput){
        clave = claveInput;
    }

    touchgfx::Unicode::UnicodeChar* getClave(){
        return clave;
    }

	void setSlotInfo(std::string slot, int id) {
		if (id == 1) {
			slot1 = slot;
		}
		else if (id == 2) {
			slot2 = slot;
		}
		else if (id == 3) {
			slot3 = slot;
		}
		else if (id == 4) {
			slot4 = slot;
		}
		else if (id == 5) {
			slot5 = slot;
		}
		
	}

	std::string getSlotInfo(int id) {
		std::string slot;
		if (id == 1) {
			slot = slot1;
		}
		else if (id == 2) {
			slot = slot2;
		}
		else if (id == 3) {
			slot = slot3;
		}
		else if (id == 4) {
			slot = slot4;
		}
		else if (id == 5) {
			slot = slot5;
		}
		return slot;

	} 


	void setTituloPerfil(touchgfx::Unicode::UnicodeChar* titulo) {
		tituloPerfil = titulo;
	}

	touchgfx::Unicode::UnicodeChar* getTituloPerfil() {
		return usuario;
	}

	void setDescPerfil(touchgfx::Unicode::UnicodeChar* descripcion) {
		descPerfil = descripcion;
	}

	touchgfx::Unicode::UnicodeChar* getDescPerfil() {
		return descPerfil;
	}


	void seleccionarSlot(int id) {
		slotSeleccionado = id;
	}

	int getSeleccion() {
		return slotSeleccionado;
	}




protected:
    /**
     * Pointer to the currently active presenter.
     */
    ModelListener* modelListener;
    std::string tecladoAccion;
    touchgfx::Unicode::UnicodeChar* usuario;
    touchgfx::Unicode::UnicodeChar* clave;
	touchgfx::Unicode::UnicodeChar* tituloPerfil;
	touchgfx::Unicode::UnicodeChar* descPerfil;

	std::string slot1;
	std::string slot2;
	std::string slot3;
	std::string slot4;
	std::string slot5;

	int slotSeleccionado;
    
};

#endif /* MODEL_HPP */
