#include <stdio.h>

int main(){
    long int N, B;
    int a=0;
    char form[] = {
        '0','1','2','3','4','5','6','7','8','9',
        'A','B','C','D','E','F','G','H','I',
        'J','K','L','M','N','O','P','Q','R','S',
        'T','U','V','W','X','Y','Z'
    };
    long int result[1000];
    scanf("%ld %ld",&N,&B);
    if (N==0) {
        printf("0");
        return 0;
    }
    while (N>0) {
        result[a++]=N%B;
        N/=B;
    }
    for (int i=a-1;i>=0;i--) {
        printf("%c", form[result[i]]);
    }
    return 0;
}