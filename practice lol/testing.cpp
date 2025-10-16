#include <bits/stdc++.h>
void merge(std::vector <int> &vec,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int size=vec.size();

    std::vector<int>temp;

    while(left<=mid && right<=high){
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

}

void mergesort(std::vector <int> &vec,int low,int high){
    if (low==high) return;
    int mid=(low+high)/2;
    mergesort(vec,low,mid-1);
    mergesort(vec,mid+1,high);
    merge(vec,low,mid,high);
}

int main(){

}