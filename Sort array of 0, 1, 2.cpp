# include<bits/stdc++.h>

using namespace std;

void sorted1(int a[], int n){
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        c0++;
        else if(a[i]==1)
        c1++;
        else
        c2++;
    }
    int i=0;
    while(c0!=0){
        a[i]=0;
        c0--;
        i++;
    }
    while(c1!=0){
        a[i]=1;
        c1--;
        i++;
    }
    while(c2!=0){
        a[i]=2;
        c2--;
        i++;
    }
}

void sorted2(int a[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        int temp;
        if(a[mid]==0){
            temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
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
    int a[] = {0,1,1,2,2,1,2,0,0,2,1,1,1,0,0,0,2,2,0,0,1,0,2,1,0,2,0,1,2,0,1,2,0,1,2};
    int n = sizeof(a)/sizeof(a[0]);
    sorted1(a,n);
    sorted2(a,n);
    print(a,n);
}

