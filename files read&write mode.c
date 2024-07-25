#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
/*	fp=fopen("abc.txt","w");
char str[50];
printf("enter string");
gets(str);
fputs(str,fp);							//write mode
	fprintf(fp,"hello world");
	fclose(fp);*/
	fp=fopen("abc.txt","r");
	char str[50],ch;
	fgets(str,30,fp);//read 30 characters of the string
	printf("%s",str);
	while(!feof(fp))	//check whether end of file
	{	
		ch=fgetc(fp);
		printf("%c",ch);
	}
}