/*
-------------------------------------------------------------------------------------------------
                                        Declaraciones

Una Declaracuon es una línea de Comando
Puede controloar la ejecucion de una secuencia
Puede evaluar una expresion
Puede no hacer anda (null)
Todas las declaraciones finalizan con punto y coma ";"

ej:
			x = a + b   no es un igual algebraico, es un simbolo de asignacion
						que asigna lo del lado derecho con el izquierdo
						suma a y b y asignalo a x

Los caracteres espacios en blanco son ignorados en desclaraciones
	"x=a+b;"   es lo mismo que   	"x	=	a	+	b;"

Declaraciones compuestas
Cualquier lugar donde podamos poner una declaracion simple tambien se puede poner compuesta
Una declaracion compuesta es tambien llama "bloque"

Un bloque empieza con "{" y finaliza con "}"
Cada declaracion del bloque se finaliza con ";" pero el bloque en si no.
-------------------------------------------------------------------------------------------------
                                    Expresiones

Una expresion es un tipo de declaracion que tiene que devolver un valor
Cualquier expresion puede ser usada en el aldo derecho de un operador de asignacion
		y=x=a+b 
		Se suma a+b, se asigna el resultrado a x, se asigna el resultado de la expresion x=a+b a y.


#include <iostream>
int main()
{
	int a,b,x,y;
	a=b=x=0;
	y=35;
	std::cout <<"A="<<a<<"\t B="<<b<<"\t X="<<x<<"\tY="<<y;
	a=9 ;b=7; x=a+b; std::cout <<std::endl<<"Suma:"<<x;
	y=x=a+b; std::cout <<std::endl<<"Y operada="<<y; 
	return 0;
}

*/