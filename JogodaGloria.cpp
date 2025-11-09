//Código feito por Vasco Franco
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
//#include <unistd.h>
#include <limits>
using namespace std;
void clear(){
    #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif
}
const int N = 30;
const int Perde_Jogada = 4; //casa 4
const int Volta_tres_casas = 10; //casa 10
const int Avanca_tres_casas = 5; //casa 5
const int Joga_novament = 15; //casa 15
const int Espera_passg = 20; // casa 20

string nomeP1;
string nomeP2;


void iniciarCasas(string casas[N]){
    for (int i=0; i<N; i++)
        casas[i] = "-";
    casas[Perde_Jogada -1] = "PJ"; //Perde a vez
    casas[Volta_tres_casas -1] = "V3"; //Volta 3 casas
    casas[Avanca_tres_casas -1] = "A3"; //Avança 3 casas
    casas[Joga_novament -1] = "JN"; //Joga novamente
    casas[Espera_passg -1] = "EP"; //Espera passagem do próximo jogador
}

void imprimirCasas(const string casas[N], int posP1, int posP2){
    //linha dos números (1...30)
    for(int i=0 ; i<N;i++){ 
        cout<<(i+1<10?" ":"")<<i+1<<" ";
    }
    cout << "\n";

    for(int i=0; i<N; i++){
        string cell = casas[i];
    
    bool p1 = (posP1 == i);
    bool p2 = (posP2 == i);
    if(p1 && p2){
        cell = "P*"; //Ambos os jogadores na mesma casa
    }else if(p1){
        cell = "P1"; //Casa com Player 1
    }else if(p2){
        cell = "P2"; //Casa com Player 2
    }

    if(cell.size()==1){ //garantir largura 2 por casa
        cell = " " + cell; 
    }
    cout << cell << " ";
}
    cout << "\n";
}




void dado(){
    std::srand(std::time(nullptr)); // inicializa o gerador com o tempo atual
    int numero = std::rand() % 6 + 1; // número entre 1 e 6 (como um dado)
    std::cout << "Saiu o número: " << numero << std::endl;
}

int main(){
    clear();
    cout << "Selecione o nome para o Player 1!: ";
    cin >> nomeP1;
    
    cout << endl << "Ola " << nomeP1 << "! Vamos avancar para o Player 2..." << endl;
    #ifdef _WIN32
        Sleep(3000);
    #else
        sleep(3);
    #endif
    clear();
    cout << "Selecione o nome para o Player 2!: ";
    cin >> nomeP2;
    cout << endl << "Ola " << nomeP2 << "! Prima ENTER para comecar o jogo.";
    cin.ignore();
    cin.get();
    clear();

    string casas[N];
    iniciarCasas(casas);
    int posP1 = 0;
    int posP2 = 0;
    imprimirCasas(casas, posP1, posP2);


}