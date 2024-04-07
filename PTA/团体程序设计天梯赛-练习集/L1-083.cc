#include <iostream>

using namespace std;
int main(){
    int age1,age2;
    int x,y;
    cin >> age1 >> age2 >> x >> y;

   if(x >= age1 && y >= age1){
       cout << x << "-Y " << y << "-Y" << endl;
       cout << "huan ying ru guan" << endl;
   }
    else if(x < age1 && y < age1){
        cout << x << "-N " << y << "-N" << endl;
        cout << "zhang da zai lai ba" << endl;
    }
    else if(x < age1 && y >= age1){
        if(y >= age2){
            cout << x << "-Y " << y << "-Y" << endl;
            cout << "qing 2 zhao gu hao 1" << endl;
        }else{
            cout << x << "-N " << y << "-Y" << endl;
            cout << "2: huan ying ru guan" << endl;
        }
    }
    else if(x >= age1 && y < age1){
        if(x >= age2){
            cout << x << "-Y " << y << "-Y" << endl;
            cout << "qing 1 zhao gu hao 2" << endl;
        }else{
            cout << x << "-Y " << y << "-N" << endl;
            cout << "1: huan ying ru guan" << endl;
        }
    }
    return 0;
}