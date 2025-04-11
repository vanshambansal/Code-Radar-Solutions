#include<stdio.h>
int main(){

    char s[100];
    char s1[100];
    fgets(s , 100 , stdin);
    fgets(s1 , 100 , stdin);

    int flag =0;
    for(int i=0 ; i!=s[i] ; i++){

        for(int j=0 ; j != s1[i]  ;j++){

            if(s[i] != s1[j]){
                flag=1;
            }
        }
    }
    if(flag == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }



    return 0;
}