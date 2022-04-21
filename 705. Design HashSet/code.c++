

class MyHashSet {
public:
  
    vector<bool>smile;
    MyHashSet() {
       smile.resize(1e6+1);
    }
    
    void add(int key) {
        smile[key]=true;
    }
    
    void remove(int key) {
       smile[key]=false; 
    }
    
    bool contains(int key) {
        return smile[key];
        
    }
};