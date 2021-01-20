#ifdef ARRAY_BASED_QUEUE


#define MaxQueue 100000
struct _queue
{
    int Front=0;
    int Back=-1;
    int Size=0;
    int Que[MaxQueue];
};

void _push(_queue &que,int value );

void _pop(_queue &que);

int _front(_queue &que);

int _back(_queue &que);

int _size(_queue &que);

bool _empty(_queue &que);



#else

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

void _push(_queue &que,int value);

void _pop(_queue &que);

int _front(_queue &que);

int _back(_queue &que);

int _size(_queue &que);

bool _empty(_queue &que);

#endif
