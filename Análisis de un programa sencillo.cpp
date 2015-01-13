# 
/* 
Simbolo Pound o libra
Señal para un programa llamado Preprocesador 
El preprocesador se ejecura primero (antes que el compilador), 
busca lineas que empiezan por #
*/

#include <iostream> 
/* 
   "include" es un comando qeu indica que algo se incluye en el preprocesador
   Los parentesis angulares <> le dicen donde buscar el archivo (en la carpeta "include" de nuestro compilador) 
   iostream seria el nombre archivo "C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\crt\src\iostream.cpp"
   se tomaria su codigo fuente como si lo hubiesemos escrito en nutro programa. 



-------------------------------------------------------------------------------------------------------------------------------------------
															*Funciones y uso de cout << (output)

int main() 
{
	std::cout << "Hola Mundo!\n";
	std::cout << "Voy a usar std::endl para finalizar una linea (end line)" << std::endl;
	std::cout << "Ahora una suma, 5+5=" << std::endl << 5+5 << std::endl;
	std::cout << "Resta y multiplcicaion 9-27 = X,  X*9=? \t" << "?= " << std::endl << (9-27)*9 << std::endl;
	std::cout << "Division con decimales, al ser un decimal se escribe (float) tras la redirrecion de salida << " << "\n" << (float) 8/7 << "\n";
	std::cout << "Para numeros grandes, escribimos (double) tras la redireccion de salida << "<< std::endl << (double) 2902*2902 <<"\n";
	system("PAUSE");
	return 0;
}
	

 Las funciones tienen que ser llamadas o invocadas durante la ejecucion del programa
 la funcion "main()" llama el pc por defecto
 Una funcion es un bloque de codigo que ejecuta acciones (que todo programa tiene)
 "int main()" declaramos la funcion main como un entero(int) y tiene que devolver un valor(aunque sea vacio)
 que por defecto es 0 "return 0;"

 Todas las funciones, en su cuerpo se inician con la apertura de una llave "{" y acaban con su cierre "}"
 todo lo que se escriba dentro de las llaves, es considerado que esta dentro de la funcion declarada

 "cout" y "cin" son objetos usados para manejar Outpus y Input de datos ej: imprimir algo en la pantalla o recoger algo del tecaldo

 Estos objetos se proven desde una libreria (un conjuto de calses) y mediante del uso de "std::", especificamos
 que el objeto "cout" proviene de la libreria "estandar o (std)". 
 Estos especificadores son conocimos como namespaces
 asi c++ premite trabajar con objetos de nombre igual pero de diferntes namespaces ej: "std::cout" y "geh::cout"

 "<<" operador de redireccion de salida, indica que todo lo que aparezca despues va a ser mostrado en pantalla,
 se pueden añadir tantos como quieras en una linea
 "Hola Mundo!\n\n" es un "string" o porcion de texto que debe ir entre comillas ""   "\n" indica que hay un salto de linea "\t" 
 es un salto de tabulacuion 

 "system("PAUSE");" se usa para hacer una pausa en nuestro programa 



-------------------------------------------------------------------------------------------------------------------------------------------
									
										*Usando la palabra clave using para simplificar codigo

   Con la palabra clave "using std::cout" y "using std::endl", declaramos que cada vez que aparezcan los objetos cout y endl, pertenecen al namespace std (estandar) y no a otro.

int main()
{
	using std::cout;
	using std::endl;

	cout << "Hola Mundo!\n";
	cout << "Voy a usar std::endl para finalizar una linea (end line)" << endl;
	cout << "Ahora una suma, 5+5=" <<endl << 5+5 << std::endl;
	cout << "Resta y multiplcicaion 9-27 = X,  X*9=? \t" << "?= " << endl << (9-27)*9 << endl;
	cout << "Division con decimales, al ser un decimal se escribe (float) tras la redirrecion de salida << " << endl << (float) 8/7 << endl;
	cout << "Para numeros grandes, escribimos (double) tras la redireccion de salida << " << endl << (double) 2902*2902 <<"\n";
	system("PAUSE");
	return 0;
}


-------------------------------------------------------------------------------------------------------------------------------------------

					*Si tu trabajo simpre va a usar namespaces(especificadores) de std (estandar), se declara escribiendo "using namespace std;" 

int main()	
{
	using namespace std;

	cout << "Hola Mundo!\n";
	cout << "Voy a usar std::endl para finalizar una linea (end line)" << endl;
	cout << "Ahora una suma, 5+5=" <<endl << 5+5 << std::endl;
	cout << "Resta y multiplcicaion 9-27 = X,  X*9=? \t" << "?= " << endl << (9-27)*9 << endl;
	cout << "Division con decimales, al ser un decimal se escribe (float) tras la redirrecion de salida << " << endl << (float) 8/7 << endl;
	cout << "Para numeros grandes, escribimos (double) tras la redireccion de salida << " << endl << (double) 2902*2902 <<"\n";
	funcion2;
	system("PAUSE");
	return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------------


										*Llamamiento de unas funciones a otras


void funcion2()
{
	using namespace std;
	cout << "Este texto procede de una funcion difrente y ha sido llamado a main()" <<endl;
}


 "void" es como "int" pero en este caso la void dice que la funcion va a ser vacia, no retorna nada 
 Para llamar a la funcion, se escribe su nombre con los parametros(), en este caso no contiene parametros.


int main()
{ 
	using namespace std;
	cout << "Llamando a la funcion2() declarada anteriormente" << endl;
	funcion2();
	system("PAUSE");
	return 0;
}


	
-------------------------------------------------------------------------------------------------------------------------------------------
										*Uso del cin >> (input)

*/
int multiplicacion (int numero1, int numero2)
{
	using namespace	std;
	return (numero1 * numero2);
}
int main()
{
	using namespace std;

	int a, b, c;

	cout << "Dame dos numeros: ";

	cin >> a >> b;
	
	c = multiplicacion(a,b);

	cout << c;

	return 0;
}

	


