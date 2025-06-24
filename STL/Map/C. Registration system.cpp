#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);



///https://codeforces.com/contest/4/problem/C
int main(){

optimize();

int t;
cin>>t;


map<string,int>cnt;
while(t--){
    string s;
    cin>>s;
    if(cnt[s]==0)cout<<"OK"<<endl;
    else cout<<s<<cnt[s]<<endl;

    cnt[s]++;
}


return 0;
}


