//Approach 01:- Using Sort STL 
/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void sort012(vector<int> &arr) {
    sort(arr.begin(),arr.end());
}

int main() {
    vector<int> arr = { 0, 1, 2, 0, 1, 2 };
    sort012(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}*/
/*
//Approach 02:- Using Count 0s,1s,2s
 #include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void sort012(vector<int> &arr) {
    int n=arr.size();
    int c0=0,c1=1,c2=2;//count initailize of 0,1,2
//count 0,1,2
for(int i=0;i<n;i++){
    if(arr[i]==0){
        c0++;
    }
    else if(arr[i]==1){
        c1++;
    }
    else{
        c2++;
    }
}
int idx=0;
//place All the 0s
for(int i=0;i<c0;i++){
    arr[idx++]=0;
}
//place All the 1s
for(int i=0;i<c1;i++){
    arr[idx++]=1;
}
//place All the 2s
for(int i=0;i<c2;i++){
    arr[idx++]=2;
}

}

int main() {
    vector<int> arr = { 0, 1, 2, 0, 1, 2 };
    sort012(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}*/
//Approach 02:- Using Count 0s,1s,2s
 #include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void sort012(vector<int> &arr) {
    int n=arr.size();
int low=0;
int high=n-1;
int mid=0;

while(mid<=high){
    if(arr[mid]==0){
        swap(arr[low++],arr[mid++]);
    }
    else if(arr[mid]==1){
        mid++;
    }
    else{
        swap(arr[mid],arr[high--]);
    }
}

}

int main() {
    vector<int> arr = { 0, 1, 2, 0, 1, 2 };
    sort012(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}