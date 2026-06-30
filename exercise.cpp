#include "Complejo.hpp"
#include <iostream>
using namespace std;

void pruebaOperaciones(){
    /*Esta función crea dos complejos y prueba las operaciones
    de imprimir, sumar, multiplicar, multiplicar escalar, agregar 
    y obtener conjugado*/

    //Crea dos complejos c1 y c2

    //Imprime c1 y c2

    //Prueba el agregar, voy a agregar a c1 el complejo c2
    cout<<"Agregar: ";
 
    //Imprimo c1 para ver el cambio
 
    //Pruebo la suma de c1 con c2, imprimo el resultado

    cout<< "Suma: ";
    //Imprime el resultado de suma

    //Pruebo la multiplicación de c1 con c2, imprimo el resultado
   
    cout<< "Mutiplicacion: ";
    //Imprime el resultado de multiplicación

    //Pruebo la multiplicación escalar c1 con 3.5, imprimo el resultado
    
    cout<<"Multiplicacion escalar: ";
    //Imprime el resultado de multiplicación escalar

    //saca el conjugado de c1 y guarda en otra variable

    //Imprime el conjugado de c1
    cout<<"Conjugado de c1: ";

}

void cargaArreglo(Complejo arr[], int num){
    /* Esta función recibe datos para crear num objetos Complejo, 
    después de recibirlos los suma todos e imprime a pantalla el resultado*/
     
    //Cargar datos de teclado para crear los n complejos, usa un for 
    double re, im;
    for (int i=0; i<num; i++){
        //Recibir los datos por teclado, dos por renglón

        //Crear el complejo y guardarlo en el arreglo

    } 
}

void imprimeArreglo(Complejo arr[], int num){
  /*Imprime a pantalla todos los Complejos del arreglo*/
}

void sumaArreglo(Complejo arr[], int num){
  /*Recorre el arreglo y va sumando los Complejos utilizando la función adecuada de la clase Complejo.
  Imprime a pantalla el resultado de la suma*/
}

void cargaArchivoMultiEscalar(Complejo arrr[], double multi){
    /*Esta función carga los datos de un archivo Datos.txt y modifica los datos del arreglo, los despliega a pantalla
    Después de crearlos los multiplica todos por multi y los despliega a pantalla de nuevo */
    //Crea el objeto ifstream 

    //Vincula el ifstream para abrir el archivo Datos.txt
    
    int numDatos=0;
    double re, im;
    //Lee los datos del archivo y modifica los complejos, usa un while


    //Ya cargados en el arreglo, los imprime a pantalla (llama a la función imprime que ya tienes)


   //Recorre el arreglo y multiplica cada complejo por multi


    
    cout<<"Ya multiplicados por "<<num << endl;
    //Imorime a pantalla los elementos del arreglo ya multiplicados (llama a la función que ya tienes para imprimir)
}

int main() {
  int opc;
  int NUM = 5;
  Complejo arr[NUM];
  while(opc!=4){
    cout<<"1-Prueba operaciones\n, 2-Recibe n y suma\n, 3-Carga archivo y multiplica\n, 4-Salir\n"<<endl;
    cin>>opc;
    switch(opc){
        case 1:
        {
            //llama a la función que prueba las operaciones
            break;
        }
        case 2:
        {
            //Carga datos desde teclado para los 5 Complejos del arreglo, llama a la función correspondiente
            // Imprime los elementos del arreglo, llama a la función correspondiente
            // Suma los elementos del arreglo, llama a la función correspondiente
            break;
        }
        case 3:
        {
            //Recibe por cuánto quieres multiplicar los datos del arreglo
            double porCuanto;
            cin>>porCuanto;
            //llama a la función que carga el archivo y multiplica
            break;
        }
        case 4:
        {
            cout<< "Saliendo del programa..."<<endl;
            break;
        }
        default:
        {
            cout<<"Opcion Incorrecta"<<endl;
        }
    }
 }
  return 0;
}
