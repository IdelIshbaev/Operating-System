#include <stdio.h>
#include <string.h>

int main(){
    char *s;
    scanf("%[^\n]*c", s);
    int n = strlen(s);

    for(int i = n-1; i >= 0; i--){
        printf("%c", *(s+i));
    }
    return 0;
}
