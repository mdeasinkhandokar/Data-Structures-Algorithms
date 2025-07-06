
 #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

/*

//set<int>s={1,1,2,3,4,5,3,2,3,1};
//cout<<s.size()<<endl;
/*
for(auto c:s)cout<<c<<" ";
cout<<endl;
*/


///iterator
/*
set<int>::iterator it;
for(it=s.begin();it !=s.end();it++)cout<<*it<<" ";
cout<<endl;

*/

//s.clear();
//cout<<s.empty()<<endl;

/*
set<int>s;
s.insert(1);
s.insert(1);
s.insert(2);
s.insert(2);
s.insert(2);
s.insert(3);
s.insert(3);


s.insert(4);


/*

cout<<s.size()<<endl;
for(auto u:s)cout<<u<<" ";
cout<<endl;
*/

///count
//cout<<s.count(4)<<endl;

/*
cout<<*s.begin()<<endl;
cout<<*s.end()<<endl;

cout<<*s.rbegin()<<endl;

//s.erase(3);

//s.erase(s.begin());

s.erase(--s.end());




cout<<s.size()<<endl;
for(auto u:s)cout<<u<<" ";
cout<<endl;

*/


///string
	set<string> s2;

	s2.insert ( "momo" );
	s2.insert ( "momo" );
	s2.insert ( "prety" );
	s2.insert ( "prety" );
	s2.insert ( "jui" );
	s2.insert ( "nobel" );
	s2.insert ( "sharif" );
	s2.insert ( "proma" );

	cout << s2.size() << endl;
	for ( auto u : s2 ) cout << u << endl;




	/// set of pair
	set<pair<int, int>> s1;

	s1.insert ( { 1, 2 } );
	s1.insert ( { 1, 2 } );
	s1.insert ( { 4, 2 } );
	s1.insert ( { 4, 3 } );
	s1.insert ( { 2, 2 } );
	s1.insert ( { 2, 1 } );
for(auto u:s1)cout<<u.first<<" "<<u.second<<endl;
cout<<endl;


return 0;
}

