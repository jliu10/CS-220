#include <stdio.h>

/*  2 <= base <= 36
    The function returns the string representation of a base 10 number
    converted to the given base where the symbols of the base are 0 through 9
    followed by A through Z. That is, a base 36 number has 36 symbols 0-9, A-Z.
    The function must allocate a character array using malloc and store the
    string representation into the character array. The string must be
    terminated by ’\0’
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
    string. Both lower and upper case vowels must be counted. The function must
    not modify the input string
*/
#define IS_VOWEL(c) (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')

unsigned int count_vowels(char *str) {
    unsigned int res; // Vowel count
    for(res = 0; *str != '\0'; str++) {
        if(IS_VOWEL(*str)) res++;
    }
    return res;
}

/*  Accepts a string and reverses the word ordering within the string. Note
    that the characters within the words are not reversed. The function will
    allocate space to store the string with reversed word order. You are
    allowed to modify the input string if necessary
*/
char *reverse_words(char *str) {
    return str;
}

/*  Accepts a string and a displacement and rotates each alphabetical
    character in the string by the given displacement to the right where 0 <=
    disp <= 2600. Non alphabetical characters are retained without
    modification. Right shifting a character beyond 'Z' by 1 rotates around to
    'A' (similarly 'z' rotates around to 'a'). The input string is modified by
    the function
*/
#define IS_UPPER(c) (c >= 'A' && c <= 'Z')
#define IS_LOWER(c) (c >= 'a' && c <= 'z')
char rotate_letter(char c, unsigned int disp) {
    disp = disp % 26;
    char res = c;
    if(IS_UPPER(c)) {
        if(c + disp > 'Z') {
            disp = 26 - disp;
            res = 'A' + disp - 1;
        }
        else res = c + disp;
    } else if(IS_LOWER(c)) {
        if(c + disp > 'z') {
            disp = 26 - disp;
            res = 'a' + disp - 1;
        }
        else res = c + disp;
    }
    return res;
}
void *rotate_string_in_place(char *str, unsigned int disp) {
    disp = disp % 26;
    while(*str != '\0') {
        *str = rotate_letter(*str, disp);
        str++;
    }
    return str;
}

/*  Accepts a void pointer that points to an array of bytes in memory along
    with the number of bytes the pointer points to, and (1) for each byte, the
    function computes its parity bit. For a given byte, the parity bit p is 1 if
    the number of 1's in the first 7 bits (i.e., if a byte were b7b6b5b4b3b2b1b0
    then b6 through b0 are the first 7 bits) is odd, or 0 if the number of 1's
    is even. Then (2) the function replaces the most significant bit (i.e., bit
    b7) in the byte with the parity bit
*/
void paritize(void *p, unsigned int num_bytes) {

}

/*  Accepts an 8-byte integer, swaps bytes 1 and 2, 3 and 4, 5 and 6, and 7 and
    8 and returns the result
*/
unsigned long swap_bytes(unsigned long n) {
    return 0;
}

int main() {
    printf("----- TESTING print_any_base -----\n");
    printf("\n");

    printf("----- TESTING count_vowels -----\n");
    char *str = "Hello World";
    printf("%s : %d\n", str, count_vowels(str));
    str = "";
    printf("%s : %d\n", str, count_vowels(str));
    str = "abcdefghijklmnopqrstuvwxyz";
    printf("%s : %d\n", str, count_vowels(str));
    str = "EduCAtion";
    printf("%s : %d\n", str, count_vowels(str));
    str = "The quick brown fox jumped over the lazy dog";
    printf("%s : %d\n", str, count_vowels(str));

    printf("\n");

    printf("----- TESTING reverse_words -----\n");
    printf("\n");

    printf("----- TESTING rotate_string_in_place -----\n");
    str = "Hello World";
    printf("%s : ", str);
    rotate_string_in_place(str, 5);
    printf("%s\n", str);
    str = "";
    str = "Hey You!";
    str = "gcc -c hw.c -o hw";
    str = "Hello";
    printf("\n");

    printf("----- TESTING paritize -----\n");
    printf("\n");

    printf("----- TESTING swap_bytes -----\n");
    printf("\n");

    return 0;
}
