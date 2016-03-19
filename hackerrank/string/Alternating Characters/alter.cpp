#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char *a;
    int t;
    cin>>t;
    a = new char[100000];
    while(t--)
    {
        int count=0,detect=0;
        cin>>a;
        for(int i=0;a[i]!='\0';i++)
            count++;
        for(int i=0;i<count;i++)
        {
            int j= i++;
            if(a[i]==a[j]) { 
                detect++;
            }

        i=i-1;
    //        cout<<"inc "<<i<<endl;
        }
        cout<<detect<<endl;
        detect=0;
    }
    return 0;
}
