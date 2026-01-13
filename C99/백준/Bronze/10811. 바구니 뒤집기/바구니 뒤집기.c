#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++){
        arr[i] = i + 1;
    }
    for (int k = 0; k < m; k++){
        int i, j;
        scanf("%d %d", &i, &j);
        i--; 
        j--;
        while (i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
