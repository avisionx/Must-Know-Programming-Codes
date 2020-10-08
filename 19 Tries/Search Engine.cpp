#include<bits/stdc++.h>
using namespace std;
#define M 1000000007

#include <bits/stdc++.h>
using namespace std;
map<char,int> mp;

class trieNode{
    public:
    trieNode* arr[26];
    int val;
        trieNode(){
            for(int i=0;i<26;i++){
                arr[i]=NULL;
            }        
            val=0;
        }
};

void insert(trieNode* head,string word,int value){
    trieNode* cur=head;
    for(int i=0;word[i];i++){
     
        int index=mp[word[i]];//word[i]-'a'
        if(!cur->arr[index]){
            cur->arr[index]=new trieNode();
             cur->arr[index]->val=value;
        }
        cur= cur->arr[index];
        cur->val=max(cur->val,value);
    }
}

void insert_2(trieNode* head,string word,int value){
    trieNode* child;
    if(!word[0])return ;
    int index =mp[word[0]];
    if(head->arr[index]){
        child=head->arr[index];
    }
    else{
        child=new trieNode();
        head->arr[index]=child;
    }
    child->val=max(child->val,value);
    insert_2(child,word.substr(1),value);
}

int solve(trieNode* head,string word){
    trieNode* cur=head;
    int ansvalue=-1;
    for(int i=0;word[i];i++){
        
        int index=mp[word[i]];
        if(!cur->arr[index]){
            return -1;
        }
        else{ 
            cur=cur->arr[index];
            ansvalue=cur->val;
        }
    }
    return ansvalue;
}

int32_t main()
{   
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output1.txt", "w", stdout);
    // #endif
    for(int i=0;i<26;i++){
        mp['a'+i]=i;
    }
        trieNode* head=new trieNode();
        int n,q;
        cin>>n>>q;
        for(int i=0;i<n;i++){
            string s;
            int x;
            cin>>s>>x;
            insert_2(head,s,x);
        }
        for(int i=0;i<q;i++){
            string s;
            cin>>s;
            cout<<solve(head,s)<<endl;
        }
    
    return 0;
}

