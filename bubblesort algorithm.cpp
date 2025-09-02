#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
	for( int i=0;i<n-1;i++){
		bool isSwap=false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				isSwap=true;
			}
		}
		if(isSwap!=true){
			return;
		}
	}
}
void printarray(int arr[],int n){
	for (int i=0;i<n;i++){
		cout<<arr[i];
    }
}
int main(){
	int arr[5]={4,1,2,5,6};
	bubblesort(arr,5);
	printarray(arr,5);
	return 0;
}
