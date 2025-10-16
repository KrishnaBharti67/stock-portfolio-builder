#include <bits/stdc++.h>

/*BUBBLE SORT

void func(int arr[],int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
*/

/*SELECTION SORT

void selection(int arr[],int size){
    for (int i=0;i<size;i++){
        int min=i;
        for (int j=i;j<size-i;j++){
            if (arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
    */

/*INSERTION SORT
void insertion(int arr[],int size){
    for (int i=0;i<size;i++){
        int j=i;

        while (j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
*/

/*MERGE SORT
void sort(int arr[],int low,int mid,int high){
    int left=low;
    int right=mid+1;
    std::vector <int> temp;
    while (left<mid && right<high){
        if (arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

}
void merge(int arr[],int low,int high){
    if (low>=high) return;
    int mid=(low+high)/2;
    merge(arr,low,mid);
    merge(arr,mid+1,high);

    sort(arr,low,mid,high);

}*/

//QUICKSORT
int func(int arr[],int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];

    while (i<j){
        while (arr[i]<=pivot && i<=high-1) i++;
        while (arr[j]>=pivot && j>=low+1) j--;

        if (i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void quicksort(int arr[],int low,int high){
    if (low < high){
        int pIndex=func(arr,low,high);
        quicksort(arr,low,pIndex-1);
        quicksort(arr,pIndex+1,high);
    }
}

int main(){
    int arr[]={6,5,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    quicksort(arr,0,size-1);

    for (int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}