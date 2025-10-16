#include <iostream>
#include <ctime>
int main(){
    /*int rows;
    int columns;
    char chare;

    std::cout<<"Enter number of rows :";
    std::cin>>rows;

    std::cout<<"Enter number of column: ";
    std::cin>>columns;

    std::cout<<"Enter character: ";
    std::cin>>chare;

    for (int i=1;i<=rows;i++){
        for (int j=1;j<=columns;j++){
            std::cout<<chare;

        }
        std::cout<<"\n";
    }*/
    int i=1;
    srand(time(NULL));
    while(i<=3){
        int numn=rand()%20;
        std::cout<<numn<<' ';
        i++;
    }
}