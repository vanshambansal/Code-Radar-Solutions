#include<stdio.h>
int main(){

    char s[100];
    char s1[100];
    fgets(s , 100 , stdin);
    fgets(s1 , 100 , stdin);

    int flag =0;
    for(int i=0 ; s[i]!='\0' ; i++){

        for(int j=0 ; s1[j]!='\0';j++){

            if(s[i] == s1[j]){
                flag=1;
            }
            else{
                flag=0;
            }
        }
    }
    if(flag == 1){
        printf("Yes");
    }
    else{
        printf("No");
    }



    return 0;
}