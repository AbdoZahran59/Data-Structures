#include <stdio.h>
#include <stdlib.h>
#include "QueueLinked.h"
#include "Global.h"
int main()
{
    int Choice,i,j;
    Process p,n,display,dis;
    Queue;
    createQueue();

printf("\n Enter 1. To Add A Process") ;
printf("\n Enter 2. To Serve A Process ") ;
printf("\n Enter 3. To Display Number Of Waiting Processes") ;
printf("\n Enter 4. To Exit Menu ") ;
printf("\nEnter Your Choice : ") ;
scanf("%d",&Choice);

switch(Choice){
    case 1:
    {
        printf("Enter New Process ID :");
        scanf("%d",&n.id);
        printf("Enter New Process Priority :");
        scanf("%s",&n.Priority);
        enQueue(&q,n);
        break;
    }
    case 2:
    {
        deQueue(&q,&display);
        printf("\nProcess ID : %d\n",display.id);
        printf("\nProcess Priority : %s\n",display.Priority);
        break;
    }
    case 3:
    {
        deQueue(&q,&display);
        printf("\n%d\n",display.id);
        printf("%s\n",display.Priority);
        enQueue(&q,display);
    }

    case 4:
    {
        return 0;
    }
}
return 0;
}
