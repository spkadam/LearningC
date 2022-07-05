#include <stdio.h>
int main (){
    int t;
    int cov=0;
    int count_tot;

    scanf("%d ", &t);
    for (int i=0; i<t;i++)
    {
        int m,x,y;
        int arr[m];
        scanf("%d %d %d\n", &m, &x, &y);
        cov =x*y; //houses covered by cops on each side
        //printf("%d \n",cov);
        
        //feeding in array elements
        for (int j=0;j<m;j++){
            scanf("%d ",&arr[j]);
        }

        int count_l[m];
        int count_r[m];
        int max,min;
        for(int k=0;k<m;k++){
            
            int l=arr[k];
            count_l[k] = l-cov;
            if(count_l[k]<=0){
                count_l[k] = 1;
            }
            count_r[k] = l+cov;
            if(count_r[k]>=100){
                count_r[k]=100;
            }
            printf("%d %d ",count_l[k],count_r[k]);   
        }

    }

    return 0;
}