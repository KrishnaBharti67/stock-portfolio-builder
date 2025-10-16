//COMPLETEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEDDDDDDDDDDD


#include <bits/stdc++.h>

std::vector <std::pair<std::string,int>> sortedVec;
void MERGE(std::vector<std::pair<std::string,int>> &vec,int low,int mid,int high);
//SORTING
void mergesort(std::vector<std::pair<std::string,int>> &vec,int low,int high){
    if (low>=high) return;
    int mid=(low+high)/2;
    mergesort(vec,low,mid);
    mergesort(vec,mid+1,high);
    MERGE(vec,low,mid,high);

}
void MERGE(std::vector<std::pair<std::string,int>> &vec,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int size=vec.size();

    std::vector<std::pair<std::string, int>> temp;

    while(left<=mid && right<=high){
        if (vec[left].second<vec[right].second){
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

    for (int i=0;i<temp.size();i++){
        vec[low+i]=temp[i];
    }

}

bool loop=true;
//ACTUAL FUNCTIONS
void add(){
    std::string name;
    int marks;
    
        
        std::cout<<"\n📌 Enter name of student: ";
        std::cin>>name;

        
        std::cout<<"🎯 Enter marks of student: ";
        if (!(std::cin>>marks)){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
            std::cout<<"Enter marks in INT"<<"\n";
            return;
    }

    sortedVec.push_back({name,marks});
}

void view(){
    std::cout << "\n========== 📋 Student List ==========\n";
    for (auto &value:sortedVec){
        std::cout<<value.first<<"-"<<value.second<<"\n";
    }
    std::cout << "======================================\n";
}

void sort(std::vector<std::pair<std::string,int>> &vec){
    int choice;
    std::cout<<"📊 Sort Options:\n1️⃣ Ascending\n2️⃣ Descending\nChoose (1/2): ";
    std::cin>>choice;
    if (choice==1){
        mergesort(vec,0,vec.size()-1);
        std::cout<<"✅ Sorted in ascending order.\n";

    }
    else if(choice==2){
        std::cout<<"Ttesting";
    }
    else{
        std::cout<<"⚠ Please only choose 1 or 2.";
        return;
    }
}

void search(std::vector<std::pair<std::string,int>> &vec){
    std::string name;
    std::cout<<"🔍 Enter name of student to search: ";
    std::cin>>name;

    for (int i=0;i<vec.size();i++){
        if(vec[i].first==name){
            std::cout<<"✅ Found: "<<vec[i].first<<"-"<<vec[i].second<<'\n';
            return;
        }
    }    
    std::cout<<"❌ Student not found.\n";
    
}

void find(){
    int MAX=0;
    int MIN=0;
    for (int i=0;i<sortedVec.size();i++){
        if (sortedVec[i].second>sortedVec[MAX].second){
            MAX=i;
        }
    }
    std::cout<<"\n🏆 Highest: "<<sortedVec[MAX].first<<" - "<<sortedVec[MAX].second<<'\n';
    for (int i=0;i<sortedVec.size();i++){
        if (sortedVec[i].second<sortedVec[MIN].second){
            MIN=i;
        }
    }
    std::cout<<"📉 Lowest: "<<sortedVec[MIN].first<<" - "<<sortedVec[MIN].second<<'\n';
}
int main(){
    
    
    while (loop){
        int n;
        std::cout<<R"(========= 🎓 Student Management =========
1️⃣ Add student names and marks

2️⃣ View student list

3️⃣ Sort students by marks

4️⃣ Search student by name

5️⃣ Find highest and lowest scorer

6️⃣ Exit
=========================================
➡ Choose an option: )";
        std::cin>>n;
        if (n==1){
            add();
        }

        else if(n==2){
            view();
        }
        else if(n==3){
            sort(sortedVec);
        }
        else if(n==4){
            search(sortedVec);
        }
        else if(n==5){
            find();
        }
        else if(n==6){
            loop=false;
            break;
        }
        else{
            std::cout<<"Enter values from 1-5 ONLY";
        }


    }


}   