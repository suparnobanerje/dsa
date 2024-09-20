/* Lower bound returns address of the first occurance of the element in the array 
or the next greater element if the original element isn't present.

Upper bound returns always the address of the next greater element in array.

If the next greater is not present it returns the next address of last element. 

For vectors it returns iterator instead of address.

Note- Array should be sorted before applying lb/ub
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	// int arr[n];
	vector<int> v(n);
	for(int i=0;i<n;i++){
		// cin>>arr[i];
		cin>>v[i];
	}
	// sort(arr,arr+n);
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		// cout<<arr[i]<<" ";
		cout<<v[i]<<" ";
	}
	cout<<endl;
	// cout<<*(upper_bound(arr,arr+n,20))<<endl;
	auto it=lower_bound(v.begin(),v.end(),101);
	if(it!=v.end()) cout<<*it<<endl;
	else cout<<"Not found"<<endl;         // for vectors & arrays the TC is O(log n) and it uses binary search
} 										  // for sets & maps the TC is O(n) as it uses trees		
