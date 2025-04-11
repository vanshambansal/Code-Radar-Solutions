#include<stdio.h>
int main(){

    char s[100];
    fgets(s,100,stdin);

    for(int i=0 ; s[i]!='\0';i++){

        for(int j=i+1 ; s[j]!= '\0' ;j++){
            if(s[i]!=s[j]){
                printf("%c",s[i]);
                return 0;
            }
        }
    }
    printf("-");

    return 0;
}