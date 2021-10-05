#include <bits/stdc++.h>

using namespace std;

//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//An input string is valid if:
//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.

bool isValid(string s){
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if(st.empty()){
            st.push(s[i]);
        }else if(s[i]==')' and st.top()=='('){
            st.pop();
        }else if(s[i]==']' and st.top()=='['){
            st.pop();
        }else if(s[i]=='}' and st.top()=='{'){
            st.pop();
        }else{
            st.push(s[i]);
        }    
    }
    if(st.empty()){
        return true;
    }
    return false;
}


int main(){
    string s;
    cin>>s;
    cout<<isValid(s);

    return 0;
}