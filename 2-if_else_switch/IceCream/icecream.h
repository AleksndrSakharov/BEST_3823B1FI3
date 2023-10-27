int icecream(int x){
    if (x != 0){
        if (x % 3 == 0 || x % 5 == 0) return 1;
        int c = x;
        while ((c % 3 != 0) && (c > 3))
        {
            c -= 5;
        }
        if (c % 3 == 0) return 1;
        c = x;
        while ((c % 5 != 0) && (c > 5))
        {
            c -= 3;
        }
        if (c % 5 == 0) return 1;
        
    }
    return 0;
}