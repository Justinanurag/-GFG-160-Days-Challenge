/*#include<iostream>
#include<vector>
using namespace std;
//Approach 01 using temp
void reverseArray(vector<int>& arr){
    int n=arr.size();
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[i]=arr[n-i-1];
    }
    //temp wale elements ko array mee dalenge
    for(int i=0;i<n;i++){
        arr[i]=temp[i];//temp->arr
    }
}
int main(){
    vector<int> arr={1,2,3,4,5};
    reverseArray(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}*/

//Approach 2: two pointers
/*#include<iostream>
#include<vector>
using namespace std;
//Approach 01 using two pointer
void reverseArray(vector<int>& arr){
    int left=0,right=arr.size()-1;
    while(left,right){
        //swap elements
        swap(arr[left],arr[right]);
        left++;//left pointer
        right--;//right pointer
    }
 
}
int main(){
    vector<int> arr={1,2,3,4,5};
    reverseArray(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}*/


//Approach 3 swaping each element with the last element
/*#include<iostream>
#include<vector>
using namespace std;
//Approach 01 using two pointer
void reverseArray(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n/2;i++){
        //swap elements
        swap(arr[i],arr[n-i-1]);
    }
 
}
int main(){
    vector<int> arr={1,2,3,4,5};
    reverseArray(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}*/


//Approach 4 swaping each element with the last element
#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> &arr,int l,int r){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    //recursive call
    solve(arr,l+1,r-1);
}
void reverseArray(vector<int>& arr){
int n=arr.size();
solve(arr,0,n-1);
 
}
int main(){
    vector<int> arr={1,2,3,4,5};
    reverseArray(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}