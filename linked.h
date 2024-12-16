#ifndef LINKED_H_INCLUDED
#define LINKED_H_INCLUDED

#include"STD_TYPES.h"

typedef struct node
{
    u8 name[20];
    u32 id;
    struct node * next;

} myNode;


void createNode(u8 * name, u32 id);
void printNode(void);
void searchNode(u32 id);
void editNode(u32 id);
void deleteNode(u32 id);

void LINKED_LIST_APP(void);



#endif // LINKED_H_INCLUDED
