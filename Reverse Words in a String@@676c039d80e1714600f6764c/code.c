#include <stdio.h>

int main() {
    char str[200];
    fgets(str, 200, stdin);

    int i, start = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            int end = i - 1;

            // Reverse the word from start to end
            for (int j = start; j < end; j++, end--) {
                char temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }

            start = i + 1; // move to next word
        }
    }

    printf("%s", str);
    return 0;
}
