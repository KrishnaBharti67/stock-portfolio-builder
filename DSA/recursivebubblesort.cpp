#include <bits/stdc++.h>

void bubblesort(int arr[],int n){
    if(n==1) return;

    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    bubblesort(arr,n-1);
}


int main(){
    int arr[]={5,123,5,1243,5,123,1502,321};

    bubblesort(arr,sizeof(arr)/sizeof(arr[0]));

    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        std::cout<<arr[i]<<" ";
    }
}