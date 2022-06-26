#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    
    for (int i= 0; i<t;i++){
        int d,l,r;
        scanf("%d %d %d",&d,&l,&r);
        if(d>=l && d<=r){
            printf("Take second dose now \n");
        }
        if(d>l && d>r){
            printf("Too Late \n");
        }
        if(d<l && d<r){
            printf("Too Early \n");
        }
    }
    return 0;
}