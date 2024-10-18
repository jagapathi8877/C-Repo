#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int last = num%10;
    int first = num;
    while( first >=10){
        first= first/10;
    }
    printf("%d",first+last);
}