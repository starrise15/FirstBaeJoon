#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    a=num1/100;
    b=(num1/10)%10;
    c=num1%10;
    d=num2/100;
    e=(num2/10)%10;
    f=num2%10;
    
    printf("%d\n",((100*a)+(10*b)+c)*f);
    printf("%d\n",((100*a)+(10*b)+c)*e);
    printf("%d\n",((100*a)+(10*b)+c)*d);
    printf("%d\n",((100*a)+(10*b)+c)*(((100*d)+(10*e)+f)));
    
    
}