#include<iostream>
#include<vector>

using namespace std;

int main(){
    int p;
    vector<int> v;
    v.resize(6);
    for(int i = 0; i < 6; i++){
        cin >> v[i];
    }
    cin >> p;

    for(int i = 0; i < 6; i++){
        if(v[i] > 6 - p){
            cout << 6 - p;
        }else{
            cout << 7 - p;
        }
        if(i == 5){
            break;
        }
        cout << ' ';
    }
    return 0;
}