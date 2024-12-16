#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

enum check
{
    FULL,
    EMPTY,
    NOT_FULL,
    NOT_EMPTY,
};
enum check isFull_QUEUE(void);
enum check isEmpty_QUEUE(void);
void enqueue(void);
void dequeue(void);
void display_queue(void);
void QUEUE_APP(void);


#endif // QUEUE_H_INCLUDED
