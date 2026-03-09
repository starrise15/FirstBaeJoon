#include <stdio.h>
int main(){
    char a[1000000];
    int alpha[26]={0},max=-1,num=0,check=0;
    
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=97&&a[i]<=122){
            a[i]-=32;
        }
    }
    for(int i=0;a[i]!='\0';i++){
        alpha[a[i]-65]+=1;
    }
    for(int i=0;i<26;i++){
        if(max<alpha[i]){
            max=alpha[i];
            num=i;
        }
    }
    for(int i=0;i<26;i++){
        if(num!=i && alpha[i]==max){
            check=1;
        }
    }
    if(check==1){
        printf("?");
    }else{
        printf("%c",num+65);
    }
    return 0;
}