//������Ĳ���maxheapm.cpp
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
typedef int ElemType;
#include "maxheap.cpp"
void PrintArray(int a[],int n)
{for(int i=0;i<n;i++)
  cout<<setw(3)<<a[i];
 cout<<endl;
}
void main()
{cout<<"maxheapm.cpp���н��:\n";
 ElemType b[HeapSIZE];
 for(int i=0;i<HeapSIZE;i++)
  b[i]=random(50);
 cout<<"�������b:\n";
 PrintArray(b,HeapSIZE);
 maxheap H(HeapSIZE),H1(HeapSIZE);
 for(int i=0;i<HeapSIZE;i++)
  H.heapInsert(b[i]);
 cout<<"�����ǰ��H�ĶѶ�Ԫ��:\n";
 cout<<setw(3)<<H.GetTop()<<endl;
 cout<<"������������b:\n";
 PrintArray(b,HeapSIZE);
 cout<<"������ɾ����H����Ԫ��:\n";
 while(!H.heapEmpty())
  cout<<setw(3)<<H.heapDelete();
 cout<<endl;
 for(int i=0;i<HeapSIZE;i++)
  H1.heapInsert(random(80));
 cout<<"�����ǰ��H1�ĶѶ�Ԫ��:\n";
 cout<<setw(3)<<H1.GetTop()<<endl;
 cout<<"������ɾ����H1����Ԫ��:\n";
 while(!H1.heapEmpty())
  cout<<setw(3)<<H1.heapDelete();
 cout<<endl;
 H.Destroyheap();H1.Destroyheap();
 getch();}


