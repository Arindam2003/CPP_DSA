#include <stdio.h>
#include <string.h>

char* uppercase(char *str) {
    int i;
    for (i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

int main() {
    char p[50];
    printf("Enter a String: ");
    fgets(p, 50, stdin);
    p[strlen(p) - 1] = '\0';  // Remove newline character
    printf("Uppercase String: %s\n", uppercase(p));
    return 0;
}
