#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(){
    
    char *s1 = (char*)malloc(sizeof(char)*10);
    scanf("%s", s1);
    system(s1);
    return 0;
}

