# include<bits/stdc++.h>

using namespace std;


void print(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


void sort(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int kthmax(int a[],int k, int n){
    sort(a,n);
    return a[k-1];
}



int main(){
    int a[] = {1,253,2398,152,438,238,9,83,223,323,434,5346,6234};
    int n = sizeof(a)/sizeof(a[0]);
    int k=3;
    int res = kthmax(a,k,n);
    print(a,n);
    cout<<res<<" -> kth element";
    // print(a,n);
}

