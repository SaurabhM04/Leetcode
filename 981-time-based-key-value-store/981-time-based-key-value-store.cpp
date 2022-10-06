class TimeMap {
public:
    unordered_map<string, map<int, string>> mp;
    TimeMap() {
        
    }
 void set(string key, string value, int timestamp)
 {
    mp[key].insert({ timestamp, value });
 }
    
    string get(string key, int timestamp) {
       
        auto itr = mp[key].upper_bound(timestamp);
        if(itr == mp[key].begin())
        return "";
        itr--;
        int time = itr -> first;
        
        return mp[key][time];
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */