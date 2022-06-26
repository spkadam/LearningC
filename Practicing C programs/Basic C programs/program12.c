#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char id;
    for(int i=0; i<=t;i++)
    {
        scanf("%c ",&id);
        switch(id)
        {
            case 'B':
                printf("BattleShip \n");
                break;
            case 'b':
                printf("BattleShip \n");
                break;
                
            case 'C':
                printf("Cruiser \n");
                break;
            case 'c':
                printf("Cruiser \n");
                break;
                
            case 'D':
                printf("Destroyer \n");
                break;
            case 'd':
                printf("Destroyer \n");
                break;
                
            case 'F':
                printf("Frigate \n");
                break;
            case 'f':
                printf("Frigate \n");
                break;
            
                
        }
    }
    return 0;
}