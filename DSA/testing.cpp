#include <bits/stdc++.h>

int max(int arr[],int size){
    int XOR=0;
    for (int i=0;i<size;i++){
        XOR=XOR^arr[i];
    }
    return XOR;
}

int main(){

}
