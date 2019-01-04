#include <stdio.h>

#define MayorAMenor 0
#define MenorAMayor 1

//Crea variable
int numerosAleatorios[10];

 //Define en que tipo de orden se van a ordenar los numeros
int queTipoDeOrden; //0 = Mayor a menor, 1 = Menor a mayor

int veces, temp;
int numeroDeNumerosAleatorios = 10;


int main(){

    // Genera 10 numeros aleatorios
    for(int n = 0; n < 10; n++){
        numerosAleatorios[n] = rand() % 100 + 1;
    }

    printf("\nNumeros Aleatorios Generados: \n");
    for(int x = 0; x < 10; x++){
        printf("%d, ", numerosAleatorios[x]);
    }

    printf("\nPorfavor elije que tipo de Orden\n\n (0): Menor a mayor \n (1): Mayor a menor \n Orden: ");
    scanf("%d", &queTipoDeOrden);
    
    
    printf("\n\nTipo de Orden: \n");
    printf("%d (%s)", queTipoDeOrden, (queTipoDeOrden == 1) ? "Menor a Mayor": "Mayor a Menor");


    for (veces=0; veces < numeroDeNumerosAleatorios-1; ++veces) {

        for (int i=0; i < numeroDeNumerosAleatorios - veces - 1; ++i) {

            if ( numerosAleatorios[i] > numerosAleatorios[i+1] ) {
                temp=numerosAleatorios[i];
                numerosAleatorios[i]=numerosAleatorios[i+1];
                numerosAleatorios[i+1]=temp;
            }
        }
    }

    switch(queTipoDeOrden){
        case MayorAMenor: 
        for(int x = 0; x < 10; x++)
         printf("%d, ", numerosAleatorios[x]);

        break;
        case MenorAMayor:
        
        for(int y = 9; y >= 0; y--){
            printf("%d, ", numerosAleatorios[y]);
        }
        break;
    }

    

}