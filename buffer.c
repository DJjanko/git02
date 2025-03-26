#include "buffer.h"

uint16_t *buffer_alloc(size_t size){
    
    uint16_t * buffer = malloc(size);
    return buffer;
}

void buffer_free(uint16_t *buffer){
    free(buffer);
}

void buffer_fill(uint16_t *buffer){

    void *pointer = (uint8_t*)buffer;

    char* data_buffer_char = (char*)pointer;
    *data_buffer_char = 'N';

    //printf("%p\n",(void*)data_buffer_char);


    data_buffer_char = (char *)pointer+1;
    *data_buffer_char = 'P';
    //printf("%p\n",(void*)data_buffer_char);


    data_buffer_char = (char *)pointer+2;
    *data_buffer_char = 'O';
    //printf("%p\n",(void*)data_buffer_char);


    float * data_buffer_float = (float *)((char*)pointer+3);
    *data_buffer_float = 3.141593;
    //printf("%p\n",(void*)data_buffer_float);


    int32_t * data_buffer_int = (int32_t *)((char*)pointer+7);
    *data_buffer_int = 28862;
    //printf("%p\n",(void*)data_buffer_int);


    data_buffer_char = (char *)pointer+11;
    *data_buffer_char = 'O';
    //printf("%p\n",(void*)data_buffer_char);

    data_buffer_char = (char *)pointer+12;
    *data_buffer_char = 'P';
    //printf("%p\n",(void*)data_buffer_char);

    data_buffer_char = (char *)pointer+13;
    *data_buffer_char = 'N';
    //printf("%p\n",(void*)data_buffer_char);

}

void buffer_print(uint16_t *buffer){
    void *pointer = (uint8_t*)buffer;
    //printf("--------------------------\n");
    printf("%c\n",*(char*)((char *)pointer));

    printf("%c\n",*(char*)((char *)pointer+1));

    printf("%c\n",*(char*)((char *)pointer+2));

    printf("%f\n",*(float *)((char*)pointer+3));

    printf("%d\n",*(int32_t *)((char*)pointer+7));

    printf("%c\n",*(char*)((char *)pointer+11));

    printf("%c\n",*(char*)((char *)pointer+12));

    printf("%c\n",*(char*)((char *)pointer+13));


}
