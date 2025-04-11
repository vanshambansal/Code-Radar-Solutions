#include<stdio.h>
int main(){

    char s[100] , c1 ,c2;
    fgets(s ,100,stdin);
    scanf("%c",&c1);
    scanf("%c",&c2);

    for(int i=0 ; s[i] !='\0' ; i++){
        if(s[i]== c1){
            s[i]= c2;
        }
    }
    
        for(int i=0 ; s[i] !='\0' ; i++){
            printf("%s",s[i]);
        }

    return 0;
}