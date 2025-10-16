#include <iostream>
#include <cmath>

//CANT GO ABOVE 10^6 IN MAIN BUT CAN GO TILL 10^7 GLOBALLY

int main(){
    //size
    int size;
    std::cout<<"enter size: ";
    std::cin>>size;

    //array
    int arr[size];
    int n;
    std::cout<<"Enter array numbers: ";
    for (int i=0;i<size;i++){
        std::cin>>n;
        arr[i]=n;
    }

    //number;
    int input;
    std::cout<<"Enter number to check:" ;
    std::cin>>input;



    //hash
    int hash[size+1]={0};
    for (int i=0;i<size;i++){
        hash[arr[i]]++;
    }


    std::cout<<hash[input];

}