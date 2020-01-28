#include<iostream.h>
include<stdlib.h>
int main()
{
system("cls")
char ch;
float a,b,result;
cout<<"enter two numbers:";
cin>>a>>b;
cout<<"\n"<<"enter the operator(+,-,*,\):";
cin>>ch;
cout<<"\n";
if(ch=='+')
result= a+b ;
else if(ch=='-')
result= a-b ;
else if(ch=='*')
result= a*b ;
else if(ch=='/')
result= a/b ;
else
{cout<<"\n"<<"wrong operators !"<<'\n";
goto lb ;
}
cout<<"\n"<<"the calculated result is :"<<"\n"<<result<<"\n";
lb:
return 0;
}
 
