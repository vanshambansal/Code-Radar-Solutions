#include <stdio.h>



int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    c=='+'?printf("%d",a+b):
    c=='-'?printf("%d",a-b):
    c=='*'?printf("%d",a*b):
    c=='/'?(b!=0?printf("%.2f",(float)a/b):printf("Error")):
    printf("Error");
    return 0;
}