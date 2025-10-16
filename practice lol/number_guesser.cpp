#include <iostream>
#include <ctime>
#include <string>

void function(){
    std::string name;
    std::cout<<"Enter name: ";
    std::cin.ignore();
    std::getline(std::cin,name);
    
    std::cout<<"name is "<<name;
}

int main(){

    int num;
    int guess;
    int tries=1;

    srand(time(NULL));
    num=rand()%10 +1;
    std::cout<<num;
    std::cout<<"Enter guess(1-10): ";
    std::cin>>guess;

    while(num!=guess){
        std::cout<<"Guess again! (1-10): ";
        std::cin>>guess;
        tries++;
    }
    std::cout<<"You guessed "<<num<<" right in "<<tries<<" tries\n";

    
    function();

}