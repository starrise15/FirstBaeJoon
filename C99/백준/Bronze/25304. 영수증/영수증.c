#include <stdio.h>
int main(){
    int sum, a, prize, count, total = 0;
    scanf("%d", &sum);
    scanf("%d", &a);
    for(a;a>0;a--){
        scanf("%d %d", &prize, &count);
        total+=prize*count;
    }
    if(total == sum){
        printf("Yes");
    }else{
        printf("No");
    }
}