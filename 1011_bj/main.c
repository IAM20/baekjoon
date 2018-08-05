#include <stdio.h>

int
func(int distance) {
    int speed = 2;
    int retval = 2;
    switch(distance) {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        default:
            
    }

    return retval;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}