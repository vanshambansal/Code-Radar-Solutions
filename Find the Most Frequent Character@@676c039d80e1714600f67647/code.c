#include<stdio.h>
int main(){

    char s[100];
    fgets(s, 100, stdin);

    int max = -1;
    char mostfreq;

    for(int i = 0; s[i] != '\0'; i++){
        int count = 1;

        // Ignore already counted characters
        int already_counted = 0;
        for(int k = 0; k < i; k++){
            if(s[i] == s[k]){
                already_counted = 1;
                break;
            }
        }
        if(already_counted) continue;

        for(int j = i + 1; s[j] != '\0'; j++){
            if(s[i] == s[j]){
                count++;
            }
        }

        if(count > max){
            max = count;
            mostfreq = s[i];
        }
        else if(count == max && s[i] < mostfreq){
            mostfreq = s[i];
        }
    }

    printf("%c\n", mostfreq);

    return 0;
}
