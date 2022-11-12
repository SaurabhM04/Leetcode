// USING ORDERED SET
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less_equal <int>, rb_tree_tag,tree_order_statistics_node_update>

class MedianFinder {
public:

ordered_set s;
MedianFinder() {
    
}

void addNum(int num) 
{
   s.insert(num);
}

double findMedian() {
    
    int n=s.size();
    if(n%2==0)
    {
        return (double)(*s.find_by_order(n/2)+*s.find_by_order(n/2-1))/2 ;
        
    }
    return *s.find_by_order(n/2);
}
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */