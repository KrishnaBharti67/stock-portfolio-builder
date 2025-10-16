#include <iostream>
#include <cmath>

int balance=10000;

int main(){
    int choice;
    int withdraw_amnt;
    int deposit_amnt;

    while (1==1){
        std::cout<<"1. Withdraw"<<'\n';
        std::cout<<"2. Deposit"<<'\n';
        std::cout<<"3. Check balance"<<'\n';
        std::cout<<"4.Exit"<<'\n';
        std::cout<<"Choose choice: ";
        std::cin>>choice;

        switch(choice){
            case 1:
                std::cout<<"Enter amount to withdraw: ";
                std::cin>>withdraw_amnt;
                
                std::cout<<withdraw_amnt<<" withdrawed"<<'\n';
                std::cout<<"Balance now:"<<int(balance-withdraw_amnt)<<'\n';
                balance=balance-withdraw_amnt;
                break;
        

            case 2:
            
                std::cout<<"Enter amount to deposit: ";
                std::cin>>deposit_amnt;
                
                std::cout<<deposit_amnt<<" deposited"<<'\n';
                std::cout<<"Balance now:"<<int(balance+deposit_amnt)<<'\n';
                balance=balance+deposit_amnt;
                break;

            case 3:
                std::cout<<"Account balance is :"<<balance<<'\n';
                break;

            case 4:
                return 0;
        
                
        }
    }
}