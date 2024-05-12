#include<bits/stdc++.h>
using namespace std;

bool binary(int arr[],int e,int s,int key){
	
	if(e>=s){
		int mid=(e+s)/2;
	
	if(arr[mid]==key){
		return true;
	}
	else if(arr[mid]>key){
		return binary(arr,mid-1,s,key);
	}
	else{
		return binary(arr,e,mid+1,key);
	}
}
return -1;
}

int linearSearchRecursive(int arr[],int key,int i){
		if(arr[i]==key){
			return i;
		}
		else if(i==sizeof(arr)){
			return -1;
		}
		return linearSearchRecursive(arr,key,i+1);
	}
int main(){
	int n=10,k=8,s=0;
	int arr[n]={1,2,3,4,5,6,99,8,9,54};
	cout<<binary(arr,n,s,k);
	return 0;
	
}
