//��ʽ���еĲ���linqueuem.cpp
#include<iostream.h>
#include<iomanip.h>
#include "linqueue.cpp"
void main()
{cout<<"linqueuem.cpp���н��:\n";
 linkqueue MyQueue;
 int i,x,a[3];
 cout<<"������ʽ����MyQueue:\n";
 for(i=0;i<QueueSize;)
  {x=random(1133+i)%1000;
   if(100<=x&&x<=999)
    {MyQueue.enqueue(x);i++;}}
 cout<<"����ʽ����MyQueue�ĳ���:";
 cout<<MyQueue.QueueLength()<<endl;
 cout<<"�����ʽ����MyQueue:\n";
 cout<<"ͬʱ����һ����λ���Ƿ�Ϊ������.\n";
 while(!MyQueue.queueempty())
  {x=MyQueue.dequeue();
   cout<<setw(4)<<x;
   a[0]=x%10;
   x=x/10;a[1]=x%10;
   x=x/10;a[2]=x;
   if(a[0]!=a[2]) cout<<"���ǻ�����!\n";
   if(a[0]==a[2]) cout<<"�ǻ�����!\n";}
 cin.get();cin.get();}

