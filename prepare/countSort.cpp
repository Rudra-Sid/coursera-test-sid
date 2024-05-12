#include<bits/stdc++.h>
using namespace std;

void countSort(vector<int> &arr){
	int m=arr[0],s=arr.size();
	for(int i=1;i<s;i++){
		m=max(m,arr[i]);
	}
	vector<int> count(m+1,0);
	for(int i=0;i<s;i++){
		count[arr[i]]++;
	}
	for(int i=1;i<=m;i++){
		count[i]+=count[i-1];
	}
	vector<int> output(s);
	for(int i=s-1;i>=0;i--){
		output[--count[arr[i]]]=arr[i];
	}
	for(int i=0;i<s;i++){
		arr[i]=output[i];
	}
	
}

int main(){
	vector<int> test;
	int val;
	cout<<"enter the array elements "<<endl;
	for(int i=0;i<5;i++){
		cin>>val;
		test.push_back(val);
	}
	countSort(test);
	cout<<"sorted array : ";
	for(int i=0;i<5;i++){
		cout<<test[i]<<" ";
	}
	
	return 0;
}
