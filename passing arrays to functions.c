#include <stdio.h>
//Count number of elements in an integer array,
//until the first -1
int num_elts(int *a)
{
int *p;
p = a;
while(*p != -1){
p++;
}
return p-a;
}
int main()
{
int arr[] = {1, 2, 3, -1};
printf("%d", num_elts(arr)); //Passing array as pointer
return 0;
}