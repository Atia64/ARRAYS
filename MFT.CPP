#include<iostream>
using namespace std;
int main(){
int nob,bs,ms,ef,n,mp[n],tif=0,p=0,i;
cout<<"Enter memory size:";
cin>>ms;
cout<<"Enter number of block:";
cin>>nob;
cout<<"Enter block size:";
cin>>bs;
ef=ms-(nob*bs);
cout<<endl;
cout<<"Enter array number:";
cin>>n;
for(i=1;i<=n;i++){
    cout<<"Enter memory required for process :"<<i<<endl;
    cin>>mp[i];
}
for(i=1;i<=n;i++){
    if(mp[i]>bs){
        cout<<"No"<<endl;
    }
        else{
            cout<<"Yes"<<bs-mp[i]<<endl;
            tif=tif+bs-mp[i];
            p++;
        }
    }
if(i<n)
    cout<<"\n\nMemory is full,Remaining Processes can not Accommodate"<<endl;
    cout<<"External Fragmentation= "<<ef<<endl;
    cout<<"Internal Fragmentation= "<<tif<<endl;


return 0;
}


