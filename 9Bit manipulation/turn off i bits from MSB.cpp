int clearAllBits(int n, int i){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

//     int temp=n;
//     int ct=0;
//     while(temp){
//         temp=temp>>1;
//         ct++;
//     }

//     temp=1<<(ct-1);
//    while(i!=ct){
//        int temp1=1<<i;
//        temp=temp|temp1;
//        i++;
//    }
//     return (~temp)&n;
    return n&((1<<i)-1);
    
}


