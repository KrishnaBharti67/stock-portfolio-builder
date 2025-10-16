#include <iostream>
#include <cmath>

int main(){
    int n;
    std::cout<<"enter number:";
    std::cin>>n;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            std::cout<<"*";
        }
        std::cout<<'\n';
    }
 
}
