
long long calc_row(int n, long long k){
    long long l = 0;
    if(n >= 10000000) return 0;
    for(int i = 0; i <= n; i++){
        l += i * k;
    }
    return l;
}