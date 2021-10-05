#include <bits/stdc++.h>


using namespace std;

//Given a string S, check if the letters can be rearranged so that two characters that are adjacent to each other are not the same.

//If possible, output any possible result.  If not possible, return the empty string.


string reorganizeString(string s) {
    string res = "";
    int n = s.length();
    map<char, int> freq;
    for (int i = 0; i < n; i++) freq[s[i]]++;
    priority_queue<pair<int, char>> pq;
    for(auto i:freq)pq.push({i.second,i.first});
    pair<int, char> prev = {-1, '#'};
    while(!pq.empty()){
        pair<int,char> p = pq.top();
        pq.pop();
        res += p.second;
        p.first--;
        if(prev.first>0)pq.push(prev);
        
        prev = p;
    }
    if(res.length()==n)return res;
    return "";
}



int main(){
    string s;
    cin >> s;
    cout << reorganizeString(s);

    return 0;
}