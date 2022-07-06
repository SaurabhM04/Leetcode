class MyCircularQueue
{
public:
    int sm;
    int i = 0;
    queue<int> q;

    MyCircularQueue(int k)
    {
        sm = k;
    }

    bool enQueue(int value)
    {

        if (sm <= i)
            return false;
        i++;

        q.push(value);
        return true;
    }

    bool deQueue()
    {

        if (q.empty())
            return false;
        i--;
        q.pop();
        return true;
    }

    int Front()
    {

        if (q.empty())
            return -1;
        return q.front();
    }

    int Rear()
    {
        if (q.empty())
            return -1;
        return q.back();
    }

    bool isEmpty()
    {
        if (q.empty())
            return true;
        return false;
    }

    bool isFull()
    {
        if (sm <= i)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */