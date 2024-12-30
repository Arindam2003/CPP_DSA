#include <stdio.h>

int main() {
    char a, b, c;
    printf("Enter three characters separated by spaces, tabs, or newlines: ");
    scanf(" %c %c %c", &a, &b, &c); // Note the space before %c to consume any leading whitespace

    printf("%c = %d\n", a, a);
    printf("%c = %d\n", b, b);
    printf("%c = %d\n", c, c);

    return 0;
}
