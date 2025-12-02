#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#ifdef WIN32_
        #include <windows.h>
    #else
        //#include <unistd.h>
    #endif
using namespace std;
#define TOTAL_NUMS 100
#define PER_LINE 20
//colors for numbers
#define RESET "\033[0m"
#define RED "\033[31m"
#define BLUE "\033[34m"
#define WHITE "\033[37m"
#define CYAN "\033[36m"
#define YELLOW "\033[33m"
#define PURPLE "\e[0;35m"
void clear(){
    #ifdef WIN32
        system("CLS");
    #else
        system("clear");
    #endif
}
//track numbers that have been drawn
bool drawn[TOTAL_NUMS + 1] = {false};

void showNumbers(){
    //shows all the 100 nums
    for(int i=1; i<=TOTAL_NUMS; i++){
       if (drawn[i]) {
            //drawn nums
            cout << YELLOW << i << " ";
        } else {
            //regular nums
            cout << CYAN << i << " ";
        }
        //Makes lines of 20
        if (i % PER_LINE == 0){
        cout << "\n";
    }
    }
}

int drawrandNum(){
    vector<int> pool;
    //list of nums that have not been drawn yet
     for (int i = 1; i <= TOTAL_NUMS; i++) {
        if (!drawn[i]) {
            pool.push_back(i);
        }
    }

    if (pool.empty())
        return -1; //no more nums left

    int index = rand() % pool.size();
    int num = pool[index];

    drawn[num] = true; //mark number as drawn (yellow)

    return num;
}

int main(){
    srand(time(NULL));
    clear();
    cout << endl << "Welcome to BINGO! Here is the table of numbers. Good luck!" << endl << endl;
    showNumbers();
    cout << RESET << "Press enter to rool a number ";
    drawrandNum();
    //press enter to continue
    cin.ignore();
    clear();
    showNumbers();

    return 0;
}