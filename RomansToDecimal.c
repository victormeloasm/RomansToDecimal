#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert Roman numerals to decimal
int romanToDecimal(char *roman) {
    int values[7] = {1, 5, 10, 50, 100, 500, 1000};
    char numerals[] = "IVXLCDM";
    int len = strlen(roman);
    int result = 0;
    int prevValue = 0;

    for (int i = len - 1; i >= 0; i--) {
        char current = roman[i];
        int value = 0;

        for (int j = 0; j < 7; j++) {
            if (current == numerals[j]) {
                value = values[j];
                break;
            }
        }

        if (value == 0) {
            printf("Invalid Roman numeral: %c\n", current);
            return -1;
        }

        if (value < prevValue) {
            result -= value;
        } else {
            result += value;
        }

        prevValue = value;
    }

    return result;
}

// Function to convert decimal to Roman numerals
char* decimalToRoman(int decimal) {
    if (decimal < 1 || decimal > 1000000) {
        printf("Decimal number must be in the range 1-1,000,000\n");
        return NULL;
    }

    char *numerals[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int values[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    char *roman = (char*)malloc(20 * sizeof(char));
    roman[0] = '\0';

    for (int i = 12; i >= 0; i--) {
        while (decimal >= values[i]) {
            strcat(roman, numerals[i]);
            decimal -= values[i];
        }
    }

    return roman;
}

int main() {
    while (1) {
        printf("Choose an option:\n");
        printf("1. Convert Roman numeral to decimal\n");
        printf("2. Convert decimal number to Roman numeral\n");
        printf("0. Exit\n");

        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            char roman[100];
            printf("Enter a Roman numeral: ");
            scanf("%s", roman);

            int decimal = romanToDecimal(roman);
            if (decimal != -1) {
                printf("The decimal value is: %d\n", decimal);
            }
        } else if (choice == 2) {
            int decimal;
            printf("Enter a decimal number (1-1,000,000): ");
            scanf("%d", &decimal);

            char *roman = decimalToRoman(decimal);
            if (roman != NULL) {
                printf("The corresponding Roman numeral is: %s\n", roman);
                free(roman);
            }
        } else if (choice == 0) {
            break;
        } else {
            printf("Invalid option. Please choose 1, 2, or 0 to exit.\n");
        }
    }
getch();
    return 0;
}
