#include <stdio.h>
int main(){
    int t;
    int a, b, rem;
    scanf("%d",&t);
    for (int i= 0;i<t;i++){
        scanf("%d %d", &a,&b);
        rem = a%b;
        printf("%d",rem);
    }


    return 0;
}