#include <stdio.h>
#include <iostream>
using namespace std;

//compile line:g++ getEntradas.cpp -o get
//./get >entradas

int main() {

  /*/if(argc!=5){ // para crear entradas manualmente
    cout<<"-Para compilar ejecute: \n"
    "\tg++ -std=c++11 -pthread prueba1.cc -o main.out\n"
    "-Ejemplo de llamado: \n"
    "\t./main.out <# hilos> <tamano de la matrix> <operacion> <out name>\n"
    "-Operaciones: \n"
    "\t1. secuencial.\n"
    "\t2. x hilos\n"
    "\t3. tiling\n"
    "\t4. tiling x hilos\n";
    return 0;
  //}*/
  int t = 2;
  for(int pruebas = 0; pruebas < 4; pruebas++){
    /*/secuencial
    for (int i = 1; i <= 10; i++) {
      cout<<0<<" "<<i*100<<" "<<1<<endl;

    }*/

    /*/hilos, t = numero de hilos
    for (int i = 1; i <= 10; i++) {
      cout<<t<<" "<<i*100<<" "<<2<<endl;

    }

    //tiling
    for (int i = 1; i <= 10; i++) {
      cout<<t<<" "<<i*100<<" "<<3<<endl;
    }

        //tiling x hilos
    for (int i = 1; i <= 10; i++) {
      cout<<t<<" "<<i*100<<" "<<4<<endl;
    }*/

        //secuencial OMP
    for (int i = 1; i <= 4; i++) {
      cout<<t<<" "<<i*2000<<" "<<5<<endl;
    }

        //tiling OMP
    for (int j = 1; j <= 4; j++) {
      cout<<t<<" "<<j*2000<<" "<<6<<endl;
    }

    t = t+2;
  }
  return 0;
}
