#include<iostream>
#include<unordered_map>

int main(){
    std::unordered_map<int,int> power;
    
    int i; std::cin >> i;
    
    int p;
    while(i--){
        std::cin >> p;
        power[p]++;
    }

    int max = power.begin()->first;
    int min = power.begin()->first;
    for(const auto& e : power){
        if(e.first > max) max = e.first;
        if(e.first < max) min = e.first;
    }
    std::cout << min << ' ' << power[min] << std::endl;
    std::cout << max << ' ' << power[max] << std::endl;
    return 0;
}