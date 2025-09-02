#include <iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);

    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i];
    }
}
int main(){
    int arr[5]={4,2,3,1,5};
    selectionsort(arr,5);
    printarray(arr,5);
    return 0;
}