class DataStream {
public:
    int m=0,n=0;
    DataStream(int value, int k) {
        m=value;
        n=k;
    }
    queue<int>q;
    bool consec(int num) {
        if(num!=m){
        while(!q.empty())
            q.pop();
        }
        if(num==m){
            q.push(num);
        }
        if(q.size()==n){
            q.pop();
            return true;
        }
//         if(q.size()>n){
            
//         }
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */