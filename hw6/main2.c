#include <stdio.h>

int main() {
    int i = 10;
    if ((i & 1) == 0) {
        printf("%s", "even");
    } else {
        printf("%s", "odd");
    };
    return 0;
}