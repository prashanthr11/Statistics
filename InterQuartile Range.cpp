// Statistics! - HackerRank
#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    float a[n],c[100000],b[n],sum = 0.0;
    double Q1,Q3;
   
    for(auto i=0;i<n;i++){
        cin >> a[i];
    }
    
    for(auto i=0;i<n;i++){
        cin >> b[i];
    }
    
    b[-1] = 0;
    
    for(auto i=0;i<n;i++){
            for(auto j=0;j<b[i];j++){
                c[j+(int)sum] = a[i];
            }
            sum+= b[i];
        }
        
        // cout<< sum <<endl;    // Total No Of the Elements
        sort(c,c+(int)sum);
        // for(int i=0;i<sum;i++)cout << c[i] << ' ';         ?? Sortes Array
        
        if((int)sum%2 == 0){
             Q1 = (float) (c[(int)sum / 4] + c[(int)(sum / 4)-1]) / 2.0;
             Q3 = (float) (c[(3*(int)sum) / 4] + c[((3*(int)sum) / 4) + 1 ]) / 2.0;
            // cout << Q1 << ' ' << Q3 << ' ';

        }
        else{
            
             Q1 = (float) (c[(int)sum / 4]);
             Q3 = (float) (c[(3*(int)sum) / 4] );
            // cout << Q1 << ' ' << Q3 << ' ';

        }                            
        cout << fixed << setprecision(1) << (float)Q3-Q1  << endl;

}
