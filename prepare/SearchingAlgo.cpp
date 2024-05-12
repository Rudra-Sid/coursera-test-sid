#include<bits/stdc++.h>
using namespace std;

class SearchingAlgo{
	public:
		vector<int> arr;
	SearchingAlgo(int n){
		int a;
		cout<<"enter the elements of the array :"<<endl;
		for(int i=0 ; i<n; i++)
    {
        cin>>a;
        arr.push_back(a);
    }
	}
	
		
	int linearSearchIterative(int key){
		for(int i=0;i<arr.size();i++){
			if(arr[i]==key)
			return i;
		}
		return -1;
	}
	
	int linearSearchRecursive(int key,int i){
		if(arr[i]==key){
			return i;
		}
		else if(i==arr.size()){
			return -1;
		}
		return linearSearchRecursive(key,i+1);
	}
	
	int binarySearchIterative(int key){
		sort(arr.begin(), arr.end());
		int s=0,e=arr.size();
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
	
	int binarySearchRecursive(int key,int e,int s){
	sort(arr.begin(), arr.end());
	if(e>=s){
	int mid=(e+s)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]>key){
		return binarySearchRecursive(key,mid-1,s);
	}
	else{
		return binarySearchRecursive(key,e,mid+1);
	}
	}
return -1;
	}
};

int main(){
	int i=0,size=8,find;
	cout<<"Element to be found: ";
	cin>>find;
	SearchingAlgo v1(size);
	cout<<"element found by linear search iteratively at index: ";
	cout<<v1.linearSearchIterative(find)<<endl;
	cout<<"element found by linear search Recursively at index: ";
	cout<<v1.linearSearchRecursive(find,i)<<endl;
	cout<<"element found by binary search iteratively at index: ";
	cout<<v1.binarySearchIterative(find)<<endl;
	cout<<"element found by binary search Recursively at index: ";
	cout<<v1.binarySearchRecursive(find,size,i)<<endl;
	return 0;
}
