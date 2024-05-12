#include"bits/stdc++.h"
using namespace std;
int partition(vector<int> &arr,int s,int e){
	int pivot=arr[s];
	int count=0;
	
	for(int i=s+1;i<=e;i++){
		if(pivot>=arr[i]){
			count++;
		}
	}
	int index=count+s;
	swap(arr[s],arr[index]);
	
	int i=s,j=e;
	while(i<index && j>index){
		while(arr[i]<pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;	
		}
		if(i<index && j>index){
			swap(arr[i++],arr[j--]);//first swapping then changing the values
		}
	}
	return index;
}
void quicksort(vector<int> &arr,int s,int e){
	if (s>=e)
		return;
	int p=partition(arr,s,e);
	quicksort(arr,s,p-1);
	quicksort(arr,p+1,e);
}

int main(){
	vector<int> arr;
	int n=7,x;
	cout<<"Enter the elements "<<endl;
	
	for(int i=0;i<n;i++){
		cin>>x;
		arr.push_back(x);
	}
	quicksort(arr,0,n-1);
	
	for(int j=0;j<n;j++){
		cout<<arr[j]<<" ";
	}
	
	return 0;
}
