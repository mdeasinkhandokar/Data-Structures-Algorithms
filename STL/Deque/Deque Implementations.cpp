
///https://www.geeksforgeeks.org/problems/deque-implementations/1


class Solution {
  public:
    void pb(deque<int>& dq, int x) {
        // code here
        dq.push_back(x);

    }

    void ppb(deque<int>& dq) {


        // code here

        if(!dq.empty())
        dq.pop_back();


    }


    int front_dq(deque<int>& dq) {
        // code here

        if(!dq.empty())
        return dq.front();
        else
        return -1;






    }


    void pf(deque<int>& dq, int x) {
        // code here


        dq.push_front(x);




    }
};
