#include <iostream>
using namespace std;
int main(){
    int cmark, mmark;
    cin >> cmark >> mmark;
    if(cmark>=75 && mmark>=95){
        cout << "Good" << endl;
    }
    else{
        cout << "Bad" << endl;
    }
}