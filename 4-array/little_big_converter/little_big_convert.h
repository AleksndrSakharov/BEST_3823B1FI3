#include <math.h>

unsigned int little_big_convert(unsigned int input){
    return ((input >> 24) & 0xFF) | ((input >> 8) & 0xFF00) | ((input << 8) & 0xFF0000) | ((input << 24) & 0xFF000000);
}
