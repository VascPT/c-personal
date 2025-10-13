#include <iostream>
#include <stdlib.h>
using namespace std;

void portaaviao(){
    cout << endl << "***** ***** ***** ***** *****" << endl;
    cout << "*   * *   * *   * *   * *   *" << endl;
    cout << "***** ***** ***** ***** *****" << endl;

}   
void cruzador(){
    cout << endl << "***** ***** ***** *****" << endl;
    cout<< "*   * *   * *   * *   *" << endl;
    cout<< "***** ***** ***** *****" << endl;
}
void contratorpedeiro(){
    cout << endl << "***** ***** *****" << endl;
    cout<< "*   * *   * *   *" << endl;
    cout<< "***** ***** *****" << endl;
}
void rebocador(){
    cout << endl << "***** *****" << endl;
    cout<< "*   * *   *" << endl;
    cout<< "***** *****" << endl;
}

int main(){
    system("CLS");
    portaaviao();
    cruzador();
    contratorpedeiro();
    rebocador();

    return 0;
}