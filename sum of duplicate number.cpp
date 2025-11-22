#include<iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n]={1,1,2,2,3,3,4,4,5,5};
    int i,j;
    int sum=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                sum=sum+arr[i];
            }
        }
    }
    cout<<sum;
    return 0;
}
