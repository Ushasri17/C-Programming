#include<stdio.h>
#include<string.h>
int main(){
char a[100];
	int i,j,len,tem,v=0,sy=0,d=0,co=0,spa=0;
	gets(a);
	puts(a);
	len=strlen(a);
/*	for(i=0;i<=len;i++){
		if((int)a[i]>=65&&(int)a[i]<=90){
		 a[i]+=32;
		}
		else if(a[i]>='a'&& a[i]<='z')				//lower to upper &upper to lower
		 a[i]-=32;
		else
			a[i]=32;
		} 
for(i=0;i<=len;i++){
	if(a[i]=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
{
	    v+=1;}
	else if((a[i]>='a'&& a[i]<='z')||(a[i]>='A'&& a[i]<='Z'))
	{co+=1;}                   															//count of vowels,consonants,digits,symbols,spaces in the strimg
	else if(a[i]>='0'&& a[i]<='9')
{	 d+=1;}
	 else if(a[i]==32)
	 { spa+=1;}
	else 
{	sy+=1;}
}
printf("vow,cons,dig,spa,sy :%d %d %d %d %d",v,co,d,spa,sy);  */
for(i=0;i<len;i++){
	for(j=0;j<=len;j++){
		if((int)a[i+1]>(int)a[j]){
			tem=a[i+1];
			a[i+1]=a[j];
			a[j]=tem;
		}
	}
} puts(a); 
/*char s[1000];  
    int i,n,c=0;
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s)-1;
    for(i=0;i<n/2;i++)  															//string palindrome
    {	if(s[i]==s[n-i])
    	c++;
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");*/
}

