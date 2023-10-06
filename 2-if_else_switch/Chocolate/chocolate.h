int chocolate(int n, int m, int k){
    if (n > 0 && m > 0){
       if(n * m == k) return 1;
    else if ((n*m-k*m)%m==0 ||(n*m-k*n)%n==0){
        if (((n*m % 2 == 0) && (k % 2 == 0)) || ((n*m % 2 == 1) && (k % 2 == 1))) return 1;
        else return 0;  
        }
    else if (n == 0 || m == 0) return 0;
    return 0; 
    }
    return 0; 
}