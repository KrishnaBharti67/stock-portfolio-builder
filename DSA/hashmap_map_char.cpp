#include <bits/stdc++.h>

int hash(char arr[],char value,int size){

    std::map <char,int> MAP;
    for (int i=0;i<size;i++){
        MAP[arr[i]]++;
    }

    for (auto it:MAP){
        std::cout<<it.first<<"-->"<<it.second<<std::endl;
    }

    return MAP[value];
}

int main(){
    int sizea;
    std::cout<<"size of array: ";
    std::cin>>sizea;


    char arr[sizea];
    for (int i=0;i<sizea;i++){
        char num;
        std::cout<<"Enter char: ";
        std::cin>>num;
        arr[i]=num;

    }

    int size=sizeof(arr)/sizeof(arr[0]);

    char val;
    std::cout<<"Enter value :";
    std::cin>>val;

    int result=hash(arr,val,size);
    std::cout<<result;
}