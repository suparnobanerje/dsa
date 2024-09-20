#include <bits/stdc++.h>
using namespace std;

// Selection Sort | TC: O(n^2)
void selectionSort(int arr[],int n){  
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]) min=j;
		}
		swap(arr[i],arr[min]);
	}
}

// Insertion Sort | TC: O(n) best case, O(n^2) avg & worst case
void insertionSort(int arr[],int n){
	for(int j=1;j<n;j++){
		int key=arr[j];
		for(int i=j-1;arr[i]>key && i>=0;i--){
			arr[i+1]=arr[i];
			arr[i]=key;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	// selectionSort(arr,n); 
	insertionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}


// // Merge Sort | TC: O(n log n)
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+10;
// int arr[N];

// void merge(int l, int r, int mid){
// 	int l_size=mid-l+1;
// 	int l_array[l_size+1];
// 	int r_size=r-(mid+1)+1;
// 	int r_array[r_size+1];
// 	for(int i=0;i<l_size;i++){
// 		l_array[i]=arr[i+l];
// 	}
// 	for(int i=0;i<r_size;i++){
// 		r_array[i]=arr[i+mid+1];
// 	}
// 	l_array[l_size]=INT_MAX;
// 	r_array[r_size]=INT_MAX;
// 	int l_i=0;
// 	int r_i=0;
// 	for(int i=l;i<=r;i++){
// 		if(l_array[l_i]<=r_array[r_i]){
// 			arr[i]=l_array[l_i];
// 			l_i++;
// 		}
// 		else {
// 			arr[i]=r_array[r_i];
// 			r_i++;
// 		}
// 	}
// }

// void doMergeSort(int l,int r){
// 	if(l==r) return;
// 	int mid=(l+r)/2;
// 	doMergeSort(l,mid);
// 	doMergeSort(mid+1,r);
// 	merge(l,r,mid);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	doMergeSort(0,n-1);
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
// }