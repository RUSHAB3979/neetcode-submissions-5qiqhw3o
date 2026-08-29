class MinStack {
    private:
        std::stack<int> mainStack;
            std::stack<int> minStack;

            public:
                MinStack() {}
                    
                        void push(int val) {
                                mainStack.push(val);
                                        // Push val onto minStack if it is the first element or <= current minimum
                                                if (minStack.empty() || val <= minStack.top()) {
                                                            minStack.push(val);
                                                                    } else {
                                                                                minStack.push(minStack.top());
                                                                                        }
                                                                                            }
                                                                                                
                                                                                                    void pop() {
                                                                                                            mainStack.pop();
                                                                                                                    minStack.pop();
                                                                                                                        }
                                                                                                                            
                                                                                                                                int top() {
                                                                                                                                        return mainStack.top();
                                                                                                                                            }
                                                                                                                                                
                                                                                                                                                    int getMin() {
                                                                                                                                                            return minStack.top();
                                                                                                                                                                }
                                                                                                                                                                };