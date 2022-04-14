#include<stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int A[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int ans=0;
    i=0,j=0;
    while(i<n){
        ans+= A[i][j];
        i++;
        j++;
    }
    printf("%d\n", ans);
    return 0;
}

