#include <stdio.h>

int main() {
    int year = 2022;
    if (((year % 4) == 0) && ((year % 100) != 0)) {
        printf("%d是閏年", year);
    } else if ((year % 400) == 0) {
        printf("%d是閏年", year);
    } else {
        printf("%d不是閏年", year);
    };
    return 0;
}