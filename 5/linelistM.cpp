//linelistm.cpp
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include "linelist.h"
#include "linelist.cpp"
void main()
{ clrscr();
  cout<<"linelistm.cpp���н��:\n";
  List La;
  List Lb(&La);
  ElemType ch[10];
  int k;
  cout<<"���ȵ��ò��뺯��.\n";
  for(k=0;k<8;k++)
  {ch[k]='a'+k;
   La.ListInsert(k,ch[k]);}
  cout<<"��La��:"<<La.ListLength()<<endl;
  getch();//cin.get();���س���
  for(k=0;k<7;k++)
  cout<<La.GetElem(k,&ch[k])<<',';
  cout<<La.GetElem(k,&ch[k])<<endl;getch();
}