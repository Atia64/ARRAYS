#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter element number of array:";
cin>>n;
int arr[n];
int i,j;
int sum=0;
cout<<"Enter elements of array:";
for(i=0;i<n;i++){
    cin>>arr[i];
}
bool visited[n]={false};
for(i=0;i<n;i++){
    if(visited[i]==true){
        continue;
    }
    int count=1;
   for(j=i+1;j<n;j++){
    if(arr[i]==arr[j]){
        count++;
        visited[j]=true;
    }
   }
  if(count>1){
    sum=sum+arr[i];
  }
}
cout<<"Sum of duplicate numbers = "<<sum;
return 0;
}

