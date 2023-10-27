int get_time(long long angle) {
    int n = angle / 6, sec = 0, min = 0, h = 0, res = 0;
    sec = n % 60;
    h = n / 3600;
    min = n / 60 % 60;
    res = sec + min * 100 + h * 10000;
    return res;
}