#include <iostream>
using namespace std;
int main(){
    int n=7, count=0;
    cout << "count:" << count << endl << "address of count:" << &count << endl;
    for(int i=1; i<=n; i++){
        if (n%i==0){
            count++;
        }
    }
    cout << count << endl;
}