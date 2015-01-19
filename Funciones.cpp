/*


FUNCION

Que es una funcion?
Es un subprograma que peude actuar sobre datos y nos devuelve un valor.
la funcion main() es llamada por el  compilador automaticamente



Main()
{
  Funcion1(dentro de main)
	{
        Funcion2 (dentro de funcion1)
		{ 
		Return 0;
		}
	 Return 0;
	 }

   Funcion3
	{
	Return 0;
	}
Return 0;
}



Definir bien las funciones, leyendo su nombre tener una idea clara que 
va ha hacer la funcion.

A una fucion se le pueden añadir argumentos

intmiFuncion(int unEntero, float unDecimal);

     int retorno = miFuncion (3, 2.3);




Para usar funciones en un programa, han de estar declardas y definidas

---Declarar la funcion ---> Nombre, Tipo de retorno, Tipo de parámetros

 -Hacer un prototipo:

 "int Area (int largo,int ancho);" es igual "int Area (int,int);"

 Tipo de retorno: integer
 Nombre
 Parametros dos integer


 En un archivo aparte y llamar o incluir las funcione con #using
 Declarar el prototipo en el archivo que usa la funcion
 Declarar la funcion antes de que sea llamada por cualquier otra funcion
   (la declaracion actua como su propio protoipo)

  

---Definir la funcion ---> declaracion1, declaracion2...

Definir funcion = Cabecera + Cuerpo

Cabecera:
igual al protoripo excepto los parametros tienen que llevar nombre y no lleva ";"
al final
Cuerpo: conjunbto declaraciones entre {}
*/

#include <iostream>
using namespace std;
int area (int,int); // protoripo de funcion (esquelero)

int main()
{
	int largoJardin;
	int anchoJardin;
	int areaJardin;
	cout << "Largo Jardin: " ;
	cin >> largoJardin;
	cout << "\nAncho Jardin: " ;
	cin >> anchoJardin;

	areaJardin= area(largoJardin, anchoJardin);
	cout << "\nArea del Jardin: " <<areaJardin;
	return 0;
}

int area(int largo,int ancho) //cabecera
{
	return largo*ancho;//cuerpo
}
