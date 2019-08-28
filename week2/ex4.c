#include <stdio.h>
void swapp(int *n, int *m){
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
    return;
}
int main(){
    printf("Write two numbes:\n");
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    swapp(&n, &m);
    
    //printf("%d", n);
    //printf("%d", m);
    
    return 0;
}
