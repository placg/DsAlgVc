//ʮ������ת���ɰ˽�����convert.cpp
#include<iostream.h>
#include<iomanip.h>
#include<malloc.h>
#include<conio.h>
typedef int Status;
typedef int SElemType;
#include "stack.cpp"

void conversion()
{SqStack *S;
 SElemType e;
 int n;
 S->InitStack(&S);
 cout<<"����ʮ������:";cin>>n;
 if(n<0)
   { cout<<"\n�����������!\n";
     return;}
 if(!n) S->Push(0);
 while(n){
   S->Push(n%8);n=n/8;}
 cout<<"�����:";
 while(!S->StackEmpty()){
   S->Pop(&e);
   cout<<e;}
}
main()
{ cout<<"convert.cpp���н��:\n";
  conversion();
  getch();}
