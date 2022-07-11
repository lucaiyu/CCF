#include <iostream>
using namespace std;
int main(){
    long a=0,b=1;
    cout << a << endl;
    cout << b << endl;
    for (int i=3; i<=100; i++){
        a+=b;
        cout << a << endl;
        b+=a;
        cout << b << endl;
    }
}