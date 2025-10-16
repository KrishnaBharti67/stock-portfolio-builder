#include <iostream>
#include <cmath>

char userchoice;
char compchoice;

char compchoicefun();

int main(){
    std::cout<<"Enter your choice(R/P/S):";
    std::cin>>userchoice;

    
    char compchoice=compchoicefun();

    if (userchoice==compchoice){
        std::cout<<"Draw\n";
    }

    if (userchoice=='P' && compchoice=='R'){
        std::cout<<"You won!\nComputer chose "<<compchoice;
    }

    if (userchoice=='P' && compchoice=='S'){
        std::cout<<"You lose\nComputer chose "<<compchoice;

    }
    if (userchoice=='R' && compchoice=='P'){
        std::cout<<"You lose!\nComputer chose "<<compchoice;
    }

    if (userchoice=='R' && compchoice=='S'){
        std::cout<<"You win\nComputer chose "<<compchoice;

    }if (userchoice=='S' && compchoice=='R'){
        std::cout<<"You lose!\nComputer chose "<<compchoice;
    }

    if (userchoice=='S' && compchoice=='P'){
        std::cout<<"You win!\nComputer chose "<<compchoice;

    }
}


char compchoicefun(){
    srand(time(NULL));
    int num=rand()%3+1;

    switch (num){
        case 1:
            return 'P';
        case 2:
            return 'R';
        case 3:
            return 'S';
    }
}