#include<stdio.h>
#include<math.h>
int main()
{
/*	int a,b;
	printf("enter two num");  // q1
	scanf("%d %d",&a,&b);
	if(a==b)
	printf("%d and %d are equal",a,b); 
	int a;
	printf("enter  num");  // q2
	scanf(" %d",&a);
	if(a%2==0)
	printf("%d is even",a); 
	else
	printf("%d is odd",a); 
	int a;
	printf("enter  num");  // q3
	scanf(" %d",&a);
	if(a>0)
	printf("%d is positive",a);
	else if(a<0)
	printf("%d is negative",a);
	else
	printf("%d is 0",a);
	int a;
	printf("enter  year");  // q4
	scanf(" %d",&a);
	if(a%4==0 && a%400!=0 || a%100==0)
	printf("%d is leap year",a);
	else
 	printf("%d is  not a leap year",a);
 	int age;
 	printf("enter age");
 	scanf("%d ",&age);
 	if(age>=18)										//	q5
 	printf("you are eligible for voting");
 	else
  	printf("you are not eligible for voting"); 
  	int n,m;
  	printf("enter m value");					//q6
  	scanf("%d ",&m);
  	if(m>0)
{	n=1;
	printf("the value of n=%d",n);}
	else if(m<0)
{	n=-1;
	printf("the value of n=%d",n);}
	else 
{	n=0;
	printf("the value of n =%d",n);}  
	int h;
	printf("enter height");					//q7
	scanf("%d",&h);
	if(h>=150)
	printf("the person is height ");
	else
	printf("the person is dwarf ");  
	int a,b,c;
	printf("enter three num"); 			 // q8
	scanf("%d  %d %d",&a,&b,&c);
	if(a>b)	
	{
	if(a>c)
	printf("%d is the greatest",a);
	else
	printf("%d is the greatest",c);
	}
	else
	{
	if(b>c)
	printf("%d is the greatest",b);
	else
	printf("%d is the greatest",c);
	}  
	int a,b;
	printf("enter two num");          // q9
	scanf("%d %d",&a,&b);
	if(a>0)
	{ if(b>0)
	  printf("the coordinate (%d,%d) lies in first quadrant",a,b);
	  else
	  printf("the coordinate (%d,%d) lies in fourth quadrant",a,b);  	
	}	
	else
    {
      if(b>0)
	  printf("the coordinate (%d,%d) lies in second quadrant",a,b);
	  else
	  printf("the coordinate (%d,%d) lies in third quadrant",a,b);  	
    }  
    int m,p,c,t,mp;
    printf("enter marks of m p c");
    scanf("%d %d %d",&m,&p,&c);
    t=m+p+c;
    mp=m+p;
    printf("\nthe total of three subjects is %d",t);    //q10
    printf("\nthe sum of m and p is %d",mp);
    if(m>=65 && p>=55 && c>=50)
    {
    	if(t>=190 || mp>=140)
    	 printf("u r eligible for admission");
    	else
    	 printf("u r not eligible for admission");
	}  
	int a,b,c,d,d1,r1,r2;
	printf("enter three num"); 			 // q11
	scanf("%d  %d %d",&a,&b,&c);	
	d=(( b*b) -(4*a*c));
	d1=pow(d,0.5);
	if(d>0)
	{ r1= (-b-d1)/(2*a);
	  r2= (-b+d1)/(2*a);
	  printf("the roots are %d,%d",r1,r2);
	}
	else if(d==0)
	{ r1= r2= (-b-d1)/(2*a);
	  printf("the roots are %d,%d",r1,r2);
	}
	else
	printf("the roots are imaginary \n no solution");  
	int tem;
	printf("enter temp:");
	scanf("%d",&tem);
	if(tem<0)
	printf("freezing weather");
	else if(tem>=0 && tem<10)
	printf("very cold weather");
	else if(tem>=10 && tem<20)
	printf(" cold weather");
	else if(tem>=20 && tem<30)
	printf("normal in temp");
	else if(tem>=30 && tem<40)
	printf("its hot");
	else if(tem>=40)
	printf("its very hot"); 
	int a,b,c,t;
	printf("enter three sides"); 			 // q14
	scanf("%d  %d %d",&a,&b,&c);
	t=a;
	if(a==t && b==t && c==t)
	printf("equilateral triangle");
	else if(a==b || b==c || a==c)
	printf("isosceles triangle");
	else
	printf("scalene triangle"); 
	int a,b,c,t;
	printf("enter three angles"); 			 // q15
	scanf("%d  %d %d",&a,&b,&c);
	t=a+b+c;
	if(t==180)
	printf("triangle is valid");
	else
	printf("triangle is not valid"); 
	char vowel;
	printf("enter a character");				//q17
	scanf("%c",&vowel);
	switch(vowel)
	{
		case 'a':printf("%c is an vowel",vowel);
					break;
		case 'e':printf("%c is an vowel",vowel);
				break;
		case 'i':printf("%c is an vowel",vowel);
				break;
		case 'o':printf("%c is an vowel",vowel);
				break;
		case 'u':printf("%c is an vowel",vowel);
				break;
		case 'A':printf("%c is an vowel",vowel);
			break;
		case 'E':printf("%c is an vowel",vowel);
		break;
		case 'I':printf("%c is an vowel",vowel);
		break;
		case 'O':printf("%c is an vowel",vowel);
		break;
		case 'U':printf("%c is an vowel",vowel);
		break;
		default:printf("not an vowel");
	} 
	  int digit;

  printf("Enter digit:");
  scanf("%d", &digit); //Input digit

  switch (digit) { //Writing a case for every digit in 0-9

  case 1:
    printf("One\n");
    break;
  case 2:
    printf("Two\n");
    break;
  case 3:
    printf("Three\n");
    break;
  case 4:
    printf("Four\n");
    break;
  case 5:
    printf("Five\n");
    break;
  case 6:							//q22
    printf("Six\n");
    break;
  case 7:
    printf("Seven\n");
    break;
 case 8:
    printf("Eight\n");
    break;
  case 9:
    printf("Nine\n");
    break;
  case 0:
    printf("Zero\n");
    break;
  default:
    printf("Invalid Digit\n");
  } 
 int day;

  printf("Enter digit:");
  scanf("%d", &day); 

  switch (day) { 

  case 1:
    printf("monday\n");
    break;
  case 2:
    printf("tuesday\n");
    break;
  case 3:printf("wednesday\n");
    break;
  case 4:printf("thursday");
    break;
  case 5: printf("Friday\n");
    break;
  case 6: printf("saturday\n");							//q21
    break;
  case 7:printf("Sunday\n");
    break;
} */

}