// Your code here...
#include<stdio.h>
int main(){

    char s[100];
    fgets(s , 100 , stdin);

    for(int i=0;s[i] != '\0' ;i++){
        if(s[i]==' '){
            i--;
        }
    }
    printf("%s",s);



    return 0;
}