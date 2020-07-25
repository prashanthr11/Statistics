// Quartiles! HackerRank

#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }  
    sort(a,a+n);
    int high = n-1,low = 0;
    if(n%2 == 0){
     for(int i=0;i<(n/2);i++){
         b[i] = a[i];
     }
     for(int i=(n/2);i<n;i++){
         c[i-(n/2)] = a[i];
     }
     
    }
    if(n%2 != 0){
        for(int i=0;i<(n/2);i++){
         b[i] = a[i];
     }
     for(int i=(n/2)+1;i<n;i++){
         c[i-(n/2)-1] = a[i];
     }
    //  for(int i=0;i<n;i++){
    //      cout << a[i] << ' ';
    //  }cout<<endl;
    //  for(int i=0;i<n/2;i++){
    //      cout << b[i] << ' ';
    //  }cout<<endl;
    //  for(int i=0;i<n/2;i++){
    //      cout << c[i] << ' ';
    //  }
     
    }
     if((n/2)%2 != 0){
     cout <<" Median of Q1 is : "<< (float) b[(n/2)/2] << endl;// << (float)c[(n/2)/2] << endl;
     }
     else{
          cout << " Median of Q1 is : " << (float) (b[(n/2)/2]+b[((n/2)/2)-1])/2 << endl ;//<< (float) (c[(n/2)*2]+c[((n/2)*2)-1])/2 << endl;
     }
      if(n%2 != 0){
         cout  << " Median of Q2 is : " << (float)a[n/2] << endl; 
     }
     else{
         cout << " Median of Q2 is : " << (float)(a[(high-low)/2] + a[(high-low+1)/2])/2 << endl;
     }
     if((n/2)%2 != 0){
     cout  << " Median of Q3 is : " << (float) c[(n/2)/2] << endl;
     }
     else{
          cout << " Median of Q3 is : " << (float) (c[(n/2)/2]+c[((n/2)/2)-1])/2 << endl;
     }
     cout << " Sorted Array is : " ;
     for(int i=0;i<n;i++){
         cout << a[i] << ' ';
     }cout << endl << " Q1 is : ";
     for(int i=0;i<n/2;i++){
         cout << b[i] << ' ';
     }cout << endl << " Q3 is : ";
     for(int i=0;i<n/2;i++){
         cout << c[i] << ' ';
     }
     
     
    return 0;
}
