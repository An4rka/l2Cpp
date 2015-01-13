/*
Las constantes son localizaciones de datos en la memoria, pero a diferencia de las variables
las constantes no cambian, simpre permanecen igual, se le asigna un valor y ese valor no peude ser 
modificado

---------------------------------------------------------------------------------------------------------------------------------
                                 Tipo de constantes

Constante Literal, escrita directamente en el codigo ej; 20

Constante Simbólica, escrita con texto en texto ej: estudiantesPorClase = 20
	+Codigo más legible y manegable 
	Si se modifica este valor, cambia para todas las lineas, 
	en cambio la contante literal tiene que ser remplazada manualmente
	en cada linea

Constante Enumerada, un hibrido entre variables y constantes
	Podemos crear nuevos tipos en ella y definir variables de esos tipos
	pero los valores de esas variables estan restringidos.

enum meses {enero, febrero, marzo}

"enum" - convierte meses en una enumeración: Un nuevo Tipo.
		 convierte enero, febrero y marzo en variables simbólicas con 
		 valor 0,1,2
		 Cada constante enumerada tiene un valor integer(si no se especifica nada, 
		 enero=0,  febrero=1 marzo=2, este valor se peude modificar y es ++ del anterior
		 ej: enero=300, febrero=301, marzo=302
		     enero=3, febrero=4, marzo=800


---------------------------------------------------------------------------------------------------------------------------------
                                 Declarar constantes

Se puede usar "#define", pero no cumple con el estandar de c++
	-Obsolteo

Así que se usa "const", ej: "const unsigned short int estudaintesPorClase=20"
	-Evita bugs
	-Tiene un tipo asociado y el compialdor peude forzar a usar ese tipo en el valor que le demos

	*/

#include <iostream>
int main()
{
	enum Meses {Enero, Febrero, Marzo, Junio, Julio, Agosto};

	Meses hoy; // la variable "hoy", tiene restringidos los valores posibles enumerados
	hoy=Marzo;
	
//condicional (|| = o)

	if (hoy==Enero || hoy==Febrero || hoy==2)  //si se cumple esto,
		std::cout <<std::endl <<"Estamos en Invierno.\n"; //haz esto.
	else // si lo anterior no,
		std::cout <<std::endl <<"Estamos en Verano.\n";//haz esto otro.

const float pi = 3.13159; 

float suma = 72+ pi;
std:: cout << "Constante pi + 72:" <<std::endl <<suma;
	return 0;
}
