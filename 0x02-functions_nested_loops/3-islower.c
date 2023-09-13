#include "main.h"
//checking lowwr case letters

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

