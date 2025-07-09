#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///https://www.hackerrank.com/challenges/cpp-sets/problem
int main(){

optimize();

set<int>s;
int q;
cin>>q;



while(q--){
        int type,x;
cin>>type>>x;

if(type==1)s.insert(x);
else if(type==2)s.erase(x);
else{
    if(s.count(x)==1)cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
}

}



return 0;
}


