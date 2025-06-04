#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int hIndex(vector<int> &citations) {
    //First sort in decending order
    sort(citations.begin(),citations.end(),greater<int>());
    int n=citations.size();
        int idx=0;
     // Keep incrementing idx till citations[idx] > idx
     while(idx < n && citations[idx]>idx){
        idx++;
     }
     return idx;

}
int main(){
     vector<int> citations = {6, 0, 3, 5, 3};
    cout << hIndex(citations) << "\n";

    return 0;
}