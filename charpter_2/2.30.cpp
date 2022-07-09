#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    int x, y, z, result;
    srand(time(0));
    x = rand() %10 + 1;
    y = rand() %10 + 1;
    z = rand() %10 + 1;
    while(true){
       cout << x << "+" << y << "-" << z << "=";
       cin >> result;
       if (result == x+y-z){
        cout << "correct!" << endl;
        break;
       }
       else{
        cout << "Incorrect!" << endl;
       }
    }
}