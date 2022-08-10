# include<bits/stdc++.h>

using namespace std;

void negatbeg1(int a[],int n){
    int j = 0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }
}

void netatbeg2(int a[],int n){
    int start=0,end=n-1;
    while(start<=end){
        if(a[start]<0 and a[end]<0){
            start++;
        }
        else if(a[start]>0 and a[end]>0){
            end--;
        }
        else if(a[start]<0 and a[end]>0){
            start++;
            end--;
        }
        else{
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end--;
        }
    }
}

void netatbeg3(int a[], int n){
    int lo=0,hi=n-1;
    while(lo<=hi){
        if(a[lo]<0)
        lo++;
        else if(a[hi]>0)
        hi--;
        else{
            int temp = a[lo];
            a[lo] = a[hi];
            a[hi] = temp;
        }
    }
}



void print(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int a[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(a)/sizeof(a[0]);
    negatbeg1(a,n);
    print(a,n);
    netatbeg2(a,n);
    print(a,n);
    netatbeg3(a,n);
    print(a,n);
}

