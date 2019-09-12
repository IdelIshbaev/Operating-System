
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(){
    
    char *s1 = (char*)malloc(sizeof(char)*10);
    size_t siz = 32;
    size_t ch;
    ch = getline(&s1, &siz, stdin);
    system(s1);
    
    return 0;
}

