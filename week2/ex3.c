#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int n;
    sscanf(argv[1], "%d", &n);
    int w = n*2-1;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= w; j++){
            int mid = w/2+1;
            if(j < mid-i || j > mid+i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
