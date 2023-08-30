#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start++],arr[end--]);
    }

}
void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {1,4,0,5,2,15};
    int brr[5] = {2,5,6,7,9};

    reverse(arr,6);
    printArray(arr,6);

    reverse(brr,5);
    printArray(brr,5);

    return 0;
}