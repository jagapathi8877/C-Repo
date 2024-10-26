#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if ( x > 10*y){
        printf("YES");
    }
    else {
        printf("NO");
    }
}