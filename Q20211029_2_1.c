#include <stdio.h>

void square(int [], int );

int main(){
    int k,n, arr[100];

    scanf("%d", &n);
    for (k = 0; k < n; k++){
        scanf("%d", &arr[k]);
    }
    square(arr,n);
}

void square(int arrfun[], int m){
    int i;
    for(i = 0; i < m; i++){
        arrfun[i] = arrfun[i]* arrfun[i];
        printf("%d ", arrfun[i]);
    }
        printf("\n");
}