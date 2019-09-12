#include <stdio.h>
#include <unistd.h>


int main(){
    int n = fork();
    if(n == 0){
        printf("Hello from child %d\n", getpid());
    }else{
        printf("Hello from parent %d\n", getpid());
    }
    return 0;
}
