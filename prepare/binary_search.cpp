#include<bits/stdc++.h>
using namespace std;

int binary(int arr[],int size,int key){
	int s=0,e=size;
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return -1;
}

int main(){
	int n=10,k=8;
	int arr[n]={1,2,3,4,5,6,7,8,9,54};
	cout<<binary(arr,n,k);
	return 0;
	
}
