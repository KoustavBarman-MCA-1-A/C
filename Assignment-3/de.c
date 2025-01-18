#include <stdio.h>
#include <string.h>

int main() {
    char binary[33];
    int decimal = 0;
    int length, i;
    printf("Enter a binary number: ");
    scanf("%s", binary);
    length = strlen(binary);
    for (i = 0; i < length; i++) {
        if (binary[length - 1 - i] == '1') {
            decimal += (1 << i);
        } else if (binary[length - 1 - i] != '0') {
            printf("Invalid binary number.\n");
            return 1;
        }
    }
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
