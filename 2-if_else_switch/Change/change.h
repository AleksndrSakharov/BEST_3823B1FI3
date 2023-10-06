long long change(int a, int b, int c, int d){
    long long sd;
    sd = ((long long)c * 100 + (long long)d) - ((long long)a * 100 + (long long)b);
    if (sd >= 0) return sd;
    return -1;
}