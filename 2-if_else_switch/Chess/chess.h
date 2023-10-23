int chess_rook(char a, int b, char c, int d){
    int flag = 0;
    char array1[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    for (int i = 0; i < 8; i++){
        if (a == array1[i]) flag++;
        if (c == array1[i]) flag++;
    }
    if(flag == 2 && b <= 8 && d <= 8 && b>=1 && d >= 1){
    if ((a == c) && (b == d)) return 0;
    else if ((a == c) || (b == d)) return 1;  
    else return 0;
    }
    return 0;
}