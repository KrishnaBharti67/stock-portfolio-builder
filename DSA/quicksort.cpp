#include <bits/stdc++.h>
int PARTITION(std::vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){

        while(arr[i]<=pivot && i<=high-1){
            i++;
        }

        while(arr[j]>=pivot && j>=low+1){
            j++;
        }

        if(i<j){
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[low], arr[j]); 
    return j;
}

void quicksort(std::vector<int> &arr,int low,int high){
    if(low<high){
        int pindex=PARTITION(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
    }
}

int main(){

}