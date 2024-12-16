#include "STD_TYPES.h"
#include "Queue.h"
#define size 5

u32 QUEUE[size];
s8 front = -1,rear = -1;

enum check isFull_QUEUE(void)
{
    if(rear == size-1)
        return FULL;
    else
        return NOT_FULL;

}

enum check isEmpty_QUEUE(void)
{
    if(front == -1 || front>rear )
        return EMPTY;
    else
        return NOT_EMPTY;

}
void enqueue(void)
{
    u32 element=0;

    if(isFull_QUEUE()== NOT_FULL)
    {
        printf("please enter your element: ");
        scanf("%d",&element);
        if(front == -1)
            front++;
        QUEUE[++rear]=element;
    }
    else
        printf("Queue is full\n");

}
void dequeue(void)
{
    if(isEmpty_QUEUE() == NOT_EMPTY)

        printf("dequeued element is %d \n",QUEUE[front++]);

    else

        printf("Queue is empty\n");



}
void display_queue(void)
{
    u8 i=0;
    if(isEmpty_QUEUE() == NOT_EMPTY)
    {
        printf(" elements are ");
        for (i=front ; i<=rear ; i++)
            printf("%d ",QUEUE[i]);
        printf("\n");
    }
    else
        printf("Queue is empty\n");
}
void QUEUE_APP(void)
{
    u8  choice;

    while (1)

    {
        printf("** 1- enqueue \n** 2- dequeue\n ** 3- IS FULL\n ** 4- IS EMPTY \n ** 5 - DISPLAY \n 6- EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            enqueue();
            break;

        case 2:
           dequeue();
            break;

        case 3:

            if (isFull_QUEUE()== FULL)
                printf ("full \n");
            else
                printf ("not full \n");
            break;

        case 4:
            if (isEmpty_QUEUE()== EMPTY)
                printf ("empty \n");
            else
                printf (" not empty \n");

            break;
        case 5:
            display_queue();
            break;

        case 6:
            printf("*******************good bye queue***************");
            exit(0);

        }
    }


}





