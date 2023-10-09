int twoboxes(double x1, double y1, double z1, double x2, double y2, double z2){
    if ((x1 > 0) && (x2 > 0) && (y1 > 0) && (y2 > 0) && (z1 > 0) && (z2 > 0)){
        if ((x1 < x2) && (y1 < y2) && (z1 < z2)) return 1;
        if ((x1 > x2) && (y1 > y2) && (z1 > z2)) return 1;
    }
    return 0;
}