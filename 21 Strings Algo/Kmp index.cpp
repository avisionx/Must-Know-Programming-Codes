#include<bits/stdc++.h>
using namespace std;
// S and T - input strings
// You need to check if string T is present in S or not

int* Getlps(string pat){
    
    int len=pat.length();
    int* lps=new int[len];
    
    int i=1,j=0;
    lps[0]=0;
    
    while(i<len){
        if(pat[i]==pat[j]){
            
            lps[i]=j+1;
            i++;
            j++;
            
        }else{
            
            if(j==0){
                lps[i]=0;
                i++;
            }else{
                j=lps[j-1];
            }
        }
    }
    
    return lps;
}

int Kmpsearch(string s,string pattern){
    
    int textlen=s.length();
    int patlen=pattern.length();
    
    int i=0,j=0;
    int* lps=Getlps(pattern);
    
    while(i<textlen && j<patlen){
        
        if(s[i]==pattern[j]){
            i++;j++;
            if(j==patlen) return i-patlen;
        }
        else {
            if(j!=0){         
                j=lps[j-1];
            }else{
                i++;
            }
        }
    }
    return -1;    
}

int findString(char S[], char T[]) {
    // Write your code here
    int i=0;
    string s="";
    while(S[i]){
        s+=S[i];
        i++;
    }
    i=0;
    string t="";
    while(T[i]){
        t+=T[i];
        i++;
    }

    return Kmpsearch(s,t);

}
