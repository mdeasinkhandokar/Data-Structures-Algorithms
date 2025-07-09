#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


///https://codeforces.com/problemset/problem/469/A

int main(){

optimize();

set<int>s;

int n;
cin>>n;

int p;
cin>>p;
for(int i=0;i<p;i++){
    int a;
    cin>>a;
    s.insert(a);

}
cin>>p;
for(int i=0;i<p;i++){
    int a;
    cin>>a;
    s.insert(a);
}
if(s.size()==n)cout<<"I become the guy."<<endl;
else cout<<"Oh, my keyboard!"<<endl;


return 0;
}


