int turnOffFirstSetBit(int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
//     int temp=n;
//     int ct=0;
//     while(temp){
//         if(temp%2)break;
//         temp=temp>>1;
//         ct++;
//     }

//     temp=1<<(ct);
   
//     return (~temp)&n;
    
    return n&(~(n&(-1*n)));
    
}

