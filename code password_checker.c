#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length = 0, upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);

    length = strlen(password) - 1; 

    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) upper++;
        else if (islower(password[i])) lower++;
        else if (isdigit(password[i])) digit++;
        else if (ispunct(password[i])) special++;
    }

    printf("\nPassword Analysis:\n");
    printf("Length: %d\n", length);

    if (upper > 0) printf("Uppercase letters: Yes\n");
    else printf("Uppercase letters: No\n");

    if (lower > 0) printf("Lowercase letters: Yes\n");
    else printf("Lowercase letters: No\n");

    if (digit > 0) printf("Digits: Yes\n");
    else printf("Digits: No\n");

    if (special > 0) printf("Special characters: Yes\n");
    else printf("Special characters: No\n");

    if (length >= 8 && upper > 0 && lower > 0 && digit > 0 && special > 0)
        printf("\nPassword Strength: STRONG 🔐\n");
    else if (length >= 6)
        printf("\nPassword Strength: MEDIUM ⚠️\n");
    else
        printf("\nPassword Strength: WEAK ❌\n");

    return 0;
}
