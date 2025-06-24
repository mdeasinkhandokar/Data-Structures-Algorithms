#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///https://codeforces.com/contest/903/problem/C


const int mx=5e3+123;
int a[mx];

int main(){

optimize();

map<int,int>freq;
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
    freq[a[i]]++;

}
int ans=0;
for( int i = 0; i < n; i++ ) ans = max ( ans, freq[a[i]] );
cout<<ans<<endl;



return 0;
}


