#include <iostream>
using namespace std;
int main(){
    int n=6,pep=0;
    //cin>>n;
    cout << "Array is" << endl;
    do{
        if(n%2==0){
            n=n/2;
            cout << n << endl;
            pep++;
        }
        if(n%2==1){
            n=n*3+1;
            cout << n << endl;
            pep++;
        }
    }
    while(n!=1);
    cout << pep << "times" << endl;

}