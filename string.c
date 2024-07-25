#include<stdio.h>
#include<string.h>
int main()
{
/*	int len1,len2,i;
	char str1[50];
	char str2[20];
	printf("enter string 1: \n ");
	gets(str1);
	printf("enter string 2 :\n ");						//concatenation of string 
	scanf("%s",str2);
	len1=strlen(str1);
	len2=strlen(str2);
	for(i=0;i<=len2;i++)
	{
		str1[len1+i]=str2[i];
	}
	printf("the concatenated string is:");
	puts(str1);  
	int len1,len2,i;
	char str1[50];
	char ch;
	printf("enter string 1: \n ");
	gets(str1);
	len1=strlen(str1);
	for(i=0;i<len1/2;i++)
	{	ch=str1[i];
		str1[i]=str1[len1-1-i];
		str1[len1-1-i]=ch;
	}
	printf("the reversed string is: ");
	puts(str1);  
	int ps,i=0,m,n;
	char str[50];
	char substr[50];
	printf("enter a string:");				//to extract substring from middle of the string
	gets(str);
	printf("enter start position");
	scanf("%d",&ps);
	printf("enter no.of elements to be copied:");
	scanf("%d",&n);
	while(ps!='\0' && n>0)
	{
		substr[i]=str[ps];
		i++;
		ps++;		n--;
	}
	substr[i]='\0';
	puts(substr);  
	char source[50],target[100];
int i=0,j=0;
printf("\n Enter the source string:");
gets(source);
printf("\n Enter the target string: ");
gets(target);
while(target[i]!='\0')													//concatenation of second string to the first string 
{
i++;
}
while(source[j]!='\0')									
{
target[i]=source[j];
i++;
j++;
}
target[j]='\0';
printf("\n The final target string is :");
puts(target); 

 
char str1[100],str2[100],str3[100];						//concatenation of two strings to a new string
int i=0,j=0;
printf("\n enter the first string:");
gets(str1);
printf("\n enter the second string: ");
gets(str2);
while(str1[i]!='\0')
{
str3[i]=str1[i];
i++;
j++;
}
i=0;
while(str2[i]!='\0')										
{
str3[j]=str2[i];
i++;
j++;
}
str3[j]='\0';
printf("\n The Concatenated string is :");
puts(str3);   */


 /* char str1[50],str2[50];
int i=0,len1=0,len2=0,s=0;
printf("\nEnter the first string:");
gets(str1);
printf("\n Enter second string:");
gets(str2);
len1=strlen(str1);
len2=strlen(str2);
if(len1==len2)
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
}  

	return 0;
}