// Brute force approach
/*#include<iostream>
#include<vector>
using namespace std;
int inversionCount(vector<int> &arr){
int invCount=0;
int n=arr.size();
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            invCount++;
        }
    }
}
return invCount;
}
int main(){
    vector<int> arr={4, 3, 2, 1};
    cout<<inversionCount(arr)<<endl;

    return 0;
}*/
// Optimal Approach :- Using Merge Sort
// Merge sort function
#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;    // temporary array
    int left = low;      // staring index of left half
    int right = mid + 1; // starting index of right half
    int cnt = 0;         // to count the pair
    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }
    // if elements on the left half are still left //

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }

    return cnt; // Modification 3
}
int mergeSort(vector<int> arr, int low, int high)
{
    int count = 0;
    if (low >= high)
        return count;
    int mid = (low + high) / 2;
    count += mergeSort(arr, mid, high);     // left half
    count += mergeSort(arr, mid + 1, high); // High half
    count += merge(arr, low, mid, high);    // merging sorted half
    return count;
}
int inversionCount(vector<int> &a)
{
    // Count the number of pairs:
    int n = a.size();
    return mergeSort(a, 0, n - 1);
}
int main()
{
    vector<int> arr = {4, 3, 2, 1};
    cout << inversionCount(arr) << endl;

    return 0;
}