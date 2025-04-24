// Day 13
// First Missing Number
// date:24/04/2025 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingNumber(vector<int> &arr){
    int n=arr.size();
    int res=1;
    for(int i=0;i<n;i++){
        if(arr[i]==res) res++;
        else if(arr[i]>res) break;
    }
    return res;
}

int main(){
    vector<int> arr = {1, 2, 3, 5};
    int result = missingNumber(arr);
    cout << "First missing number: " << result << endl;
    return 0;
}