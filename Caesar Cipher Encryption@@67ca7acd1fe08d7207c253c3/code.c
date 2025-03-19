#include <stdio.h>
#include <string.h>

void caesarCipher(char message[], int shift, char encrypted[]) {
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        // Encrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            encrypted[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        // Encrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            encrypted[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
        // Keep other characters unchanged (like spaces, punctuation)
        else {
            encrypted[i] = ch;
        }
    }

    encrypted[strlen(message)] = '\0'; // Null-terminate the encrypted string
}
