#ifndef MODEL_HPP
#define MODEL_HPP

#include <touchgfx/Utils.hpp>
#include <string>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/Perfil.hpp>



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

	void setNumPadAccion(std::string accion) {
		numPadAccion = accion;
	}

	std::string getNumPadAccion() {
		return numPadAccion;
	}

	void setPesoEsperado(float pesoEsperado) {
		inputPesoEsperado = pesoEsperado;
	}

	float getPesoEsperado() {
		return inputPesoEsperado;
	}

	void setDifPermitida(float diferenciaPermitida) {
		inputDifPermitida = diferenciaPermitida;
	}

	float getDifPermitida() {
		return inputDifPermitida;
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

	
	//GET SET INFO SLOT
	void setTitulo(std::string titulo, int id) {
		titulos[id] = titulo;
	}

	std::string getTitulo(int id) {
		return titulos[id];
	}

	void setDescripcion(std::string descr, int id) {
		descripciones[id] = descr;
	}

	std::string getDescripcion(int id) {
		return descripciones[id];
	}

	void setPesoPromedio(float peso, int id) {
		pesosProm[id] = peso;
	}

	float getPesoPromedio(int id) {
		return pesosProm[id];
	}

	void setDiferenciaPermitida(float diferencia, int id) {
		difsPerm[id] = diferencia;
	}

	float getDiferenciaPermitida(int id) {
		return difsPerm[id];
	}
	//FIN GET SET INFO SLOT

	//FUNCIONES PARA EDITAR
	void setEditor(bool mode) {
		editor = mode;
	}

	bool getEditor() {
		return editor;
	}

	void setTituloEditable(uint8_t* titulo) {
		tituloEditable = titulo;
	}

	uint8_t* getTituloEditable() {
		return tituloEditable;
	}

	void setDescriEditable(uint8_t* desc) {
		descriEditable = desc;
	}

	uint8_t* getDescriEditable() {
		return descriEditable;
	}

	void setPesoEditable(float peso) {
		pesoEditable = peso;
	}

	float getPesoEditable() {
		return pesoEditable;
	}

	void setDifeEditable(float diferencia) {
		difeEditable = diferencia;
	}

	float getDifeEditable() {
		return difeEditable;
	}
	//FIN FUNCIONES PARA EDITAR


protected:
    /**
     * Pointer to the currently active presenter.
     */
    ModelListener* modelListener;

    touchgfx::Unicode::UnicodeChar* usuario;
    touchgfx::Unicode::UnicodeChar* clave;
	touchgfx::Unicode::UnicodeChar* tituloPerfil;
	touchgfx::Unicode::UnicodeChar* descPerfil;

	float inputPesoEsperado = 0;
	float inputDifPermitida = 0;

	//eliminar
	std::string slot1;
	std::string slot2;
	std::string slot3;
	std::string slot4;
	std::string slot5;

	std::string tecladoAccion;
	std::string numPadAccion;
	// buffer  = (Unicode::UnicodeChar*) malloc(BUFFER_SIZE*sizeof(Unicode::UnicodeChar));

	//SLOTs
	std::string titulos[5] = {  "Nitrogeno",
								"Aire Comp.",
								"CO2",
								"Perfil Vacio",
								"Perfil Vacio" };

	std::string descripciones[5] = {"Refrigerante para láser de dióxido de carbono quirúrgico",
									"Utilizado en las unidades de cuidados intensivos",
									"Gas de insuflación para la cirugía mínimamente invasiva",
									"Sin Descripción",
									"Sin Descripción" };

	float pesosProm[5] = { 1.00, 1.50, 2.50, 0, 0 };
	float difsPerm[5] = { 0.1, 0.2, 0.3, 0, 0 };

	uint8_t* tituloEditable;
	uint8_t* descriEditable = 0;
	float pesoEditable = 0;
	float difeEditable = 0;

	int slotSeleccionado;
	bool editor;

};

#endif /* MODEL_HPP */
