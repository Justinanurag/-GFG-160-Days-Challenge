//date:20/04/2025
//Day-10 Maximum Subarray Sum


//Appro0ch 01: Brute Force Approach
// Time Complexity: O(n^2)

/*#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int maxSubArraySum(vector<int> &arr){
    int n=arr.size();
    int res=arr[0];
    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            currSum=currSum+arr[j];
             res=max(res,currSum);
        }
    }
    return res;
}
int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    int result = maxSubArraySum(arr);
    cout << "Maximum subarray sum: " << result << endl;
    return 0;
}*/

//Approach 02: Using Kadane's Algorithm
// Time Complexity: O(n)

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int maxSubArraySum(vector<int> &arr){
    int n=arr.size();
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}
int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    int result = maxSubArraySum(arr);
    cout << "Maximum subarray sum: " << result << endl;
    return 0;
}