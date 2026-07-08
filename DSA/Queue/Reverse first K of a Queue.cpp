#include <queue>
#include <stack>

using namespace std;

class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // Edge case: If queue is empty or k is invalid
        if (q.empty() || k <= 0 || k > q.size()) {
            return q;
        }
        
        stack<int> st;
        
        
        for (int i = 0; i < k; i++) {
            st.push(q.front());
            q.pop();
        }
        
        int n = q.size();
        
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }
    
        while (n > 0) {
            q.push(q.front());
            q.pop();
            n--; 
        }
        
        return q;
    }
};
