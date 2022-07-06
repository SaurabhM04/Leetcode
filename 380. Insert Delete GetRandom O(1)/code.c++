class RandomizedSet
{
private:
    vector<int> a; // array vector
    unordered_map<int, int> m;

public:
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if (m.find(val) != m.end())

            return false;
        else
        {
            a.push_back(val);
            m[val] = a.size() - 1; // m[key,value] stores the array element and
                                   // its index as key=array element & value=array element index
            return true;
        }
    }

    bool remove(int val)
    {
        if (m.find(val) == m.end())
            return false;
        else
        {

            int last = a.back();  // back() fetches last element of the array vector
            a[m[val]] = a.back(); // m[val] locates the index of val in the array vector.
                                  // Then we copy array last element value to the val location in the array
            a.pop_back();
            m[last] = m[val]; // In hashmap, assign index of val in array to the index of the last element
            m.erase(val);
            return true;
        }
    }

    int getRandom()
    {

        return a[rand() % a.size()];
    }
};
/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */