////����һά,��ά����������intarraym.cpp
#include <iostream.h>
#include <iomanip.h>
#include "intarray.cpp"
void main()
{cout<<"intarraym.cpp���н��:\n";
 int i,j;
 IntArray1 a(10);
 cout<<"����a����="<<a.size1()<<endl;
 for(i=1;i<=10;i++)
 {a[i]=random(66);
  cout<<setw(3)<<a[i];}
 cout<<endl;
 a.ReArray(12);
 cout<<"�ض�������a����="<<a.size1()<<endl;
 for(i=1;i<=12;i++)
 {a[i]=random(86);
  cout<<setw(3)<<a[i];}
 cout<<endl;
 IntArray2 b(3,4);
 for(i=1;i<=b.size1();i++)
 for(j=1;j<=b.size2();j++)
  b[i][j]=random(88);
 cout<<"��ά����b:\n";
 for(i=1;i<=b.size1();i++)
 {for(j=1;j<=b.size2();j++)
   cout<<setw(4)<<b[i][j];
  cout<<endl;}
 cout<<endl;cin.get();
}


