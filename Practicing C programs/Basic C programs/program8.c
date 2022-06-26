#include <stdio.h>
int main(){
    int x;
    float y;
    scanf("%d %f",&x,&y);
    float bal;
    if((x>0 && x<2000 )&& (y>0.00 && y<2000.00)){
        if (x%5 ==0 && y>=x){
            bal = (y-x)-0.50;
            printf(".2f",bal);
        }
    
        else{
            printf("%.2f",y);
        }
    }


    return 0;
}