long fib(int m){
    if(m < 0)
        return -1;
    int s = 1;
    int cur_fib = 1;
    int last_fib = 1;
    int temp_value = 0;
    while(cur_fib <= m)
    {
        s += cur_fib;
        temp_value = cur_fib;
        cur_fib += last_fib;

        last_fib = temp_value;

    }
    
    return s;
}