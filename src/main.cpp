#include <iostream>
using namespace std;

#define ARRAY_BASED_QUEUE
#include "queue.cpp"

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

