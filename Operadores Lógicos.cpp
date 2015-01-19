/*-------------------------------------------------------------------------------------------------
                                     Operadores

Un simbolo que hace que el compialdor lleve a cabo una accion
Los operadores actuan sobre los operados, En c++ cualquier expresion puede ser
un operando

-------------------------------------------------------------------------------------------------
                                Operadores de asignacion

x = a+b

l-value (izquierda)  x
                     =
r-value (derecha)    a+b

Todlos los l-value puede ser r-value
pero no todos los r-value pueden ser l-value


                    Operadores matemáticos
Suma  +
Resta  -
Multiplicacion  *
Division  /
Modulus  %


#include <iostream>
using std::cout; using std::endl;
int main()
{
	unsigned int numero1, numero2, resultado; 
	numero1=100; 
	numero2=50;
	resultado=numero1-numero2; cout <<resultado<<"\n";
	resultado=numero2-numero1; cout <<resultado;
	return 0;
}

//al ser un valor unsigned, solo admite positivos por lo que al restar 50-100, vuelve al numero maximo permitido.


#include <iostream>
using std::cout; using std::endl;
int main2()
{
	float resultado; float numerador=5; float divisor=3; short resto;
	resultado=numerador/divisor; cout <<resultado <<endl;
	// el restop solo puede hacerse con numeros enteros y variables enteras 
	// resto=numerador%divisor; cout <<resto
	return 0;
}


-------------------------------------------------------------------------------------------------
                         Operadores Lógicos

AND (y)    ->    &&      -> expresion1 && expresion2 

OR  (o)    ->    ||      -> expresion1 || expresion2

NOT (no)   ->    !       -> !expresion1



                            AND (conectar y evaluar varias expresiones)
							
Para que la expresion general sea verdad, las dos tienen que ser verdad

"if (esLunes && sonLas2)"  --> si esLunes y sonLas2 son validas, el if es verdadero

                            OR (conectar y evaluar varias expresiones)
Para que una de las dos expresiones sea cierta, la expresion general es cierta

"if ((x==2) || (x==3))" ---> si es x=2 o x=3; el if es verdadero.

                          NOT(conectar y evaluar varias expresiones)

Para que la expresion general sea verdad, la expresion ha de ser falsa

"if(!(x==3)"
"if(x!=3)"          --> si x no es igual a 3, el if es verdadero.

El compilador en estos casos es de circuito corto, si calcula que una de las expresiones
no se cumple, deja de comrpobar el resto

EJ: "if((edad==2)&&(edad2==3)&&(edad4==5)&&(edad5==6))" --> en el momento de que compruebe que
															edad!=2, deja de comprobar edad2,edad3...
														-Esto pasa igual en "OR"
-------------------------------------------------------------------------------------------------
                              Prioridad operadores relacionaes y logicos:

                                          AND>OR
Usar parentesis para señalar las prioridades-

"if((x>5) && (y>5 || z>5)"  !=  "if((x>5 && y>5) || (z>5)"


#include <iostream>
using namespace std;
int main1()
{
  short x=0;
  if(!x) 
  {
	  x=78; 
  }
  cout <<x;
  return 0;
}

En c++ Falso es siempre igual a 0

if(x) = Si x es verdadero (no es 0) = if(x!=0)

if(!x) = Si x no es verdadero (es 0) = if(x==0)
-------------------------------------------------------------------------------------------------
                              Operador Condicional Ternario (?:)

Es el unico operacdor de c++ que tiene tres terminos
Toma 3 expreiones y devuelve un valor 
                        x ? y : z 
			 Si x es verdad, devuelve el valor de la expresion2 y
			 En otro caso, devuelve el valor de la expresion3 z

*/
#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout <<"Escribe dos numeros: \n";
	cout <<"Primero:\n ";
	cin >> x;
	cout <<"Segundo: ";
	cin >> y;
	cout<<"\n";
/*
	if (x>y) z=x, cout << z;
	else 
		if (y>x) z=y, cout <<z;
		else cout << "Los numeros son iguales";	
*/
     z=   (x>y) ? x : y; // z es igual a x si x>y, si no, z sera igual a y.
	return 0;

}




