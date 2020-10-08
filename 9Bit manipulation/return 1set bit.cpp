int returnFirstSetBit(int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
  //    * Taking input and printing output is handled automatically.
  //    */
  // int x=1;
  // while(n){
  //   if(n%2==1)return x;
  //   n=n/2;
  //   x=x<<1;
  // }
    return n&(-1*n);
}

