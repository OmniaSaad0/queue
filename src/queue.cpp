#ifdef ARRAY_BASED_QUEUE

#include "../include/queue.h"
void _push(_queue &que,int value )
{
    que.Back=(que.Back+1)%MaxQueue;
    que.Que[que.Back]=value;
    que.Size++;
}

void _pop(_queue &que)
{
    que.Front=(que.Front+1)% MaxQueue;
    que.Size--;
}

int _front(_queue &que)
{
    return que.Que[que.Front];
}

int _back(_queue &que)
{
    return que.Que[que.Back];
}

int _size(_queue &que)
{
    return que.Size;
}

bool _empty(_queue &que)
{
    if (que.Size==0)
        return true;
    return false;
}


#else

#include "../include/queue.h"


void _push(_queue &que,int value)
{
   node* NewNode=new node;
   NewNode->data=value;
   NewNode->next=NULL;
   if(!que.Front)
   {
       que.Front=NewNode;
       que.Back=NewNode;
   }
   else
   {
       que.Back->next=NewNode;
       que.Back=NewNode;
   }
   que.Size++;
}

void _pop(_queue &que)
{
    node* TempPtr=que.Front;
    que.Front=que.Front->next;
    delete TempPtr;
    que.Size--;
}

int _front(_queue &que)
{
    return que.Front->data;
}

int _back(_queue &que)
{
    return que.Back->data;
}

int _size(_queue &que)
{
    return que.Size;
}

bool _empty(_queue &que)
{
    if(!que.Front)
        return true;
    return false;
}

#endif
