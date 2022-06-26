#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int a,b;
    for (int i= 0; i<t;++i){
        scanf("%d %d",&a,&b);
        if(a>b){
            printf("> \n");
        }
        if(a<b){
            printf("< \n");
        }
        if(a==b){
            printf("= \n");
        }
    }
    return 0;
}