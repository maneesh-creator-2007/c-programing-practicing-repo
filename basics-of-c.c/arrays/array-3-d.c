#include<stdio.h>
int main(){
    int i, j, p, n, m, k;
    printf("enter the values of n,m and k:");
    if (scanf("%d%d%d", &n, &m, &k) != 3) return 1;
    int a[n][m][k]; // this is a 3-d array
    printf("enter the elements of the array:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            for(p = 0; p < k; p++){
                scanf("%d", &a[i][j][p]); // input values
            }
        }
    }

    printf("the entered elements of the array are :\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            for(p = 0; p < k; p++){
                printf("%d   ", a[i][j][p]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}