#include <stdio.h>
void decimalToOctal(int decimalNumber) {
    int octalNumber = 0, placeValue = 1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * placeValue;
        decimalNumber /= 8;
        placeValue *= 10;
    }
    printf("Octal equivalent: %d\n", octalNumber);
}
void decimalToHexadecimal(int decimalNumber) {
    char hexadecimalNumber[20];
    int index = 0;
    int i;
    while (decimalNumber != 0) {
        int remainder = decimalNumber % 16;
        if (remainder < 10) {
            hexadecimalNumber[index] = remainder + '0';
        } else {
            hexadecimalNumber[index] = remainder - 10 + 'A';
        }
        decimalNumber /= 16;
        index++;
    }
    printf("Hexadecimal equivalent: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimalNumber[i]);
    }
    printf("\n");
}
void decimaltobinary(int decimalNumber)
{
	int i;
    printf("Binary equivalent: ");
    for (i = 31; i >= 0; i--) {
        printf("%d", (decimalNumber >> i) & 1);
    }
    printf("\n");
}
int main() {
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);
    printf("Given Number: %d\n", number);
    decimalToOctal(number);
    decimalToHexadecimal(number);
    decimaltobinary(number);

    return 0;
}

