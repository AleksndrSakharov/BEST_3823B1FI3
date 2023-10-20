#include <math.h>
int get_score(short score, int start, int stop, int now) {
    float re = score / 2, result = 0;
    int answer = 0, res = 0;
    if(stop <= now){
        return (score + 1) / 2; 
    } 
    if(start >= now){
        return score;
    }
    if((start < now)){
        result = re / (stop - start) * (now - start) + 0.15;
        res = result;
        answer = score - res;
    }
    return answer;
}
