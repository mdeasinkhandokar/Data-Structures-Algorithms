#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();


//priority_queue<int>q;

//decresing order
/*
priority_queue<int, vector<int>,greater<int>>q;


q.push(1);
q.push(2);
q.push(7);
q.push(4);

*/

/*
cout<<q.top()<<endl;
q.pop();
cout<<q.top()<<endl;


*/



priority_queue<pair<int,int>>q;

q.push({1,2});
q.push({2,3});
q.push({2,4});
q.push({4,4});
q.push({3,4});


while(!q.empty()){
    cout<<q.top().first<< " "<<q.top().second<<endl;
    q.pop();
}




/*
while(!q.empty()){
    cout<<q.top()<<endl;
    q.pop();
}
*/


cout<<q.size()<<endl;

return 0;
}


