#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "linked.h"
#include "stack.h"
#include "Queue.h"


#define QUEUE        OPEN
#define STACK        CLOSE
#define LINKED_LIST  CLOSE


#if QUEUE == OPEN

int main()
{


printf("*******************main***************\n");
   QUEUE_APP();
    return 0;
}


#elif STACK == OPEN

int main()
{


printf("*******************main***************\n");

   STACK_APP();

    return 0;
}



#elif LINKED_LIST == OPEN


int main()
{


printf("*******************main***************\n");

   LINKED_LIST_APP();


    return 0;
}


#endif // LINKED_LIST

