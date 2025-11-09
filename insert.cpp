#include<iostream>
using namespace std;
int main(){
int arr[5];
int n=4,pos;
cout<<"Enter array element:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter position:";
cin>>pos;
int item;
cout<<"Enter item to insert:";
cin>>item;
for(int i=n;i>pos;i--){
    arr[i]=arr[i-1];
}
arr[pos]=item;
n++;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}

