#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
    vector<int> findMajorityElements(vector<int>& nums){
        vector<int> result;
        unordered_map<int,int> count;
        for(int num:nums){
            count[num]++;
        }
        int n=nums.size();
        for(auto it:count){
            if(it.second>n/3){
                result.push_back(it.first);
            }
        }
        if(result.size()==0 && result[0]>result[1])
        swap(result[0],result[1]);
        return result;
    }
int main(){
    vector<int> nums = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int>result = findMajorityElements(nums);
    for (int ele :result)
        cout << ele << " ";
    return 0;
}