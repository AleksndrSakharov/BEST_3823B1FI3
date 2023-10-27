unsigned char max_byte(unsigned short number) {
    int n = number, i = 0, j = 0, size, n1, n2;
    while (n >= 1){
        i++;
        n /= 2;
    }
    int a[i], ch[16];
    n = number;
    size = i;
    i = 0;
    while (n >= 1){
        a[i] = n % 2;
        n /= 2;
        i++;
    }
    for(i = 0; i < 16 - size; i++){
        ch[j] = 0;
        j++;
    }
    for(i = size-1; i >= 0; i--){
        ch[j] = a[i];
        j++;
    }    
    n1 = ch[0]*128 + ch[1]*64 + ch[2]*32 + ch[3]*16 + ch[4]*8 + ch[5]*4 + ch[6]*2 + ch[7];
    n2 = ch[8]*128 + ch[9]*64 + ch[10]*32 + ch[11]*16 + ch[12]*8 + ch[13]*4 + ch[14]*2 + ch[15];
    if(n1 > n2) return n1;
    else return n2;
} 
