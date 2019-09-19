
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *mythread(void *var){
    pthread_t *var1 = (pthread_t *)var;
    printf("%lu\n", (unsigned long)*var1);
    printf("Nikita postav' 2 balla\n");
    return NULL;
}
int main(){
    pthread_t tid[4];
    for(int i = 0; i < 4; i++){
        pthread_create(&tid[i], NULL, mythread, (void*)&tid[i]);
        pthread_join(tid[i], NULL);
    }

    pthread_exit(NULL);
    
    return 0;
}
