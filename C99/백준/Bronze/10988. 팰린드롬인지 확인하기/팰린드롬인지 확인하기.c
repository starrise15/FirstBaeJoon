#include <stdio.h>
int main() {
    char a[100];
    int total = 0;
    int wrong = 0;
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++) {
        total++;
    }
    for (int i = 0; i < total / 2; i++) {
        if (a[i] != a[total - 1 - i]) {
            wrong = 1;
            break;
        }
    }
    if (wrong){
        printf("0");
    }else{
        printf("1");
    }
    return 0;
}