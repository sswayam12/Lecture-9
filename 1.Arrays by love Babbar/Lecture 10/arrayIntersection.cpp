#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int>arr1,int n,vector<int>arr2,int m){
    int i = 0;int j = 0;
    vector<int>ans;

    while(j<m && i<n){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){


    return 0;

}