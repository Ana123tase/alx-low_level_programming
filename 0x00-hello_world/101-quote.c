#include<stio.h>

int main(void) {
    const char* message = "and that piece of art is usful\" - Dora Korpar, 2015-10-19\n";
    ssize_t num_bytes = write(2, message, strlen(message));
        return 1;
}
