#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }

    // Find maximum occurring character
    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxChar = i;
        }
    }

    if(max > 0)
        printf("Maximum occurring character: %c\n", maxChar);
    else
        printf("String is empty.\n");

    return 0;
}