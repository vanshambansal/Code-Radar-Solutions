#include<stdio.h>
int main(){
    char s[100] ,c;
    fgets(s , 100 , stdin);
    scanf(" %c",&c);
    int count =0;
    for(int i=0;s[i]!= '\0' ;i++){
        if(s[i]==c){
            count ++;
        }
    }
    printf("%d",count);



    return 0;
}