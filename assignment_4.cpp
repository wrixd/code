//WRICHEEK ADHIKARI
//bTECH/10417/20

#include<iostream>
using namespace std;
int main(void)
{
    float rat;
    int n;
    float a[100][100];
    cout<<"ENTER THE NUMBER OF VARIABLES in EQUATION\t";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"KINDLY ENTER COEFFICIENTS FOR TERMS OF EQUATION NO."<<i+1<<"\n";
        for(int j=0;j<n;j++)
        {
            cout<<"KINDLY ENTER COEFFICIENT OF TERM "<<j+1<<"\t";
            cin>>a[i][j];
        }
    }
    float b[100];
    for(int i=0;i<n;i++)
    {
       cout<<"KINDLY ENTER RHS OF EQUATION "<<i+1<<"\t";
       cin>>b[i];
    }
    float c[100][101];
    cout<<"\n RESULTING AUGMENTED MATRIX IS:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(j<n)
            {
                c[i][j]=a[i][j];
            }
            else
            {
                c[i][j]=b[i];
            }
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           rat=c[j][i]/c[i][i];
           for(int k=0;k<n+1;k++)
           {
               c[j][k]=c[j][k]-c[i][k]*rat;
           }
       }
    }
    float h[100];
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)
        h[i]=c[i][n]/c[i][n-1];
        else
        {
            float sum=0.0;
            for(int k=n-1;k>i;k--)
            {
                sum=sum+c[i][k]*h[k];
            }
            h[i]=(c[i][n]-sum)/c[i][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"VARIABLE NO."<<i+1<<"\t"<<h[i]<<"\n";
    }
}
