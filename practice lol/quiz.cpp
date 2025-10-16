#include <iostream>
#include <algorithm>

int main(){
    std::string questions[][4]={{"QUESTION1"},{"QUESTION2"},{"qUESTION3"},{"qUESTION4"}};
    
    std::string options[][4]={{"A. TESTING","B. HAHA","C. TS WORKS","D. WAO"},{"A. TESTING","B. HAHA","C. TS WORKS","D. WAO"},{"A. TESTING","B. HAHA","C. TS WORKS","D. WAO"},{"A. TESTING","B. HAHA","C. TS WORKS","D. WAO"}};
    
    char Answerkey[]={'A','A','A','A'};
    char guess;
    
    int size=sizeof(questions)/sizeof(questions[0]);
    
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            std::cout<<questions[i][j]<<'\n';
            std::cout<<options[i][j]<<'\n';
        }
        std::cout<<"Enter answer:";
        std::cin>>guess;
        if (guess==Answerkey[i]){
            std::cout<<"COrrect\n";

        }
        else{
            std::cout<<"WRONG\n";
        }
    }

}