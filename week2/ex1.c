#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    int a;
    float b;
    double c;
    
    a = INT_MAX;
    b = FLT_MAX;
    c = DBL_MAX;
    
    printf("Max value of Integer is %d and the size is %lu\n", a, sizeof(a));
    printf("Max value of Float is %f and the size is %lu\n", b, sizeof(b));
    printf("Max value of Double is %lf and the size is %lu\n", c, sizeof(c));

    return 0;
}
