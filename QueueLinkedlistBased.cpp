#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

struct _queue
{
    node* Front=NULL;
    node* Back=NULL;
    int Size=0;
};

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


int main()
{
    _queue q;

    _push(q,5);
    _push(q,6);
    cout<<"the size is "<<_size(q)<<endl;
    cout<<_front(q)<<endl;
    cout<<_back(q)<<endl;
    cout<<"------------------------------------\n";
    if(!_empty(q))
    _pop(q);
    else
    cout<<"The Queue is Empty \n";
    cout<<_front(q)<<endl;
    cout<<_back(q)<<endl;
    return 0;
}
