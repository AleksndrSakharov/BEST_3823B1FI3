#include <math.h>

int nod(int first, int second){
    if (first <= 0 || second <= 0) return -1;
    if (first == second) return first;
    if (first < second) return nod(first, second - first);
    if (first > second) return nod(first - second, second);
}
