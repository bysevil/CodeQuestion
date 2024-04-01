#include<iostream>
#include<string>

int main(){
    int n,m;
    std::cin >> n >> m;
    std::string Question;
    while(n){
        getline(std::cin,Question);
        if(Question.find("qiandao") == std::string::npos && Question.find("easy") == std::string::npos){
            if(m){ 
                m--;
            }else{
                std::cout << Question << std::endl;
            }
        }
        n--;
    }
    return 0;
}