#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int x){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==x){
			return mid;
		}
		if(arr[mid]<x){
			low=mid+1;
		}
		else{
			high = mid+1;
		}
	}
	return -1;
}
int main(){
	int n,x;
	cout<<"Enter the size of Array :";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of the Array :"<<endl;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements whose position you want to search :";
    cin>>x;

    int result = BinarySearch(arr,n,x);

    if (result != -1)
    {
        cout<<"Element found at index:"<<result;
    }
    else{
        cout<<"Element not found in Array";
    }
    return 0;
}
