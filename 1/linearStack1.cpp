//˳���ջ��ʵ��linearStack1.cpp
#include "linearStack1.h"
//�������������ջ
 void Stack::CreateStack(int m,int mark)
 {ElemType x,a[LEN];
  for(int i=0;i<m;i++) a[i]=random(213+i)%100;
  for(int i=0;i<m-1;i++)
  {int k=i;
   for(int j=i+1;j<m;j++)
    if(a[k]>a[j]) k=j;
   if(k!=i)
   {x=a[k];a[k]=a[i];a[i]=x;}}
  for(int i=0;i<m;i++)
  if(mark==1) Push(a[m-1-i]);//����
  else
   if(mark==-1) Push(a[i]);//����
   else Push(rand()%100);//����
 } 
//���ջ
 void Stack::ClearStack() {top=0;}
//���ջ�Ƿ�Ϊ��
 bool Stack::StackEmpty() {return top==0;}
//��ȡջ��Ԫ��
 ElemType Stack::Peek()
 {if(top==0) {cerr<<"ջΪ��!"<<endl;
      exit(1);}
   return stack[top];
 }
//��ջ�в���Ԫ��
 void Stack::Push(const ElemType& item,int m)
 {if(top==m) {
   cerr<<"ջ����!"<<endl;exit(1);}
  top++;
  stack[top]=item;
 }
//��ջ��ɾ��Ԫ��
 ElemType Stack::Pop()
 {if(top==0) {
   cerr<<"ջΪ��!"<<endl;exit(1);}
   top--;
   return stack[top+1];
 }
//���ջ�Ƿ�����
 bool Stack::StackFull(int m)
 {return top==m;}
//ջ�����
 void Stack::StackPrint(int m)
 {for(int i=0;i<m;i++)
   cout<<setw(3)<<Pop();
 }