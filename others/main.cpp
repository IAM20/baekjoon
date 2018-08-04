#include <stdio.h>

int min(int a, int b, int c) {
    int retval = c;
    if(retval > b) {
        retval = b;
    }

    if(retval > a) {
        retval = a;
    }

    return retval;
}

int
func(int digit) {
    int divby2;
    int divby3;
    switch(digit) {
        case 1:
            return 0;
        case 2: case 3:
            return 1;
        default :
            divby2 = 10000000;
            divby3 = 10000000;
            int minus = 1 + func(digit-1);
            if(!(digit % 2)) {
                divby2 = 1 + func(digit/2);
            }

            if(!(digit % 3)) {
                divby3 = 1 + func(digit/3);
            }
            return min(minus, divby2, divby3);
    }
}

int
main(int argc, char * argv[])
{
    int digit, result = 0;
    scanf("%d", &digit);
    result = func(digit);
    printf("%d\n", result);

    return 0;
}
