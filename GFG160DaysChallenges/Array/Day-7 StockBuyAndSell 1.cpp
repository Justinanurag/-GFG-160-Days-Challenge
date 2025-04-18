//Date:17/04/2025
// Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
// GFG: https://www.geeksforgeeks.org/stock-buy-and-sell-problem-ii/

#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices){
    int n=prices.size();
    int res=0;
    for(int i=1;i<n;i++){
        if(prices[i]>prices[i-1]){
            res+=prices[i]-prices[i-1];
        }
    }
    return res;
}
int main(){
    vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
    int result = maxProfit(prices);
    cout << "Maximum profit: " << result << endl;

    return 0;
}