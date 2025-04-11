#include<stdio.h>
int main(){

    char s[100];
    fgets(s,100,stdin);
    
    int max =-1;
    for(int i=0;i!='\0';i++){
        int count =1;
        for(int j=i+1;j!='\0';j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            printf("%c",s[i]);
        }
    }
    



    return 0;
}