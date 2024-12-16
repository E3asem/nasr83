
#include "STD_TYPES.h"
#include "stack.h"
#define size 5

u32 STACK[size];
s8 top = -1 ;

s8 isFull(void)
{
    if(top < size-1)
        return 0;     //not full
    else
        return 1; // full

}
s8 isEmpty(void)
{
    if(top < 0)
        return 1;     // empty
    else
        return 0;    // not empty
}
void push(u32 element)
{
    if(!isFull())
    {
        //top++;
        STACK[++top]=element;
    }
    else
    {
        printf("stack overflow\n");
    }

}
void pop(void)
{

    if(!isEmpty())
    {
        printf("poped element %d\n",STACK[top--]);
        //top--;

    }
    else
    {
        printf("stack underflow\n");
    }

}
void display_stack(void)
{

    u8 i=0;
    if(!isEmpty())
    {

        for(i=0; i<=top; i++)
            printf("element %d\n",STACK[i]);


    }
    else
    {
        printf("stack underflow\n");
    }


}




void STACK_APP(void)
{

u32 element;
    u8  choice;

while (1)

    {
        printf("** 1- PUSH \n** 2- POP\n ** 3- IS FULL\n ** 4- IS EMPTY \n ** 5 - DISPLAY \n 6- EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:

            printf ("please enter new element: ");
            scanf("%d",&element);
            push(element);

            break;

        case 2:
           pop();
            break;

        case 3:

            if (isFull())

            printf ("full \n");

           else
            printf ("not full \n");
            break;

        case 4:
          if (isEmpty())

            printf ("empty \n");

           else
            printf ("not empty \n");
            break;

            break;
        case 5:
           display_stack();

            break;

        case 6:
            printf("*******************good bye***************");
            exit(0);

        }
    }


}

