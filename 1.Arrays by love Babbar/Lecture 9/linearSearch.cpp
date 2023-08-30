#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int n,int k){
    for(int i = 0;i<n;i++){
        if(arr[i]==k){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5,7,-4,3,6,8,10,9,32,44};
    cout<<"Enter the Element to search for "<<endl;
    int key;
    cin>>key;

    bool found = search(arr,10,key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
    return 0;
}