#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int a,b,c;
   scanf("%d %d",&a,&b);
   c=a;
   a=b;
   b=c;
   printf("%d %d",a,b);

}