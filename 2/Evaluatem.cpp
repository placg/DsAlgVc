//�����׺���ʽ��ֵEvaluatem.cpp
#include<iostream.h>
#include<stdlib.h>
#include<strstrea.h>
#include<iomanip.h>
#include<stdio.h>
typedef float ElemType;
#include "Evaluate.cpp"
void main()
{char p[40];
 float y;
 cout<<"Evaluatem.cpp���н��:\n";
 cout<<"�����׺���ʽ:";
 gets(p);
 y=Evaluate(p);
 cout<<"��׺���ʽ��ֵ:";
 cout<<y<<endl;cin.get();}


