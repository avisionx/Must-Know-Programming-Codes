#include<bits/stdc++.h>
using namespace std;
#define M 1000000007


class trieNode{
public:
   trieNode* left;
   trieNode* right;
};

void insert(int n,trieNode* head){
    trieNode* cur =head;
    for(int i=31;i>=0;i--){
      int b=(n>>i)&1;
      if(b){
        if(!cur->right){
          cur->right = new trieNode();
        }
        cur=cur->right;
      }
      else{
       if(!cur->left){
          cur->left = new trieNode();
        }
        cur=cur->left;
      }
    }
}

int find_max_xor(trieNode* head,int *arr , int n){

    int max_xor=INT_MIN;

    for(int i=0;i<n;i++){
      int value=arr[i];
      trieNode* cur=head;
      int cur_xor=0;
      for(int j=31;j>=0;j--){
        int bit=(value>>j)&1;
        if(bit){
          if(cur->left){
              cur_xor+=(1<<j);
              cur=cur->left;
          }
          else cur=cur->right;
        }
        else {
            if(cur->right){
              cur_xor+=(1<<j);
              cur=cur->right;
            }
            else cur=cur->left;
        
        }
      }
      cout<<value<<" "<< (value^cur_xor) <<" "<<cur_xor<<endl; 
      if(cur_xor>max_xor){
        max_xor=cur_xor;
      }
    }
  return max_xor;
}

int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif
       int n;
    cin>>n;
    int *arr=new int[n];
    trieNode* head=new trieNode();
    for(int i=0;i<n;i++){
      cin>>arr[i];
      insert(arr[i],head);
    }
    cout<<find_max_xor(head,arr,n);
    return 0;
   
}