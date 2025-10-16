#include <iostream>
#include <cmath>
//ch-'a'

int hash(std::string STRING,char c){
    int hasharr[STRING.size()+1]={0};

    for (int i=0;i<STRING.size();i++){
        hasharr[STRING[i]-'a']++;
    }
    return hasharr[c-'a'];
}

int main(){
    std::string s;
    std::cout<<"Enter a string:";
    std::cin>>s;

    char character;

    std::cout<<"Enter a character to search: ";
    std::cin>>character;


    int result=hash(s,character);

    std::cout<<result;
}