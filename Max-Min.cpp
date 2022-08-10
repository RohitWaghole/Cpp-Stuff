# include<bits/stdc++.h>

using namespace std;

void max_min(int a[],int n){
    int mx=a[0],mn=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>mx)
        mx=a[i];
        if(a[i]<mn)
        mn=a[i];
    }
    cout<<"max="<<mx<<endl;
    cout<<"min="<<mn<<endl;
}

void print(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    max_min(a,n);
    // print(a,n);
}


