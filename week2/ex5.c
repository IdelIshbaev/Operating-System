
#include <stdio.h>
#include <string.h>
void fun1(int n){
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
    return;
}
void fun2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}
void fun3(int n){
    int t = 0;
    int mid = n/2+1;
    for(int i = 0; i <= n; i++){
        if(i < mid){
            t = i;
            for(int j = 0; j <= i; j++){
                printf("*");
            }
        }else{

            for(int j = t; j > 0; j--){
                printf("*");
            }
            t--;
        }
        printf("\n");
    }
    return;
}
void fun4(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}
int main(int argc, char *argv[]){
    int n;
    sscanf(argv[1], "%d", &n);
    
    fun1(n);
    fun2(n);
    fun3(n);
    fun4(n);
    
    return 0;
}
