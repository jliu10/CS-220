#include <stdio.h>

/*  2 <= base <= 36
    The function returns the string representation of a base 10 number converted to the given base where the symbols of the base are 0 through 9 followed by A through Z. That is, a base 36 number has 36 symbols 0-9, A-Z. The function must allocate a character array using malloc and store the string representation into the character array. The string must be terminated by ’\0’
*/
char* print_any_base(unsigned long num, unsigned int base) {
    if(num == 0) return 0;
    const char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* t; // Stores the reversed result

    int c = 0; // Counts length of result
    while(num >= base) {
        int r = num % base;
        *t = symbols[r];
        num /= base;
    }

    char* res;
    // TERMINATE WITH '\0'
    return res;
}

/*  Accepts a null terminated string and prints the number of vowels in the
    string. Both lower and upper case vowels must be counted. The function must not modify the input string
*/
#define IS_VOWEL(c) (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')

unsigned int count_vowels(char *str) {
    unsigned int res; // Vowel count
    for(res = 0; *str != '\0'; str++) {
        if(IS_VOWEL(*str)) res++;
    }
    return res;
}

int main() {
    printf("----- TESTING print_any_base -----\n");
    printf("\n");

    printf("----- TESTING count_vowels -----\n");
    char *str = "Hello World";
    printf("%s : %d\n", str, count_vowels(str));
    printf("\n");

    printf("----- TESTING reverse_words -----\n");
    printf("\n");

    printf("----- TESTING rotate_string_in_place -----\n");
    printf("\n");

    printf("----- TESTING paritize -----\n");
    printf("\n");

    printf("----- TESTING swap_bytes -----\n");
    printf("\n");

    return 0;
}
