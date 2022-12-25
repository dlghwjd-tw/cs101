#include <stdio.h>

int main() {
    int i = 20;
    if (i % 15 == 0) {
        printf("%s", "Love IU");
    } else if (i % 3 == 0) {
        printf("%s", "Love");
    } else if (i % 5 == 0) {
        printf("%s", "IU");
    } else {
        printf("%d", i);
    };
    return 0;
}