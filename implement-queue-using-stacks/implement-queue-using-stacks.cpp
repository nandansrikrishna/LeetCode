class MyQueue {
private:
    stack<int> front;
    stack<int> back;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        back.push(x);
    }
    
    int pop() {
        if (front.empty()) {
            while(!back.empty()) {
                front.push(back.top());
                back.pop();
            }
            int first = front.top();
            front.pop();
            return first;
        }
        else {
            int first = front.top();
            front.pop();
            return first;
        }
    }
    
    int peek() {
        if (front.empty()) {
            while(!back.empty()) {
                front.push(back.top());
                back.pop();
            }
            return front.top();
        }
        else {
            return front.top();
        }
    }
    
    bool empty() {
        if (front.empty() && back.empty()) {
            return true;
        }
        else {
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */