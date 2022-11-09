class StockSpanner {
public:
    vector<pair<int,int>>v;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int idx=1;
        while(!v.empty()&&v.back().first<=price)
        {
            idx+=v.back().second;
            v.pop_back();
        }
        v.push_back({price,idx});
        return idx;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */