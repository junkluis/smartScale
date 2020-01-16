#include <string>

class Perfil
{
	public:
		std::string titulo;
		std::string descripcion;
		int pesoPromedio;
		int difPermitida;

		Perfil(std::string perfilTitulo, 
			   std::string perfilDesc,
			   int promedio,
			   int diferencia) 
		{
			titulo = perfilTitulo;
			descripcion = perfilDesc;
			pesoPromedio = promedio;
			difPermitida = diferencia;
		}
};