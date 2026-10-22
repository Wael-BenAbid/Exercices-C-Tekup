#include <stdio.h>
#include <math.h>

int main() {
    int a,b,s;
    char c;

    printf("donne a et b:");
    scanf("%d %d",&a,&b);
    printf("donne le type d'operation:");
    scanf("%c",&c);
    if (c == '+'){
        s  = a+b;
    }else if (c == '-'){
        s=a-b;
        printf("%d",s);
    }else if (c == '*'){
        s=a*b;
        printf("%d",s);
    }else if (c == '/'){
        s=a/b;
        printf("%d",s);
    }else if (c == '%'){
        s=a%b;
        printf("%d",s);
    }else if (c == '^'){
        s=pow(a,b);
        printf("%d",s);
    }
    return 0;
}
