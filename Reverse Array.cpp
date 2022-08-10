# include<bits/stdc++.h>

using namespace std;

void reverse(int a[], int n){
    int start=0, end=n-1;
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void recurse(int a[],int start, int end){
    if(start>end){
        return;
    }
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    recurse(a,start+1,end-1);
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
    recurse(a,0,n-1);
    print(a,n);
}



