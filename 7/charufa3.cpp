//��������charufa3.cpp
#include<iostream.h>
#include<iomanip.h>
#define MAXI 11
typedef int KeyType;
typedef int ElemType;
struct rec {
 KeyType key;
 ElemType data;};
typedef rec sqlist[MAXI];
void insertsort(sqlist b,int n)
{int i,j,k;
  for(i=2;i<n;i++)
  {b[0]=b[i];
   j=i-1;
   while(b[0].key<b[j].key)
   {b[j+1]=b[j];j--;}
   b[j+1]=b[0];
   for(k=1;k<n;k++)
    cout<<setw(4)<<b[k].key;
   cout<<endl;}
}
void main()
{cout<<"charufa3.cpp���н��:\n";
 sqlist a;int i,n=MAXI;
 for(i=1;i<n;i++)
  {a[i].key=random(101+i)%80;
   a[i].data=random(98+i)%100;}
 cout<<"����ǰ����:\n";
 for(int i=1;i<n;i++)
  cout<<setw(4)<<a[i].key;
 cout<<endl;
 cout<<"�������������ʾ:\n";
 insertsort(a,n);
 cout<<"���������:\n";
 for(int i=1;i<n;i++)
  cout<<setw(4)<<a[i].key;
 cout<<endl;cin.get();}

