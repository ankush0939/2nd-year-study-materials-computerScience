//even 0's odd 1's
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=0,arr[4][2]={2,1,3,0,0,3,1,2};
 printf("even 0's odd 1's\n");
 label:
 printf("enter a string:");
 gets(str);
 l=strlen(str);
 while(i!=l)
 {
  if(str[i]!='0'&&str[i]!='1')
  {
   printf("string not permissible:");
   goto label;
  }
  i++;
 }
 int crt=str[0]-'0';
 i=1;
 while(i!=l)
 {
  int n=str[i]-'0';
  crt=arr[crt][n];
  i++;
 }
 if(crt==1)
 printf("accepted");
 else
 printf("not accepted");
}
