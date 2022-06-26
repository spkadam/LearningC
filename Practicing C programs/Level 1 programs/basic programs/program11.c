#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for (int i=0; i<t;i++){
        int a,b,c;

        scanf("%d %d %d", &a, &b, &c);
        int sum1, sum2, sum3;
        sum1 = a + b;
        sum2 = a + c;
        sum3 = b + c;
        if (sum1 > sum2 && sum1 > sum3)
        {
            printf("%d \n", sum1);
        }
        if (sum2 > sum3 && sum2 > sum1)
        {
            printf("%d \n", sum2);
        }
        if (sum3 > sum1 && sum3 > sum2)
        {
            printf("%d \n", sum3);
        }
    }
    return 0;
}