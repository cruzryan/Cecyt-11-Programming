#include <iostream>

using namespace std;

int continuar = 0; // 0: Continuar, 1: Salir del programa

long numero;

void deseaContinuar(){
    cout << "Desea continuar?" << endl;
    cin >> continuar;
}

int main(){
    while(!continuar){ //Checa si continuar =  0

    cout << "Escriba un numero:" << endl;
    cin >> numero;
    if (numero < 100) cout << "Menor que 100\n"; 
        else  cout << "Mayor que 100\n";
        deseaContinuar();
   
    }
}