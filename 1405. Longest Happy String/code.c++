class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
    
priority_queue<pair<int, char>> pq;
if (a > 0)
{
    pq.push({a, 'a'});
}
if (b > 0)
{
    pq.push({b, 'b'});
}
if (c > 0)
{
    pq.push({c, 'c'});
}
string res = "";
while (pq.size() > 1)
{
    auto top1 = pq.top();
    pq.pop();
    auto top2 = pq.top();
    pq.pop();
    if (top1.first - top2.first >= 3)
    {
        for (int i = 0; i < 2; i++)
        {
            res += top1.second;
            top1.first--;
        }
        res += top2.second;
        top2.first--;
    }
    else
    {
        for (int i = 0; i < 2 && top1.first > 0; i++, top1.first--)
        {
            res += top1.second;
        }
        for (int i = 0; i < 2 && top2.first > 0; i++, top2.first--)
        {
            res += top2.second;
        }
    }
    if (top1.first > 0)
    {
        pq.push(top1);
    }
    if (top2.first > 0)
    {
        pq.push(top2);
    }
}
if (pq.size() == 1)
{
    auto top = pq.top();
    for (int i = 0, c = top.first; i < 2 && c > 0; i++, c--)
    {
        res += top.second;
    }
}
return res;
        
    }
};