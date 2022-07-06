class MyCalendar
{
public:
    vector<pair<int, int>> p;
    MyCalendar()
    {
    }

    bool book(int start, int end)
    {

        for (int i = 0; i < p.size(); i++)
        {
            if (start >= p[i].second || (end <= p[i].first))
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        p.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */