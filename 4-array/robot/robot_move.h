#include <math.h>

char robot_move(int xs[], int ys[], int num_points, int area_radius, int xt, int yt){
    int i;
    for(i = 0; i < num_points; i++) {
        double dist = sqrt(pow(xs[i] - xt, 2) + pow(ys[i] - yt, 2));
        if(dist <= area_radius) {
            return 1;
        }
    }
    return 0;
}