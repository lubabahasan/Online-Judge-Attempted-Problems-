#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    string a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a=="X++")
        x++;
        if(a=="X--")
        x--;
        if(a=="--X")
        --x;
        if(a=="++X")
        ++x;
    }
    cout<<x<<endl;
    return 0;
}