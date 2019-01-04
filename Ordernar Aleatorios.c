#include <stdio.h>

int numerosAleatorios[10];
int numerosOrdenados[10];

// n = numero de veces para el loop


void bubble_sort(int a[], int n) {
    int i = 0, j = 0, tmp;

    for(i = 0; i < n; i++){
        for (j = 0; j < n - i - 1; j++) { // last i elements are sorted already            
            if (a[j] > a[j + 1]) {  // swop if order is broken
               tmp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = tmp;
           }
        }
    }
}


int main(){

    int sorted = 0;

    // Generar 10 numeros aleatorios
    for(int n = 0; n < 10; n++){
        numerosAleatorios[n] = rand() % 100 + 1;
    }

    while(sorted == 0){
    for(int i = 0; i < 9; i++){
        
        sorted = 1;
        int temp;

        if( numerosAleatorios[i] < numerosAleatorios[i + 1]){
        
            temp = numerosAleatorios[i];
            numerosAleatorios[i] = numerosAleatorios[i + 1]; 
            numerosAleatorios[i + 1] = temp;

            printf("sorted!!! %d", numerosAleatorios[i]);
            sorted = 0;
        
        } 
    }    

     if(sorted == 1){
       for(int x = 0; x < 10; x++ ){
        printf("%d ", numerosAleatorios[x]);
       }
    }

   
    }

    return 0;
} 