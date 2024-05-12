#include<bits/stdc++.h>
using namespace std;
class Sorting{
	public:
		vector<int> arr;
	Sorting(int size){
		int x;
		cout<<"Enter the elements into arrray : "<<endl;
		for(int i=0;i<size;i++){
			cin>>x;
			arr.push_back(x);
		}
	}
	void InsertionSort(){
		for(int i=1;i<arr.size();i++){
			int key=arr[i];
			int j=i-1;
			while(j>=0 && arr[j]>key){
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=key;
		}
		
	}
	void BubbleSort(){
		for(int i=0;i<arr.size()-1;i++){
			for(int j=0;j<arr.size()-1;j++){
				if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
			}
		}
	}
	
	void SelectionSort(){
		for(int i=0;i<arr.size()-1;i++){
			int j=i;
			int min=i;
			while(j<arr.size()){
				if(arr[j]<arr[min]){
				min=j;}
				j++;
			}
			swap(arr[i],arr[min]);
		}
	}
	void display(){
		cout<<endl;
		for (int i=0;i<arr.size();i++){
			cout<<arr[i]<<" ";
		}
	}
};


int main(){
	cout<<"give the size : "<<endl;
	int n;
	cin>>n;
	Sorting ob(n);
	//ob.InsertionSort();
	//ob.BubbleSort();
	ob.SelectionSort();
	ob.display();
	return 0;
}
