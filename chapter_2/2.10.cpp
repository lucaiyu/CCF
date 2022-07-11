#include <iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 2;
    cout << a << " " << b << endl;
    a += b;
    b = a - b;
    a -= b;
    cout << a << " " << b << endl;
}