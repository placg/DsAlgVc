//������ز����Ĳ���TreeM.cpp
#include<iostream.h>
#include<iomanip.h>
#include<stdlib.h>
#include<conio.h>
#include "Tree.h"
#include "Tree.cpp"
void main()
{cout<<"TreeM.cpp���н��:\n";
 int i;
 Tree<char> t;
 t.InsertChild('A');
 for(i=0;i<7;i++)
 {t.Root();
  if(i>=3&&i<5) t.FirstChild();
  t.InsertChild('B'+i);
 }
 cout<<"�����������ʾ�Ľ�����Ϊ:\n";
 t.DisplayTree1();
 int k;
 cout<<"\n������ɾ���ڼ������(k):";cin>>k;
 if(t.DeleteChild1(k))
   cout<<"\n��"<<k<<"�����ӽ��,ɾ���ɹ�!\n";
 else cout<<"\n��"<<k<<"�����ӽ��,ɾ��ʧ��!\n";
 cout<<"���ȸ�������ʾ�Ľ�����Ϊ:\n";
 t.DisplayTree();
 getch();
 cout<<endl<<"������������������ͷŽ��Ĵ���Ϊ:\n";
}



