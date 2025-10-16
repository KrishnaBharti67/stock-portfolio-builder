#include <iostream>
#include <cmath>

int choice; 
int amnt;
int balance=10000;
/*FUNCTIONS*/
void withdraw(int amnt){
    std::cout<<"Withdrew "<<amnt<<" successfully!\n";
    balance=balance-amnt;
}

void deposit(int amnt){
    if (amnt>0){
        std::cout<<"Deposited "<<amnt<<" successfully!\n";
        balance=balance+amnt;
    }
    else{
        std::cout<<"Enter valid amount!\n";
    }
}
void balanced(int choice){


    if (choice==3){
        std::cout<<"Balance is "<<balance;

    }
}
/*FUNCTION END*/

void option(int choice){


    if (choice==1){
        std::cout<<"Enter amount: ";
        std::cin>>amnt;
        withdraw(amnt);
    }
    if (choice==2){
        std::cout<<"Enter amount: ";
        std::cin>>amnt;
        deposit(amnt);
    }

    if (choice==3){
        std::cout<<"Your balance is: "<<balance<<'/n';
    }

}
int main(){
    while (1==1){
        std::cout<<"1. Withdraw"<<'\n';
        std::cout<<"2. Deposit"<<'\n';
        std::cout<<"3. Check balance"<<'\n';
        std::cout<<"4.Exit"<<'\n';
        std::cout<<"Choose choice: ";
        std::cin>>choice;

        if (choice==4){
            break;
        }    
        option(choice);
    }
}
