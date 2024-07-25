#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
/*if(len1==len2)
{
while(i<len1)
{
if(str1[i]==str2[i])
 i++;
else break;
}
if(i==len1)
{
printf("two strings are equal");
s=1;
}
}
if(len1!=len2)
{
printf("\n two strings are not equal");				//comparing two strings
}
if(s==0)
{
if(str1[i]>str2[i])
 printf("\n string 1 is greater than string 2 ");
if(str1[i]<str2[i])
 printf("\n string 1 is lessthan than string 2 ");
} */
char s1[50],s2[50],s3[50],tem;
int i=0,j=0,len1=0,len2,n,po;
printf("enter 2 strings :");
gets(s1);
//gets(s2);
len1=strlen(s1);
//len2=strlen(s2);
/*for(i=0;i<len1;i++)
{
	s3[i]=s1[i];
	j++;
}
for(i=0;i<len2;i++)
{
	s3[j]=s2[i];
	j++;
}
puts(s3);  
//----------------------
for(i=0;i<len1;i++)
  i++;
for(j=0;j<len2;j++){
s1[i]=s2[j];
i++;
}
puts(s1);  
//----------------------------------
while(s1[i]!='\0')
{
    len1+=1;
    i++;}
printf("%d",len1);  
//------------------------------------
i=len1-1;
for(j=0;j<len1;j++){
tem=s1[i];
s1[i]=s2[j];
s2[j]=tem;
i--;
}
puts(s2); 
//-----------------------------------------
for(i=0;i<len1;i++){
if(s1[i]>='a' && s1[i]<='z')
{
	s1[i]-=32;
}  }
puts(s1);   
//---------------------------------------------
printf("enter n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	s2[i]=s1[i];
}puts(s2);  
//-----------------------------------------------
printf("enter position");
scanf("%d",&po);
for(i=len1-po,j=0;i<len1;i++,j++)
s2[j]=s1[i];
puts(s2);  */

 }