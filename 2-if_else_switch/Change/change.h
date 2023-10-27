long long change(int a, int b, int c, int d){
    long long u;
    u = ((long long)c * 100 + (long long)d) - ((long long)a * 100 + (long long)b);
    if (u >= 0) return u;
    return -1;

}