#include <iostream> 
using namespace std;

int continuar = 0; // 0: Continuar, 1: Salir del programa

char* pregunta = "Como te sientes? \n \n 1: Feliz,\n 2: Triste,\n 3: Contento,\n 4: Deprimido \n 5: Desanimado \n\n";
int respuesta;


char* getRespuesta(int numeroDeRespuesta){
    switch(numeroDeRespuesta){
        case 1: return "Bien por ti (feliz) "; break;
        case 2: return "Aww :( Mejora (Triste) "; break;
        case 3: return "Bien por ti!!! (Contento) "; break;
        case 4: return "Ve a un doctor! (Deprimido) "; break;
        case 5: return "Venga... animate!!! (Desanimado) "; break;

    }
} 

void deseaContinuar(){
    cout << "Desea continuar?" << endl;
    cin >> continuar;
}

int main ( ) {

    while(!continuar){ //Checa si continuar =  0

    cout << pregunta << endl;
    cin >> respuesta;

    cout << getRespuesta(respuesta) << endl;
    
    deseaContinuar();

    }
}
