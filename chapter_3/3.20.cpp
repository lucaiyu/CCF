#include <iostream>
using namespace std;
int main(){
    double num1, num2;
    char op;
    cin >> num1 >> op >> num2;
    switch(op){
        case'+' : cout << num1 + num2 << endl; break;
        case'-' : cout << num1 - num2 << endl; break;
        case'*' : cout << num1 * num2 << endl; break;
        case'/' : if (num2!=0) cout << num1 / num2 << endl;
        else cout << "ERROR" << endl; break;
        default : cout << "Operator ERROR" << endl; break;
    }
}