#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0, j = 0, l = left, k = right, n = number; //Счётчик итераций
    while(l != 0){
        l--;
        k--;
        n--;
    }
    
    while(1 > 0){
        if(k % 2 == 0){
            k = (k - l) / 2;
            i++;
            if(n > k + l){
                l += k;
                k = k + l;
            }
            if(n == k + l){
                n = k + l - 1;
                break;
            }
        }
        else{
            k = (k - l + 1) / 2;
            i++;
            if(n > k + l){
                l += k;
                k += l;
            }
            if(n == k + l){
                n = k + l - 1;
                break;
            }
        }
    }


    return i; //НЕ МЕНЯТЬ!
}