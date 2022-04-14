#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int c= 0,i =1;
    while(c<N){
        printf("%d ",i);
        i+=2;
        c++;
    }
    printf("\n");
    c =0;
    i =2;
    while(c<N){
        printf("%d ",i);
        i +=2;
        c++;
    }
    return 0;
}