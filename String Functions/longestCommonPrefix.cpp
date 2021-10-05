#include <bits/stdc++.h>

using namespace std;

// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".




string longestCommonPrefix(vector<string>& strs) {
    string s = "" ;
    int index = 0,j=0;
    if(strs.size()==0){
        return s;
    }
    if(strs.size()==1){
        return strs[0];
    }
    while(j<strs[0].length()){
        char x = strs[0][j];
        for(int i = 1; i < strs.size(); i++)
        {
            if(index>=strs[i].length() || x!=strs[i][index]){
                return s;
            }
            
        }
        j++;
        s+=strs[0][index];
        index++;
        
    }

    return s;
        
}

int main(){
    vector<string> strs{"flower","flow","flight"};
    cout<<longestCommonPrefix(strs);

    return 0;

}