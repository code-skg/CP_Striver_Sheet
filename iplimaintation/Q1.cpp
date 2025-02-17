#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string s;
        cin>>s;
        int m=0,l=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1'&&m==0) 
            {
                l++;
                m=1;
            }
            else if(s[i]=='0'&&m==1)
            {
                m=0;
                l++;
            }
        }
        cout<<l<<endl;

    }
}