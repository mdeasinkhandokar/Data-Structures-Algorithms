
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

deque<int> dq;
dq.push_front(1);
dq.push_front(2);
dq.push_front(3);


dq.push_back(4);
dq.push_back(5);

cout<<dq.front()<<" "<<dq.back()<<endl;
dq.pop_front();
cout<<dq.front()<<" "<<dq.back()<<endl;
dq.pop_back();
cout<<dq.front()<<" "<<dq.back()<<endl;

cout<<dq.size()<<endl;
cout<<dq.empty()<<endl;

return 0;
}

