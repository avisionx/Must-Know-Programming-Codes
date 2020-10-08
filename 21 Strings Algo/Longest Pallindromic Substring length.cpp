//Naive approach i O(n^3)


//O(n^2)
int longestPalindromeSubstrings(char s[]) {
	// Write your code here
    int len=0,maxlen=0;
    while(s[len]){
        len++;
    }
    
    for(int i=0;i<len;i++){
        int left=i,right=i;
        while(left>=0 && right<len && s[left]==s[right]){
            left--; right++;
        }
        maxlen=max(maxlen,right-left-1);
        
        if(i<len-1 && s[i]==s[i+1]){
            left=i;right=i+1;
           while(left>=0 && right<len && s[left]==s[right]){
               left--; right++; 
           }
            maxlen=max(maxlen,right-left-1);  
         }
    }
	return maxlen;
}
