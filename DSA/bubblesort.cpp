#include <iostream>
void bubblesort(int arr[],int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size-1-i;j++){
            int temp;
            if (arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for (int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,5,2,3,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr,size);
}