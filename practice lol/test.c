#include <stdio.h>

int main(){
    int a=0,b=0,c=0,d=0;
    if ((a++ && ++b) || ++c){
        d=1;

    }
    printf("%d,%d,%d,%d,",a,b,c,d);
}