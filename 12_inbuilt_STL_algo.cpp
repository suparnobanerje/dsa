#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	
	// Lambda Function
	cout<<[](int x, int y){return x+y;}(x,y)<<endl;
	auto mul=[](int x, int y){return x*y;}(x,y);
	cout<<mul<<endl;

	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	// all_of function checks if all elements satisfies a given function. It returns boolean value 1 or 0
	cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

	// any_of function checks if any element satifies a given function, then it returns true else false
	cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

	// none_of function checks if none of the elements satisfies the function, then it returns true else false
	cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
}