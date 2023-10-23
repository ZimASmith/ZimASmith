#include <ctime> // biblioteca de funciones de reloj
#include <iostream> // funciones E/S
#include <math.h> // funciones matematicas

using namespace std;

void mostrarTiempo (clock_t tiempo);

int main(){
	clock_t tiempo = clock(); // iniciarel reloj para calcular el tiempo
	//variables
	long long i = 0;
	double sum = 0;
	//inicia el ciclo de alrededor de 28 segundos
	for (i = 1; i < 1000000000; i++) {
		// funcion que genera alta carga de procesamiento
		//tomamos un numero doble (decimal largo) y le aplicamos logaritmo natural
		sum = sum + log(double(i));
	}
	
	//mostramos el tiempo que le tomo ejecutar
	mostrarTiempo(tiempo);
	
	//salimos
	cout<<"pulse para salir...";
	cin.get();
	return 0;
}

//funcion que calcula el tiempo de ejecución
void mostrarTiempo(clock_t tiempo){
	tiempo = clock()- tiempo;
	cout<<endl<< "tiempo de ejecucion es " <<double(tiempo) / CLOCKS_PER_SEC <<"seg." <<endl;
}
