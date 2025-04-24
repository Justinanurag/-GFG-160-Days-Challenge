
// Day 11: Maximum product Subarray
// date: 22/04/2025
// Brute force approach 
// Time Complexity: O(n^2)
#include<iostream>
#include<vector>
using namespace std;
int maxProductSubarray(vector<int> &arr){
    int n=arr.size();
    int result=0;
    for(int i=0;i<n;i++){
        int mul=1;
        for(int j=i;j<n;j++){
            mul=mul*arr[j];
            result=max(result,mul);
        }
    }
    return result;
}
int main(){
    vector<int> arr = {-2, 6, -3, -10, 0, 2};
    int result = maxProductSubarray(arr);
    cout << "Maximum product subarray: " << result << endl;
    return 0;
}