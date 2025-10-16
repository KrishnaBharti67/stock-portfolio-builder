#include <iostream>
#include <vector>
void merge(std::vector <int>&vec,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int size=vec.size();
    std::vector <int>temp;
    while ((left<=mid) && (right<=high)){
        if (vec[left]<vec[right]){
            temp.push_back(vec[left]);
            left++;
        }
        else{
            temp.push_back(vec[right]);
            right++;
        }
    }

    while (left<=mid){
        temp.push_back(vec[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(vec[right]);
        right++;
    }


    for (int i = 0; i < temp.size(); ++i) {
        vec[low + i] = temp[i];
    }


}

void mergesort(std::vector <int>&vec,int low,int high){
    if (low==high) return;
    int mid=(low+high)/2;
    mergesort(vec,low,mid);
    mergesort(vec,mid+1,high);
    merge(vec,low,mid,high);
}

int main(){
    std::vector <int>arr={2,8,6,3,1};
    int size=arr.size();
    mergesort(arr,0,size-1);

    for (int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
}