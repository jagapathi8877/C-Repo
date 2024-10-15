#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if ( y >=x){
        printf("0");
    }
    int time = 0;
    while ( y <x){
        time++;
        y = y +time;
        
    }
    printf("%d",time);
}