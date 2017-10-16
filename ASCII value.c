#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");

    // Reads character input from the user
    scanf_s("%c", &c);		// using scanf_s prevents buffer overflow error.

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    return 0;
}
