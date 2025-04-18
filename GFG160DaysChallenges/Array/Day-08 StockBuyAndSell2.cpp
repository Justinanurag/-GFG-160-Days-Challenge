//Date :18/04/2025
//Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
//GFG: https://www.geeksforgeeks.org/stock-buy-and-sell-problem-ii/


//Brute Force Approach
// Time Complexity: O(n^2)
/*#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices){
    int n=prices.size();
    int res=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,prices[j]-prices[i]);
        }
    }
    return res;
}
int main(){
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    int result = maxProfit(prices);
    cout << "Maximum profit: " << result << endl;
    return 0;
}*/


#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices){
    int n=prices.size();
   int res=0;
   int minSoFar=prices[0];
   for(int i=1;i<n;i++){
    minSoFar=min(minSoFar,prices[i]);
    res=max(res,prices[i]-minSoFar);
   }
   return res;
}
int main(){
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    int result = maxProfit(prices);
    cout << "Maximum profit: " << result << endl;
    return 0;
}