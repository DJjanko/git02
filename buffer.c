#include "buffer.h"

uint16_t *buffer_alloc(size_t size){
    
    uint16_t * buffer = malloc(size);
    return buffer;
}

void buffer_free(uint16_t *buffer){
    free(buffer);
}

void buffer_fill(uint16_t *buffer){
}

void buffer_print(uint16_t *buffer){
}
