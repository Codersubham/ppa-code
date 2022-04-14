#include<stdio.h>
int main() {
    int x= 109, y =9;
    float t =9.7;
    double k=99.99;
    char c= '/';
    x = x+1;
    printf("Val of x =%d\n y = %d\n t= %f\n k= %lf\n c= %c\n",x,y,t,k,c);
    return 0;

}

//Format type specifer : to specify the datatye of var being printed
//%d :int , %f= float,%c =c %char,%ld =long,%lf=long float
//
//Gen format : printf("fs1 fs2 fs3")