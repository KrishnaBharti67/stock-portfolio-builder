#include <iostream>
#include <cmath>

int main(){
    int temp;
    bool sunny=false;
    std::cout<<"Enter temperature";
    std::cin>>temp;
    if(temp<=0 || temp<30){
        std::cout<<"Tmperature good" <<'\n';
    }
    else{
        std::cout<<"Bad temp";
    }

    if(sunny!=false){
        std::cout<<"It is sunny";
    }
    else{
        std::cout<<"Cloudy i think";
    }
}