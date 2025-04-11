#include<stdio.h>
int main(){

    char s[100];
    fgets(s,100,stdin);
    
    int max =-1 , mostfreq;
    for(int i=0;s[i]!='\0';i++){
        int count =1;
        for(int j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j]){
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

    
    printf("%c",mostfreq);
    



    return 0;
}