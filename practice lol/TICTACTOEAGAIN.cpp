#include <iostream>
#include <ctime>

void board(char *spaces);
void playermove(char *spaces);
void computermove(char *spaces);
bool winner(char *spaces);


int main(){
    srand(time(NULL));
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    board(spaces);
    playermove(spaces);
    
    bool running=true;

    while (running==true){
        playermove(spaces);
        if(winner(spaces)==true){
            running=false;
            break;
        }
        computermove(spaces);

    }
}

void board(char *spaces){
    std::cout<<"  "<<" | "<<" "<<" | "<<'\n';
    std::cout<<" "<<spaces[0]<<" | "<<spaces[1]<<" | "<<spaces[2]<<"  "<<'\n';
    std::cout<<"__"<<"_|_"<<"_"<<"_|__"<<'\n';
    std::cout<<"  "<<" | "<<" "<<" | "<<'\n';
    std::cout<<" "<<spaces[3]<<" | "<<spaces[4]<<" | "<<spaces[5]<<"  "<<'\n';
    std::cout<<"__"<<"_|_"<<"_"<<"_|__"<<'\n';
    std::cout<<"  "<<" | "<<" "<<" | "<<'\n';
    std::cout<<" "<<spaces[6]<<" | "<<spaces[7]<<" | "<<spaces[8]<<"  "<<'\n'<<'\n';
}
void playermove(char *spaces){
    int choice;
    do{
        std::cout<<"Enter number(1-9) to place:";
        std::cin>>choice;
        choice--;

        if (spaces[choice]==' '){
            spaces[choice]='X';
            board(spaces);

            break;

        }
    }while(choice>=0 && choice<9);
}
void computermove(char *spaces){
    int choice=rand()%9;
    while(spaces[choice]!=' '){
        choice=rand()%9;
    }

    spaces[choice]='O';
    std::cout<<"New board"<<'\n';
    board(spaces);
}
bool winner(char *spaces){
    if (spaces[0]=='X' && spaces[1]=='X' && spaces[2]=='X'){
        std::cout<<"YOU WIN";
        return true;
    }
    else{
        return false;
    }
}