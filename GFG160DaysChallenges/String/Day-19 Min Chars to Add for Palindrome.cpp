//Approach 01 : brute force approach
/*
#include <iostream>
#include<string>
using namespace std;
bool isPalindrome(string &s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int minChar(string &s){
    int count=0;
    int i=s.size()-1;
    while(i>=0 && !isPalindrome(s,0,i)){
        i--;
        count++;
    }
    return count;
}
int main() {
    string s = "AACECAAAA";
  
    cout << minChar(s);
    return 0;
}*/
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int minChar(string &s){
    //reverse 
  reverse(s.begin(),s.end());
//concatnite 
}
int main() {
    string s = "AACECAAAA";
  
    cout << minChar(s);
    return 0;
}