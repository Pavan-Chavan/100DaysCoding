#include<iostream>
using namespace std;

void printArr(int arr[],int m){
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void helper(int arr[],int m)
{
    int l=0,r=m-1,temp;
    while(l<r){
        while(arr[l] < 0)
            l++;
        while(arr[r] > 0)
            r--;
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;r--;
     }
     printArr(arr,m);
}
int main(){
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    helper(arr,9);
}
