#include <bits/stdc++.h>

/*int func(std::vector<int> &arr){
    int max=arr[0];
    int max2=arr[0];
    for (int i=0;i<arr.size();i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }

    for (int j=0;j<arr.size();j++){
        if (arr[j]>max2 && arr[j]!=max){
            max2=arr[j];
        }
    }
    return max2;
}*/

int func(std::vector<int> &arr){
    int larg1=arr[0];
    int larg2=-1;

    for (int i=0;i<arr.size();i++){
        if (arr[i]>larg1 && larg2<larg1){
            int temp=larg1;
            larg1=arr[i];
            larg2=temp;
        }
    }
    return larg2;
}

int main(){

}