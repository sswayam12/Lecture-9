#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Printing the arrays "<<endl;

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Printing DONE"<<endl;
    
}

int main(){
    
    // declare
    int number[15];

    // accessing the array
    cout<<"Value at zero index"<<number[0]<<endl;

    // initialising the array
    int second[3] = {5,7,11};

    // acccessing the element
    cout<<"Value at 2 index is"<<second[2]<<endl;

    int third[15] = {2,7};
    int n = 15;
    printArray(third,15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout<<"Size of Third is "<<thirdSize<<endl;

    // Initializing all location with 0
    int fourth[10] = {0};

    n = 10;
    // cout<<"Printing the fourth array : "<<endl;
    // printArray(fourth,10);

    // Initializing all the array  location  with 1[not possible with below line]
    // using fill_n() it can be solved

    int fifth[10] = {1};
    n = 10;

    // printArray(fifth,10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"Size of Fifth is "<<fifthSize<<endl;

    char ch[5] = {'a','b','c','d','e'};
    cout<<ch[3]<<endl;

    cout<<"Printing the array"<<endl;
    // print the array
    for(int i = 0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl<<"Printing Done"<<endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    cout<<endl<<"everything is fine"<<endl<<endl;

    return 0;

}