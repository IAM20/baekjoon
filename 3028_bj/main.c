#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

char str[64];
typedef struct{
    int left;
    int center;
    int right;
}Result;

Result result;

int init() {
    result.left = TRUE;
    result.right = FALSE;
    result.center = FALSE;
}

int func() {
    int length = strlen(str);
    int tmp;
    for(int i = 0; i < length; i++) {
        switch(str[i]) {
            case 'A' :
                tmp = result.left;
                result.left = result.center;
                result.center = tmp;
                break;
            case 'B' :
                tmp = result.right;
                result.right = result.center;
                result.center = tmp;
                break;
            case 'C' :
                tmp = result.right;
                result.right = result.left;
                result.left = tmp;
                break;
            default :
                break;
        }
    }
}

int main() {
    scanf("%s", str);
    init();
    func();
    if(result.left) {
        printf("1\n");
    } else if(result.center) {
        printf("2\n");
    } else
        printf("3\n");
}