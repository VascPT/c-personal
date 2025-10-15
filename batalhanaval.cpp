#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
void barco5h(){
    cout << endl << "***** ***** ***** ***** *****" << endl;
    cout << "*   * *   * *   * *   * *   *" << endl;
    cout << "***** ***** ***** ***** *****" << endl;

}   
void barco4h(){
    cout << endl << "***** ***** ***** *****" << endl;
    cout<< "*   * *   * *   * *   *" << endl;
    cout<< "***** ***** ***** *****" << endl;
}
void barco3h(){
    cout << endl << "***** ***** *****" << endl;
    cout<< "*   * *   * *   *" << endl;
    cout<< "***** ***** *****" << endl;
}
void barco2h(){
    cout << endl << "***** *****" << endl;
    cout<< "*   * *   *" << endl;
    cout<< "***** *****" << endl;
}
*/
/*
void blocoAgua(){
    cout << " ---" << endl;
    cout << "|   |" << endl;
    cout << " ---" << endl;
}
void blocoAguaTiro(){
    cout << " ---" << endl;
    cout << "| 0 |" << endl;
    cout << " ---" << endl;
}
void blocoBarco(){
    cout << " ---" << endl;
    cout << "| B |" << endl;
    cout << " ---" << endl;
}
void blocoBarcoTiro(){
    cout << " ---" << endl;
    cout << "| X |" << endl;
    cout << " ---" << endl;
}
*/
const int TAM = 10;
const int NUM_Barcos = 5;

struct Barco{
    int linha;
    int coluna;
    int tamanho;
    bool horizontal;
    bool destruido;
};

void inicializarTab(char tabuleiro[TAM][TAM]){
    for (int i = 0 ; i < TAM ; i++)
        for (int j = 0 ; j < TAM ; j++)
            tabuleiro[i][j] = '~';
}

void printTab (char tabuleiro[TAM][TAM], bool esconder){
    
}



int main(){
    //system("clear");
    system("CLS");
    return 0;
}