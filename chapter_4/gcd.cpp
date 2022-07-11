#include <iostream>
using namespace std;
int main(){
    int a=0,b=0,tmp=0;
    cin >> a >> b;
    while(tmp=a%b){
        a=b;
        b=tmp;
    }
    cout << b << endl;
    return 0;
}