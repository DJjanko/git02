#include "buffer.h"

int main(){
    uint16_t *buffer = buffer_alloc(7);

    buffer_fill(buffer);

    buffer_print(buffer);

    buffer_free(buffer);
}
