
///https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here

    stack<int> st;
    queue<int> ret;

    while ( k-- ) {
        st.push ( q.front() );
        q.pop();
    }

    while ( !st.empty() ) {
        ret.push ( st.top() );
        st.pop();
    }

    while ( !q.empty() ) {
        ret.push ( q.front() );
        q.pop();
    }

    return ret;

    }
};
