//����׺����ʽת��Ϊ��׺����ʽ���ļ�zhuanhuan.cpp
#include<iostream.h>
#include<stdlib.h>
//����int isdigit(int c)������ԭ��
#include<ctype.h>
const int SM=40;
#include"linearStack1.cpp"
int Precedence(char op);
void zhuanhuan(char s1[SM],char s2[SM])
//���ַ���s1�е���׺����ʽת��Ϊ�����ַ���s2�еĺ�׺����ʽ
{Stack R;        //���������ݴ��������ջ
 R.Push('@');    //��ջ�׷���'@'�ַ�,������������ȼ�0
 int i,j;
 i=0;          //����ָʾɨ��s1�����ַ���λ��,��ֵΪ0
 j=0;          //����ָʾs2���д����ַ���λ��,��ֵΪ0
 char ch=s1[i];//ch����s1����ɨ�赽���ַ�,��ֵΪ��һ���ַ�
 while(ch!='@')
  {//˳������׺����ʽ�е�ÿ���ַ�
   if(ch==' ')
   //���ڿո��ַ������κδ���,˳���ȡ��һ���ַ�
   ch=s1[++i];
   else if(ch=='(')
   {R.Push(ch);//����������,ֱ�ӽ�ջ
    ch=s1[++i];}
   else if(ch==')')
    {//���������ţ�ʹ�����ڵ���ͣ����ջ�е����������
     //��ջ��д�뵽s2��
     while(R.Peek()!='(')
       s2[j++]=R.Pop();
      R.Pop();  //ɾ��ջ����������
      ch=s1[++i];}
      else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
      {//���������������ʹ�ݴ���ջ�еĲ�����ch���ȼ�
       //����������γ�ջ��д�뵽s2��
       char w=R.Peek();
       while(Precedence(w)>=Precedence(ch))
        {//Precedence(w)��������������βε����ȼ�
	 s2[j++]=w;R.Pop();w=R.Peek();}
         R.Push(ch); //��ch�����д��ջ��
	 ch=s1[++i];}
        else
        {//�˴���ȻΪ���ֻ�С�����ַ�
	 while(isdigit(ch)||ch=='.')
	 {//��һ����ֵ�е�ÿһλ����д�뵽s2����
          s2[j++]=ch;
	  ch=s1[++i];
         }
        //��ת�����ÿ����ֵ�����һ���ո�
        s2[j++]=' ';}
    }
//���ݴ���ջ�е���������γ�ջ��д�뵽s2����
   ch=R.Pop();
   while(ch!='@') {
    if(ch=='(') {
     cerr<<"expression error!"<<endl;
      exit(1);}
    else {s2[j++]=ch;
   ch=R.Pop();}}
//�ں�׺����ʽ��ĩβ�������ʽ���������ַ���������
  s2[j++]='@';
  s2[j++]='\0';
 }
//����������ȼ���Precedence����Ϊ��
  int Precedence(char op)
//���������op����Ӧ�����ȼ���ֵ
  {switch(op)
    {case '+':
     case '-':return 1;//����Ӽ���������ȼ�Ϊ1
     case '*':
     case '/':return 2;//����˳���������ȼ�Ϊ2
     case '(':
     case '@':
//������ջ�е������ź�ջ���ַ������ȼ�Ϊ0
     default:return 0;}
}
