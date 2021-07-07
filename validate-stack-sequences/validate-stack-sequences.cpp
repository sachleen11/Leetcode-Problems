class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if(pushed.size() <= 1)
            return true;
        stack<int> myStack;
        for(int i = 0; i < pushed.size(); i++){
            myStack.push(pushed[i]);
            while(!myStack.empty() && myStack.top() == popped[0]){
                myStack.pop();
                popped.erase(popped.begin());
            }
        }
        if(myStack.empty())
            return true;
        return false;
    }
};