#include<iostream>

int main(){
    int mood[24];
    for(int& e: mood){
        std::cin >> e;
    }  
    int i;
    while(std::cin >> i){
        if(i < 0 || i > 23)break;
        std::cout << mood[i];
        if(mood[i] > 50){
            std::cout << " YES" << std::endl;
        }else{
            std::cout << " NO" << std::endl;
        }
    }
    return 0;
}