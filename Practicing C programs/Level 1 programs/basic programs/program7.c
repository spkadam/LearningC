#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t;i++){
        int a, b, a1,b1,a2,b2;
        scanf("%d %d %d %d %d %d", &a, &b, &a1, &b1, &a2,&b2);
        if(a>=1 && a<=4 && b>=1 && b<=4 &&
           a1>=1 && a1<=4 && b1>=1 && b1<=4 &&
           a2>=1 && a2<=4 && b2>=1 && b2<=4){
            //First language
            if(((a==a1 && b ==b1)|| (a==b1 && b == a1))&& (a1!=b1)){
                printf("1 \n");
            }
            //Second language
            if(((a==a2 && b ==b2)|| (a==b2 && b == a2))&& (a2!=b2)){
                printf("2 \n");
            }
            if(!(((a==a1 && b ==b1)|| (a==b1 && b == a1))&& (a1!=b1))&& !(((a==a2 && b ==b2)|| (a==b2 && b == a2))&& (a2!=b2))){
                printf("0 \n");
            }
           }
    }
    return 0;
}
