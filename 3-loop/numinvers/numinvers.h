
int stepen(int n, int st){
    int res = 1;
    for(int i = 1; i <= st; i++) res *= n;
    return res;
}
int num_invers(int num){
    int n = num, i = 1, res = 0, j = -1;
    if(num <= 0) return 0;
    while(n > 0){
        i++;
        n /= 10;
    }
    n = num;
    
    int a[i];
    for(i = 0; i < sizeof(a)/sizeof(int); i++){
        a[i] = n % 10;
        n /= 10;
    }
    for(i = sizeof(a)/sizeof(int) - 1; i >= 0; i--){
        res += stepen(10, j) * a[i];
        j++;
    }
    return res;
}