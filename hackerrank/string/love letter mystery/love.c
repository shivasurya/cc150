#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char *a;
    int t;
    cin>>t;
    while(t--)
    {
         a = new char[10000];
        cin >> a;
         int count=0,val=0;
        for(int i=0;a[i]!='\0';i++)
            count++;
     //   cout<<count<<endl;
        for(int i=0;i<count;i++){
        //    cout<<a[count-(i+1)]<<"\t"<<a[i]<<endl;
            if(a[i]!=a[count-(i+1)] && ((count-(i+1)) >= count/2))
           {
                if(a[count-(i+1)] > a[i])
                val=val+a[count-(i+1)] - a[i];
                else
                val=val+ (a[i] - a[count-(i+1)]);
                    
           }
        
        }
        cout<<val<<endl;
        delete a;
    }
    return 0;
    
}
