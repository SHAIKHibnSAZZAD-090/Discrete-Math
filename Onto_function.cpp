#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cod[1000],range1[1000],i,j,range2[1000],range3[100],n,c1=0,c2=0,c3=0;
    cout<<"Select how many domain's elements do you want to take: ";
    cin>>n;
    
    for( i=1;i<=n;i++)
    {
        cod[i]=i;
    }
    for(i=1;i<=n;i++)
    {
        range1[i]=i*i;///f(x)=x*x
    }
    for(i=1;i<=n;i++)
    {
        if(cod[i]!=range1[i])
        {
           c1++;
           break;
        }

    }
    if(c1==0)
    cout<<"f(x)=X^2 is an onto function"<<endl;
    else
        cout<<"f(x)=X^2 is not an onto function"<<endl;
    for(i=1;i<=n;i++)
    {
        range2[i]=i+1;///f(x)=x+1
    }
    for(i=1;i<=n;i++)
    {
        if(cod[i]!=range2[i])
        {
           c2++;
           break;
        }
    }
    if(c2==0)
    cout<<"f(x)=X+1 is an onto function"<<endl;
    else
        cout<<"f(x)=X+1 is not an onto function"<<endl;

      for(i=1;i<=n;i++)
    {
        range3[i]=i*i*i+i*i+i+1;///f(x)=x^3+x^2+x+1
    }
     for(i=1;i<=n;i++)
    {
        if(cod[i]!=range3[i])
        {
           c3++;
           break;
        }

    }
     if(c3==0)
    cout<<"f(x)=x^3+x^2+x+1 is an onto function"<<endl;
    else
         cout<<"f(x)=x^3+x^2+x+1 is not an onto function"<<endl;


    }

