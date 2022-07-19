class MyLinkedList
{
public:
    vector<int> v;
    MyLinkedList()
    {
    }

    int get(int index)
    {
        if (index >= v.size())
            return -1;
        return v[index];
    }

    void addAtHead(int val)
    {
        v.insert(v.begin(), val);
    }

    void addAtTail(int val)
    {
        v.push_back(val);
    }

    void addAtIndex(int index, int val)
    {
        if (index < v.size())
            v.insert(v.begin() + index, val);
        else if (index == v.size())
            v.push_back(val);
    }

    void deleteAtIndex(int index)
    {
        if (index < v.size())
            v.erase(v.begin() + index);
    }
};
