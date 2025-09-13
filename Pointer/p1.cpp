#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

int a= 10;
int *p=&a;
*p=20;

cout<< &a<<" " <<p<< " "<<*p<<endl;
cout<<*p<<" " <<a<<endl;


return 0;
}


