int countPalindromeSubstrings(char s[]) {
	// Write your code here
    int len=0,count=0;
    while(s[len]){
        len++;
    }
    
    for(int i=0;i<len;i++){
        int left=i,right=i;
        while(left>=0 && right<len && s[left]==s[right]){
            left--; right++; count++;
        }
     //   count+=(right-i);
        
        if(i<len-1 && s[i]==s[i+1]){
            left=i;right=i+1;
           while(left>=0 && right<len && s[left]==s[right]){
               left--; right++; count++;
           }
        //   count+=(i-left);  
        }
    }
	return count;
}
