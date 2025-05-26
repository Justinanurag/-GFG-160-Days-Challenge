/*
//Approach 01 Using sorting 
#include<iostream> 
#include<string>
#include<algorithm>
using namespace std;
bool areAnagram(string &s1,string &s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        return true;
    } 
    else{
        false;
    } 
}
int main() {
    string s1 = "geeks";
    string s2 = "kseeg";
	cout << (areAnagram(s1, s2) ? "true" : "false") << endl;

    return 0;
}
    */
//    Approach 02 Using Hash Map or Dictionary
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool areAnagram(string &s1,string &s2){
     //Using map
        unordered_map<char,int> charCount;
        //Count the freq of each charin string s1
        for(char ch:s1){
            charCount[ch]+=1;
        }
        //Count the freq of each charin string s1
        for(char ch:s2){
            charCount[ch]-=1;
        }
        //Check if all frequencies are zero 
        for(auto& pair:charCount){
            if(pair.second!=0){
                return false;
            }
        }
        return true;
        
    }
int main(){
        string s1 = "geeks";
    string s2 = "kseeg";
	cout << (areAnagram(s1, s2) ? "true" : "false") << endl;
    return 0;
}