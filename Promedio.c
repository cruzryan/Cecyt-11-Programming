#include <stdio.h>

double calificaciones[] = {9.9, 3.4, 10.0, 2.3, 4.3, 9.3, 10.3};

// Necesitamos saber cuantos elementos tiene el (arreglo o array) de calificaciones[]
// Dividimos el numero de Bytes entre cuantos bytes ocupa una variable "double"
// Eso nos da excactamente el numero de elementos dentro del arreglo 

int numeroDeCalificaciones = sizeof(calificaciones) / sizeof(double); // Da 7

double sumarCalificaciones(){
    double suma = 0.0;

    for(int n = 0; n < numeroDeCalificaciones; n++){
        suma = suma + calificaciones[n];
    }

    return suma;
}

int main(){
    double suma = sumarCalificaciones();
    printf("Promedio: %f", ((double) suma / numeroDeCalificaciones));
    return 0;
}