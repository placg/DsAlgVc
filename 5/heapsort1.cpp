//����������ز������ж�����heapsort1.cpp
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
typedef int ElemType;

#include "maxheap.cpp"
#include "linelist.cpp"
void PrintList(List *L)
{int i,n;
 ElemType e;
 n=L->ListLength();
 for(i=0;i<n;i++)
  cout<<setw(3)<<L->GetElem(i,&e);
 cout<<endl;
}
void HeapSort(List *L)
{int i,n;
 ElemType e;
 n=L->ListLength();
 maxheap H(n);
 for(i=0;i<n;i++)
  H.heapInsert(L->GetElem(i,&e));
 L->ClearList();i=0;
 while(!H.heapEmpty())
  L->ListInsert(i++,H.heapDelete());
 H.Destroyheap();
}
void main()
{cout<<"heapsort1.cpp���н��:\n";
 int i;
 List L;
 L.init(&L);
 for(i=0;i<HeapSIZE;i++)
  L.ListInsert(i,random(99));
 cout<<"ԭ��:\n";
 PrintList(&L);
 HeapSort(&L);
 cout<<"������:\n";
 PrintList(&L);
 L.DestroyList(L);
 getch();}
 

