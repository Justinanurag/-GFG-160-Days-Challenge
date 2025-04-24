// Day 12
// Maximum Circular Subarray Sum
// date:23/04/2025
#include<iostream>
#include<vector>
using namespace std;
int circularSubarraySum(vector<int> &arr){
    int n=arr.size();
    int res=arr[0];
    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=0;j<n;j++){
            //for circular behavior
            int idx=(i+j)%n;
            currSum+=arr[idx];
            res=max(res,currSum);
        }
    }
    /*
    //Can also be done using prefix sum and max subarray sum
    for (int i = 0; i < n; i++) {
        int currSum = arr[i]; // directly include arr[i] at start
        for (int j = 1; j < n; j++) {
            int idx = (i + j) % n;
            currSum += arr[idx];
            res = max(res, currSum);
        }
    }*/
    
    return res;
}
int main(){
    vector<int> arr = {8, -8, 9, -9, 10, -11, 12};
    int result = circularSubarraySum(arr);
    cout << "Maximum circular subarray sum: " << result << endl;

    return 0;
}
