int get_module(int a, int b, int c) {
    int res;
    res = ((a % c) * (b % c)) % c;
    return res; // Not implementation
}