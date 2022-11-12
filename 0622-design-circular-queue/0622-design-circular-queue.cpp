//so to approach this problem we could make a infinite size vector with just two pointer l and r 
// but efficient approach would be to make the vector of current given size and when the pointer exceed their limit just move them to 0 and for counting elements use another variable count. 

class MyCircularQueue {
public:
    int left,right,queue_size,count;
    vector<int>circular;
    MyCircularQueue(int k) {
        left=0;
        right=0;
        count=0;
        queue_size=k;
        circular.resize(k);
    }
    
    bool isEmpty() {
        return count==0;
    }
    
    bool isFull() {
        return count==queue_size;
    }
    
    bool enQueue(int value) {
        if(not isFull()) {
            count++;
            if(right==queue_size) {
                right=0;
            }
            circular[right]=value;
            right++;   
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(not isEmpty()) {
            count--;
            if(left==queue_size) {
                left=0;
            }
            left++; 
            return true;
        }
        return false;
    }
    
    int Front() {
        if(not isEmpty()) {
            if(left==queue_size) { // if left pointer at the moment is out of bound then first point it to 0
                left=0;
            }
            return circular[left];
        }
        return -1;
    }
    
    int Rear() {
        if(not isEmpty()) {
            if(right==0) { //here we are accessing right-1 so there is no problem when r==queue_size but if r==0 then we will get an error so point r to one index after the last enqueued element
                right=0;
            }
            return circular[right-1];
        }
        return -1;
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