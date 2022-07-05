#include <stdio.h>
int main (){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t;i++){
        int x;
        scanf("%d", &x);
        int daily;
        daily =x*2;
        int weekly;
        weekly = daily*5;
        printf("%d \n",weekly);
    }
    return 0;
}