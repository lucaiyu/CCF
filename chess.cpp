#include <iostream>
#include <cstring>
using namespace std;
short chess[10][9] = {
    {1,2,4,5,6,5,4,2,1},
    {0,0,0,0,0,0,0,0,0},
    {0,3,0,0,0,0,0,3,0},
    {7,0,7,0,7,0,7,0,7},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {14,0,14,0,14,0,14,0,14},
    {0,10,0,0,0,0,0,10,0},
    {0,0,0,0,0,0,0,0,0},
    {8,9,11,12,13,12,11,9,8}
};
void render(){
    int tmp=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            tmp = chess[i][j];
            switch(tmp){
                case 0 : cout << "　";break;
                case 1 : cout << "\033[33m車\033[0m";break;
                case 2 : cout << "\033[33m馬\033[0m";break;
                case 3 : cout << "\033[33m炮\033[0m";break;
                case 4 : cout << "\033[33m象\033[0m";break;
                case 5 : cout << "\033[33m士\033[0m";break;
                case 6 : cout << "\033[33m將\033[0m";break;
                case 7 : cout << "\033[33m卒\033[0m";break;
                case 8 : cout << "\033[34m車\033[0m";break;
                case 9 : cout << "\033[34m馬\033[0m";break;
                case 10 : cout << "\033[34m炮\033[0m";break;
                case 11 : cout << "\033[34m相\033[0m";break;
                case 12 : cout << "\033[34m士\033[0m";break;
                case 13 : cout << "\033[34m帥\033[0m";break;
                case 14 : cout << "\033[34m兵\033[0m";break;
            }
        }
        cout << endl;
    }
}
bool move(int x1, int y1, int x2, int y2){
    tmp = chess[x1-1][y1-1];
    switch(tmp){
        case 0 : return 0;break;
        case 1 : {
            if(x1-x2!=0&&y1-y2==0){
                chess[x1+1][y1+1]=0;
                chess[x2+1][y2+1]=1;
                return 1;
            }
            if(x1-x2==0&&y1-y2!=0){
                chess[x1+1][y1+1]=0;
                chess[x2+1][y2+1]=1;
                return 1;
            }
            else{
                return 0;
            }
        }
        case 2 : {
            if(x1+1==x2||x1-1==x2){
                if(y1-y2==2||y2-y1==2){
                    chess[x1+1][y1+1]=0;
                    chess[x2+1][y2+1]=2;
                    return 1;
                }
                else{
                    return 0;
                }
            }
        }
        case 3: {
            
        }
    }
}
int main(){
    //render();
}
