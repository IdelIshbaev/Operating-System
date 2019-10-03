
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

void * my_first_realloc(void * ptr, size_t size){
    int new_size = malloc_usable_size(ptr);
    void * upd_ptr;
    
    if (!size) {
        free(ptr);
        return NULL;
    }
    
    if (ptr == NULL) {
        upd_ptr = malloc(size);
    }
    
    else{
        if (new_size < size) {
            upd_ptr = malloc(size);
            memcpy(upd_ptr, ptr, new_size);
            free(ptr);
        }
        
        else{
            upd_ptr = ptr;
        }
    }
    return upd_ptr;
}
