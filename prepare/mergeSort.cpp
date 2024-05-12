#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e){
	int mid=(s+e)/2;
	
	int n1=mid-s+1;
	int n2=e-mid;
	
	int a[n1];
	int b[n2];
	
	for(int i=0;i<n1;i++){
		a[i]=arr[s+i];
	}
	for(int j=0;j<n2;j++){
		b[j]=arr[mid+1+j];
	}
	int i=0,j=0,k=s;
	
	while(i<n1 && j<n2){
		if(a[i]<b[j]){
			arr[k]=a[i];
			k++; i++;
		}
		else{
			arr[k++]=b[j++];
		}
	}
	while(i<n1){
		arr[k]=a[i];
		k++; i++;
	}
	while(j<n2){
		arr[k++]=b[j++];
	}
}
void mergeSort(int arr[],int s,int e){
	if(s<e){
		int mid=(e+s)/2;
		mergeSort(arr,s,mid);
		mergeSort(arr,mid+1,e);
		
		merge(arr,s,e);
	}
}


int main(){
	int n=5;
	int arr[n]={5,2,4,9,1};
	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
