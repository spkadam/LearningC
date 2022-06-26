#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int a,b,x;
    int increase = 0;
    int years = 0;
    for (int i =0;i<t;i++){
        scanf("%d %d %d",&a, &b,&x);
        increase = b-a;
        years = increase/x;
        printf("%d \n",years);
    }

    return 0;
}