// // Factorial
// #include <bits/stdc++.h>
// using namespace std;
// long long fact(int n){
// 	if(n==0) return 1;
// 	return fact(n-1)*n;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<fact(n)<<endl;
// }



// // Sorting Array
// #include<bits/stdc++.h>
// using namespace std;

// void insert(vector<int> &v, int last){
// 	if(v.empty() || v[v.size()-1]<=last){
// 		v.push_back(last);
// 		return;
// 	}
// 	int val=v[v.size()-1];
// 	v.pop_back();
// 	insert(v,last);
// 	v.push_back(val);
// }

// void doSort(vector<int> &v){
// 	if(v.size()==1) return;
// 	int last=v[v.size()-1];
// 	v.pop_back();
// 	doSort(v);
// 	insert(v,last);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int> v(n);
// 	for(int i=0;i<n;i++){
// 		cin>>v[i];
// 	}
// 	doSort(v);
// 	for(int i=0;i<n;i++){
// 		cout<<v[i]<<" ";
// 	}
// }



// // Removing middle element from stack
// #include<bits/stdc++.h>
// using namespace std;

// void removeMiddleElement(stack<int> &st, int n, int current){
// 	if(current==n/2){
// 		st.pop();
// 		return;
// 	}
// 	int last=st.top();
// 	st.pop();
// 	removeMiddleElement(st,n,current+1);
// 	st.push(last);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	stack<int> st;
// 	for(int i=0;i<n;i++){
// 		int x;
// 		cin>>x;
// 		st.push(x);
// 	}
// 	removeMiddleElement(st,n,0);
// 	for(int i=0;i<n;i++){
// 		cout<<st.top()<<endl;
// 		st.pop();
// 	}
// }



// // Reverse a stack using recursion
// #include<bits/stdc++.h>
// using namespace std;

// void insertBottom(stack<int> &st,int value){
// 	if(st.empty()){
// 		st.push(value);
// 		return;
// 	}
// 	int current=st.top();
// 	st.pop();
// 	insertBottom(st,value);
// 	st.push(current);
// }

// void reverseStack(stack<int> &st){
// 	if(st.empty()) return;
// 	int last=st.top();
// 	st.pop();
// 	reverseStack(st);
// 	insertBottom(st,last);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	stack<int> st;
// 	for(int i=0;i<n;i++){
// 		int x;
// 		cin>>x;
// 		st.push(x);
// 	}
// 	reverseStack(st);
// 	for(int i=0;i<n;i++){
// 		cout<<st.top()<<endl;
// 		st.pop();
// 	}
// }


// Kth elemenet in grammer (link: https://leetcode.com/problems/k-th-symbol-in-grammar/description/)