#include <iostream>
using namespace std;
int main(){
    int a,b = 5;
    a = b++;
    cout << a << endl;
    a,b = 5;
    a = ++b;
    cout << a << endl;
}
