//��С����Ĳ���minheapm.cpp
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
typedef int ElemType;
#include "minheap.cpp"
void PrintArray(int a[],int n)
{for(int i=0;i<n;i++)
  cout<<setw(3)<<a[i];
 cout<<endl;
}
void main()
{cout<<"minheapm.cpp���н��:\n";
 ElemType b[10];
 for(int i=0;i<10;i++)
  b[i]=random(50);
 cout<<"�������b:\n";
 PrintArray(b,10);
 minheap H(10),H1(10);
 for(int i=0;i<10;i++)
  H.heapInsert(b[i]);
 cout<<"�����ǰ��H�ĶѶ�Ԫ��:\n";
 cout<<setw(3)<<H.GetTop()<<endl;
 cout<<"������������b:\n";
 PrintArray(b,10);
 cout<<"������ɾ����H����Ԫ��:\n";
 while(!H.heapEmpty())
  cout<<setw(3)<<H.heapDelete();
 cout<<endl;
 for(int i=0;i<10;i++)
  H1.heapInsert(random(80));
 cout<<"�����ǰ��H1�ĶѶ�Ԫ��:\n";
 cout<<setw(3)<<H1.GetTop()<<endl;
 cout<<"������ɾ����H1����Ԫ��:\n";
 while(!H1.heapEmpty())
  cout<<setw(3)<<H1.heapDelete();
 cout<<endl;
 H.Destroyheap();H1.Destroyheap();
 getch();}


