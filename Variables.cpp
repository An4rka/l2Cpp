#include <iostream>
using namespace std;

/*
¿Qué es una variable?

Un lugar para almacenar informacion, en la memoria de nuestro ordenador, donde almacena y recupera informacion
Es un alalmacenamiento temporal, cuando se cierra el programa, desaparece

La memoria de nuestro ordenador, podemos decir que son "cajones" de un armario, es ellos se 
almacena la informacion, y dependiendo de la variable int, double..., recoge uno o varios "cajones"
El nombre de la variable "miVariable", es una etiqueta que se pone a los cajones de memoria que 
va a usar, así se locacliza y lo reconoce el programa
Esa memoria se conoce como RAM, randmon acces memory, acceso de memoria alteatorio, que es volatil.
Cada variable se crea en la RAM de nuestro pc al iniciar el programa.

El tipo de variable le va ha decir al compilador la cantidad de memoria que va a ocupar en nuestra RAM
por ello es importante definir los tipos de variable que mas nos cenvengan

(strong Typing) especificacion precisa del tipo de datos, variables tienen que estar especificadas con el
tipo de datos que va a tener


Cada celda en la memoria es 1 byte, 8 bits, 
Si creamos una variable que ocupa 3 bytes, reserva 3 celdas en la memoria

Por lo que en variables el tamaño si importa

---------------------------------------------------------------------------------------------------------------------------------
                                                Secuencias de escape

Nueva línea
\n

Tabulación horizontal
\t

Tabulación vertical
\v

Retroceso
\b

Retorno de carro
\r

Avance de página
\f

alerta
\a

Barra diagonal inversa(BackSlash)
\\

Signo de interrogación
? o \?

Comilla simple
\'

Comilla doble
\"

Carácter nulo
\0

Octal
\ooo

Hexadecimal
\xhhh

Unicode (UTF-8)
\uxxxx

Unicode (UTF-16)
\Uxxxxxxxx

---------------------------------------------------------------------------------------------------------------------------------
                                                    Caracteres españoles mas comunes (hexadecimal \xhhh)
á = \xa0					Á = \xb5			ñ = \xa4                      
é = \x82					É = \x90			Ñ = \xa5
í = \xa1					Í = \xd6			¿ = \xa8
ó = \xa2					Ó = \xe0
ú = \xa3					Ú = \xe9


---------------------------------------------------------------------------------------------------------------------------------
                                                          Tipos de variables:

 Un programa sencillo para determinar lo que ocupa una variable en el ordenador:

 \xa4o = ñ
 sizeof() muestra el tamaño en bytes

 char - referencia a cacarcteres simples, 1 byte de tamaño
 int -  4 bytes (int = enteros)
 short int - 2 bytes
 long int - 4 bytes
 double - 8 bytes
 float - 4 bytes
 bool - 1 bytes

 http://i.msdn.microsoft.com/dynimg/IC609788.png



int main()
{
	cout <<"El tama\xa4o de un int es: \t" <<sizeof(int) <<"bytes." <<endl;
	cout <<"El tama\xa4o de un short int es:\t" <<sizeof(short) << "bytes." <<endl;
	cout <<"El tama\xa4o de un long int es:\t" <<sizeof(long) <<"bytes." <<endl;
	cout <<"El tama\xa4o de un char es:\t" <<sizeof(char) <<"bytes." <<endl;
	cout <<"El tama\xa4o de un float es:\t" <<sizeof(float) <<"bytes." <<endl;
	cout <<"El tama\xa4o de un double es:\t" <<sizeof(double) <<"bytes." <<endl;
	cout <<"El tama\xa4o de un bool es:\t" <<sizeof(bool) <<"bytes." <<endl;
	return 0;
}



Las varaibles int, pueden presentar dos valores "signed" y "unsigned"
"Singed" pueden ser valores tanto positivos como negativos (en "int" de -32768 a 32767)
"unsinged" solo puede ser valores positivos (en "int" de 0 a 65.535)
Si no se especificava nada, int es singed (-,+)

Las variables floating-point (coma flotante) pueden ser expresadas como fracciones (decimales)


bool
Por lo general utiliza 1 byte de memoria, valores: true o false. 

---------------------------------------------------------------------------------------------------------------------------------
                                                             char

Utiliza generalmente 1 byte de memoria, permite almacenar un carácter, valores; 256 caracteres.

Hace referencia a los caracteres y símbolos de ASCII y ASCII extended (conjuto de caracteres estandarizados{American Standard Code for Information Interchange})

Con estos 256 caracteres podermos codificar el lenguaje estandarizado

Un programa simple para mostrartlo:


int main()
{

	for (unsigned short ascii = 0; ascii<256; ascii++) //para esto,
		 std::cout << (char) ascii; //haz esto.
	return 0;
}

---------------------------------------------------------------------------------------------------------------------------------
                                  Se usa "++" despues de escribir el nombre de la variable para sumarle +1
								  Se usa "--" despues de escribir el nombre de la variable para sumarle -1

int main() 
{
	short int masMas=0; 
	cout << masMas; 
	masMas++; //  0 + 1 = 1 masMas=1
	cout <<endl <<masMas;
	masMas--; // 1 - 1 = 0 masMas=0
	cout <<endl <<masMas;
	return 0;
}

---------------------------------------------------------------------------------------------------------------------------------	

unsigned short int
Utiliza generalmente 2 bytes de memoria, valores: de 0 a 65 535 

short int
Utiliza generalmente 2 bytes de memoria, valores: de -32768 a 32767. 

unsigned long int
Utiliza generalmente 4 bytes de memoria, valores: de 0 a 4 294 967 295. 

long int
Utiliza generalmente 4 bytes de memoria, valores: de -2 147 483 648 a 2 147 483 647. 

int (16 bits)
Utiliza generalmente 2 bytes de memoria, valores: de -32 768 a 32 767. 

int (32 bits)
Utiliza generalmente 4 bytes de memoria, valores: de -2 147 483 648 a 2 147 483 647. 

unsigned int (16 bits)
Utiliza generalmente 2 bytes de memoria, valores: de 0 a 65 535. 

unsigned int (32 bits)
Utiliza generalmente 2 bytes de memoria, valores: de 0 a 4 294 967 295. 

double
Utiliza generalmente 8 bytes de memoria, valores: de 2.2e-308 a 3.4e-38. 

float
Utiliza generalmente 4 bytes de memoria, valores: de 1.2e-308 a 3.4e-38. 

---------------------------------------------------------------------------------------------------------------------------------
                                                       Definir una variable: 

tipo (espacio) nombreDeVariable; 
 int miVariable;
 
 No pueden contener espacios, ni las llamadas key word (palabras clave) como: int, bool, double...

C++ es Case Sebsivity (reconoce las mayusculas y minusculas)
 int miVariable; 
 int MiVariable;
 int MIVARIABLE;
Estas variables son diferntes

Para definir variables del mismo tipo, se emplea la coma ","

long int variable1, vaiable2, variable3;

Para asignar valores a las variable se usa el operador "="

short int variable4;
variable4 = 82;

O directamente
short int variable4=82;

Tambien se pueden mezclar estos conceptos:

short int edad, suEdad=30, miEdad;



int main()
{
	unsigned short int miEdad=5, suEdad=32;
	unsigned short int mediaEdad=(miEdad+suEdad)/2;
	cout << miEdad <<"\n" << suEdad <<"\n";
	cout << "La media de las edades es: \t" <<mediaEdad;
	return 0;
}

---------------------------------------------------------------------------------------------------------------------------------
                                                             Alias de variables

El comando es "typedef" va seguido de la linea de variable que quieres sutituir:



typedef unsigned short int USHORT;  //Linea donde sistituyo "unsigned short int" por "USHORT"

int main()
{
	USHORT miEdad=5, suEdad=32;
	USHORT mediaEdad=(miEdad+suEdad)/2;
	cout << miEdad <<"\n" << suEdad <<"\n";
	cout << "La media de las edades es: \t" <<mediaEdad;
	return 0;
}





*/