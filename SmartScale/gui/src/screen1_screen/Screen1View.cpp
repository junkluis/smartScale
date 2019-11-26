#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::ingresarUsuarioPorTeclado()
{
	presenter->setTecladoAccion("Usuario");
}

void Screen1View::ingresarClavePorTeclado()
{
	presenter->setTecladoAccion("Clave");
}

void Screen1View::iniciarSesion() 
{
	touchgfx::Unicode::UnicodeChar* usuario;
	touchgfx::Unicode::UnicodeChar* clave;

	usuario = presenter->getUsuarioInput();
	clave = presenter->getClaveInput();

	touchgfx_printf("BUSCAR EN MEMORIA SI EL USUARIO Y CLAVE COINCIDEN\n");
	touchgfx_printf("%d\n", touchgfx::Unicode::strlen(usuario));
	touchgfx_printf("%d\n", touchgfx::Unicode::strlen(clave));
	touchgfx_printf("%s\n", usuario);


	if (touchgfx::Unicode::strlen(usuario) == 0 
		&& touchgfx::Unicode::strlen(usuario) == 0 ) {
		touchgfx_printf("Usuario y contrasena incorrecto");

		alertaError.setVisible(true);
		alertaError.invalidate();
		Unicode::strncpy(tituloErrorBuffer, "Error!", TITULOERROR_SIZE);
		Unicode::strncpy(cuerpoErrorBuffer, "Usuario o\nclave incorrecta", CUERPOERROR_SIZE);

	} else 
	{
		touchgfx_printf("COINCIDIERON => ACCEDER A MENU\n");
		application().gotoMenuPrincipalScreenSlideTransitionEast();
	}

	
}

void Screen1View::actualizarCampos()
{
	touchgfx::Unicode::UnicodeChar* usuario;
	touchgfx::Unicode::UnicodeChar* clave;

	usuario = presenter->getUsuarioInput();
	clave = presenter->getClaveInput();

	Unicode::strncpy(input_userBuffer, usuario, INPUT_USER_SIZE);
	Unicode::strncpy(input_claveBuffer, clave, INPUT_CLAVE_SIZE);

	
}
