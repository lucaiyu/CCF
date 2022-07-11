#include <iostream>
using namespace std;
int main(){
    int passwd=114514;
    int x=0,n=0;
    while(n<3&&x!=passwd){
        n++;
        cin>>x;
        if(x!=passwd){
            cout << "ERROR" << endl;
        }
        if(x==passwd){
            cout << "CORRECT" << endl;
        }
        else if(n>=3){
            cout << "LOCKED" << endl;
        }

    }
    return 0;
}