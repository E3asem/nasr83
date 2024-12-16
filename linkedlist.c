
#include <stdio.h>
#include"STD_TYPES.h"
#include "linked.h"



myNode * head=NULL;


void createNode(u8 * name, u32 id)
{
    myNode* temp=head;

    myNode* newNode=(myNode*)malloc(sizeof(myNode));

    strcpy(newNode->name,name);
    newNode->id=id;
    newNode->next=NULL;

    if(head == NULL)
    {
        head=newNode;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;

    }


}
void printNode(void)
{

    myNode* temp=head;

    while(temp != NULL)
    {
        printf("** Name = %s \t ID = %d **\n",temp->name,temp->id);

        temp=temp->next;
    }

}
void searchNode(u32 id)
{

    myNode* temp=head;

    while(temp != NULL)
    {

        if(temp->id == id)
        {
            printf("** Name = %s **\n",temp->name);
            return;
        }

        temp=temp->next;
    }

    printf("your id %d not found\n",id);

}
void editNode(u32 id)
{
    myNode* temp=head;

    while(temp != NULL)
    {

        if(temp->id == id)
        {
            printf("** please enter new id **\n");
            scanf("%d",&temp->id);
            printf("** please enter new name **\n");
            scanf("%s",&temp->name);

            return;
        }

        temp=temp->next;
    }

    printf("your id %d not found\n",id);


}
void deleteNode(u32 id)
{
    myNode* curr=head;
    myNode* prev=head;

    while(curr != NULL)
    {

        if(curr->id == id )
        {
            if(prev == curr)
            {
                head=curr->next;

            }
            else
            {
                prev->next= curr->next;

            }
            free(curr);
            return;

        }


        prev=curr;
        curr=curr->next;
    }

    printf("your id %d not found\n",id);

}



void LINKED_LIST_APP(void)
{


 u8 newName[20];
    u8  choice;
    u32  newID;
while (1)

    {
        printf("** 1- create node \n** 2- edit node\n ** 3- delete node\n ** 4- search node \n ** 5 - print nodes\n 6- EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            printf ("please enter new name: ");
            scanf("%s",&newName);
            printf ("please enter new ID: ");
            scanf("%d",&newID);

            createNode(newName,newID);
            printf("** created** \n");
            break;

        case 2:
            printf ("please enter ID: ");
            scanf("%d",&newID);
            editNode(newID);
            printf("** updated** \n");
            break;

        case 3:
            printf ("please enter ID: ");
            scanf("%d",&newID);
            deleteNode(newID);
            printf("** deleted** \n");
            break;

        case 4:
            printf ("please enter ID: ");
            scanf("%d",&newID);
            searchNode(newID);
            printf("** done ** \n");
            break;
        case 5:
            printf ("** your nodes ** \n");
            printNode();

            break;

        case 6:
            printf("*******************good bye***************");
            exit(0);

        }
    }


}


