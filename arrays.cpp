#include<iostream>
using namespace std;
int main(){
int arr[5]={40,10,30,50,20};
int n=5,i,j;
for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
           int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
}
}
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
