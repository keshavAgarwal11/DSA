
class MyStack {

    queue <int>q;
public:
    MyStack() {
        //  MyStack myStack = new Mystack();
    }
    
    void push(int x) {
        
          q.push(x);
          int siz = q.size();

        for(int i=1 ; i<siz ;i++){


          q.push(q.front());
          q.pop();

        }
          

    }                                                                          
    
    int pop() {
        

       int val = q.front();
        q.pop();
        return val;
     



    }
    
    int top() { 
        
        return q.front();
    }
    
    bool empty() {
           return q.empty();
           
    } 
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */