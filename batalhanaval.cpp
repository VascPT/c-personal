#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void barco5H(){
    cout << "BBBBB" << endl;
}
void barco5V(){
    cout << "B" << endl;
    cout << "B" << endl;
    cout << "B" << endl;
    cout << "B" << endl;
    cout << "B" << endl;
}
void barco4H(){
    cout << "BBBB" << endl;
}
void barco4V(){
    cout << "B" << endl;
    cout << "B" << endl;
    cout << "B" << endl;
    cout << "B" << endl;
}
void barco3H(){
    cout << "BBB" << endl;
}
void barco3V(){
    cout << "B" << endl;
    cout << "B" << endl;
    cout << "B" << endl;
}
void barco2H(){
    cout << "BB" << endl;
}
void barco2V(){
    cout << "B" << endl;
    cout << "B" << endl;
}


const int N = 10;
const int NUM_Barcos = 5;

struct Barco{
    int linha;
    int coluna;
    int tamanho;
    bool horizontal;
    bool destruido;
};

void printBoard(char board[N][N], bool showShips) {
    cout << "   ";
    for (int c = 1; c <= N; c++) cout << c << " ";
    cout << "\n";

    for (int r = 0; r < N; r++) {
        cout << r + 1 << " "; 
        if (r + 1 < 10) cout << " "; 
        for (int c = 0; c < N; c++) {
            cout << ((board[r][c] == 'S' && !showShips) ? '.' : board[r][c]) << " ";
        }
        cout << "\n";
    }
}
Barco barcoCinco;

void barco5VIEW(Barco barcoCinco){
    if (barcoCinco.horizontal == true){
        barco5H();
    }else if (barcoCinco.horizontal == false){
        barco5V();
    }
}
void barco4VIEW(Barco &barcoQuatro){
    if(barcoQuatro.horizontal == true){
        barco4H();
    }else if(barcoQuatro.horizontal == false){
        barco4V();
    }
}
void barco3VIEW(Barco &barcoTres){
    if(barcoTres.horizontal == true){
        barco3H();
    }else if (barcoTres.horizontal == false){
        barco3V();
    }
}
void barco2VIEW(Barco &barcoDois){
    if(barcoDois.horizontal == true){
        barco2H();
    }else if(barcoDois.horizontal == false){
        barco2V();
    }
}


int main(){
    //system("clear");
    system("CLS");
    char board[N][N];
    for(int r=0; r<N; r++){
        for(int c=0;c < N; c++){
            board[r][c] = '.';
        }
    }
    printBoard(board, false );
    barcoCinco.horizontal = true;
    barco5VIEW(barcoCinco);

    return 0;
}