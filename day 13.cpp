#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter number = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of "<<n<<" natural numebers = "<<sum;
}
