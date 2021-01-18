#include <iostream>
using namespace std;
#define MaxQueue 100000
struct _queue
{
    int Front=0;
    int Back=-1;
    int Size=0;
    int Que[MaxQueue];
};

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
