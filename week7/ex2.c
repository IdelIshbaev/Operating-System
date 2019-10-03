#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int* array = (int*)(calloc(sizeof(int),n));
    for (int i = 0; i<n; i++){
        array[i] = i;
        printf("%d ",array[i] );
    }
    printf("\n");
    free(array);
}
