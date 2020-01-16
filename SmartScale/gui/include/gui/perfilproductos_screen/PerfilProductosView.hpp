#ifndef PERFILPRODUCTOSVIEW_HPP
#define PERFILPRODUCTOSVIEW_HPP

#include <gui_generated/perfilproductos_screen/PerfilProductosViewBase.hpp>
#include <gui/perfilproductos_screen/PerfilProductosPresenter.hpp>

class PerfilProductosView : public PerfilProductosViewBase
{
public:
    PerfilProductosView();
    virtual ~PerfilProductosView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
	virtual void CargarDatos();
	virtual void Per1Config();
	virtual void Per2Config();
	virtual void Per3Config();
	virtual void Per4Config();
	virtual void Per5Config();
	virtual void inputPerfilTitulo();
	virtual void inputPerfilDescripcion();
	virtual void EditarPerfil();
	virtual void ingresarPesoEsperado();
	virtual void vaciarPerfil();
	virtual void ingresarDiferenciaPerm();

	//Obtener los datos desde Model.hpp para presentarlo en los botones
	std::string slots[5];
	std::string slotDesc[5];
	float esperado[5];
	float diferencia[5];
	std::string accion = (char*)malloc(sizeof(accion));

protected:
};

#endif // PERFILPRODUCTOSVIEW_HPP
