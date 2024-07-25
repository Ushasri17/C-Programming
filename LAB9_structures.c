#include<stdio.h>
struct student
{
 char name[30];
 int REGID;
 struct address{
 	char village[20];
 	char district[20];
 	int phone_no;
 }add;
 float CGPA;
};

int main()
{
 struct student s[20], temp;
 int i,j,n;
 float avg,max=0;
 printf("Enter n:\n");
 scanf("%d",&n);
 for(i=0;i< n;i++)
 {
  printf("Enter name, REGID and CGPA ,village district and ph no. of student:\n");
  scanf("%s%d%f %s %s %d",s[i].name, &s[i].REGID, &s[i].CGPA,s[i].add.village,s[i].add.district,&s[i].add.phone_no);
 }
 /*	for(i=0;i<n;i++){
 	if(s[i].CGPA>max)
 	max=s[i].CGPA;
 }
 for(i=0;i<n;i++){															//Q1
 	if(s[i].CGPA==max)
 	printf("topper of class is %s",s[i].name);
 }  */
 /*	printf("enter avg CGPA");
 scanf("%f",&avg);
 printf("The phone  numbers of students with CGPA more than avg CGPA are:\n");
 for(i=0;i<n;i++){
 	if(s[i].CGPA>=avg){																	//Q3
 		printf("%d\n",s[i].add.phone_no);
	 }
 }	 */
/* for(i=0;i< n;i++)
 {
  printf("Name: %s\n", s[i].name);
  printf("REGID: %d\n", s[i].REGID);
  printf("CGPA: %0.2f\n", s[i].CGPA);
  printf("ADDRESS: %s, %s, %d\n",s[i].add.village,s[i].add.district,s[i].add.phone_no);
 }
 	for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(s[i].REGID>s[j].REGID)
   {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
   }
  }
 }													//Q2
 printf("Sorted records are:\n");
 for(i=0;i< n;i++)
 {
  printf("Name: %s\n", s[i].name);
  printf("REGID: %d\n", s[i].REGID);
  printf("CGPA: %0.2f\n", s[i].CGPA);
  printf("ADDRESS: %s\n",s[i].address);
 }	*/
 
 return 0;
}