#include <iostream>
#include <cmath>

int main(){
    double temp_C;
    double temp_F;
    double ans;

    char option;

    std::cout<<"Choose what type to convert temp in(C/F): ";
    std::cin>>option;


    if(option=='C'){
        std::cout<<"Enter temp: ";
        std::cin>>temp_F;

        ans=(temp_F-32)*(5/9);
        std::cout<<"Temp in C is " <<ans;

    }

    if(option=='F'){
        std::cout<<"Enter temp: ";
        std::cin>>temp_C;

        ans=(temp_C*1.8)+32;

        std::cout<<"Temp in F is " <<ans;
    }
}