#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

multiset<int>s;

s.insert(1);
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(2);
s.insert(4);
s.insert(1);
s.insert(1);
s.insert(6);
s.insert(5);


/*
cout<<s.size()<<endl;
for(auto u:s)cout<<u<< " ";
cout<<endl;

///count
cout<<s.count(1)<<endl;


s.erase(1);
for(auto u:s)cout<<u<< " ";
cout<<endl;///2 2 3 4 5 6
*/



///1 item delete
auto it=s.find(1);
s.erase(it);

for(auto u:s )cout<<u<< " ";
cout<<endl;///1 1 1 2 2 3 4 5 6


return 0;
}


