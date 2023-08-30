#include<bits/stdc++.h>
using namespace std;

void update(int arr[],int n){
    cout<<endl<<"Inside the function"<<endl;

//    Updating array's first element
    arr[0] = 120;

    // printing the array
    for(int i = 0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to the main function"<<endl;


}
int main(){

    int arr[3] ={1,2,3};

    update(arr,3);

    // printing the array
    cout<<endl<<"Printing in main Function"<<endl;
    for(int i = 0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;


}