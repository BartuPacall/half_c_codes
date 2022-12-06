/*
//  Two Dimensional Array

#include <stdio.h>

int main() {
    int numbers[3][10] ={
            {2, 1, 2, 3, 4, 5, 6, 7, 7, 8},
            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
            {11, 12, 13,14, 15, 16, 17, 18, 19, 20},
    };

    for (int i = 0; i < 10; ++i) {
        printf("\n----------- Student %d details ----------- \n", i);
        int total = 0;
        int totalSubjects = 0;
        for (int j = 0; j < 3; ++j) {
            printf("Subject %d marks: %d \t", j, numbers[j][i]);
            total += numbers[j][i]; // total = total + numbers[j][i];
            totalSubjects++;
        }
        printf("\nTotal marks: %d \t", total);
        printf("\nAverage marks: %d \t", total/totalSubjects);
    }
    return 0;
}*/


/*
//  Adding Two Nums
#include <stdio.h>
int main() //main function
{
  int a, b;

  printf("Enter first number:\n");
  scanf("%d", &a);
  printf("Enter second number:\n");
  scanf("%d", &b);

  printf("Addition of two numbers = %d", a + b);
  return 0;
}*/

/*
// Array Toplama
#include<stdio.h>
int main()
{
  int arr1[5],arr2[5],arr3[5],i;
  printf("Enter 5 numbers of arr1:");
  for(i=0;i<=4;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter 5 numbers of arr2:");
    for(i=0;i<=4;i++)
        {
            scanf("%d",&arr2[i]);
        }
        for(i=0;i<=4;i++)
        {
            arr3[i]=arr1[i]+arr2[i];
        }
        printf("Addition of two arrays is:");
        for(i=0;i<=4;i++)
        {
            printf("%d",arr3[i]);
        }
        return 0;
}*/


/*
//  Binary search.
#include <stdio.h>
int main()
{
    int i,n,s,f,l,m;
        printf("Enter the size :");
        scanf("%d",&n);
    int array[n];
    for (i=0; i<n; i++) {
        printf("Enter the element no. %d:",i+1);
        scanf("%d",&array[i]);
    }
    printf("enter the no. to search :");
    scanf("%d",&s);
    f=0;
    l=n-1;
    m=(f+l)/2;
    while (f<=l) {
        if (array[m]<s) {
            f=m+1;
        }
        else if (array[m]==s){
            printf("the no. %d is at the location of %d\n",s,m+1);
            break;
        }
        else {
            l=m-1;
            m=(f+l)/2;
        }
    }
    if (f>l) {
        printf("The entered no %d is not in the array.\n",s);
    }
    return 0;
}*/



//     C program to display simple calculator.

/*#include <stdio.h>
#include <math.h>
int main()
{
  float n1, n2;
  char operator;
  printf("Enter an operator(+,-,/,*,^):");
  scanf("%c", &operator);
  printf("Enter two numbers:");
  scanf("%f%f", &n1, &n2);

  switch (operator)
  {
  case '+':
    printf("%.3f + %.3f = %.3f", n1, n2, (n1 + n2));
    break;
  case '-':
    printf("%.3f - %.3f = %.3f", n1, n2, (n1 - n2));
    break;
  case '/':
    printf("%.3f / %.3f = %.3f", n1, n2, (n1 / n2));
    break;
  case '*':
    printf("%.3f * %.3f = %.3f", n1, n2, (n1 * n2));
    break;
  case '^':
    printf("%.3f ^ %.3f = %.3f", n1, n2, pow(n1, n2));
    break;
  default:
    printf("Error! operator is wrong");
  }
  return 0;
}*/

/*
//    BASIC DIFFERENCE :))

#include <stdio.h>
int main()
{
    int n1, n2;
    float num1, num2;
    double d1,d2;
    char ch;
    printf("Press 'i' for int / 'f' for float / 'd' for double): ");
    scanf("%c", &ch);
    if (ch == 'i')
    {
        printf("Enter two numbers:");
        scanf("%d%d", &n1, &n2);
    }

    else if(ch == 'd')
    {
        printf("Enter two numbers:");
        scanf("%lf%lf", &d1, &d2);
    }
    else
    {
        printf("Enter two numbers:");
        scanf("%f%f", &num1, &num2);
    }
    switch (ch)
    {
    case 'i':
        printf("The Difference of %d and %d is: %d", n1, n2, n1 - n2);
        break;
    case 'f':
        printf("The Difference of %f and %f is: %.2f", num1, num2, num1 - num2);
        break;
     case 'd':
        printf("The Difference of %lf and %lf is: %.2lf", d1, d2, d1 - d2);
        break;
    default:
        printf("Wrong Choice!!!");
    }
    return 0;
}   

*/


/*
//  C program to divide two numbers.
#include <stdio.h>
int main()
{
  float n1, n2, div;
  printf("Enter two numbers:");
  scanf("%f%f", &n1, &n2);
  div = n1 / n2;
  printf("Division of two numbers=%.3f", div);
}
*/

/*
//  EASY POINTER
#include <stdio.h>
int main(){
	int a,b;
	int *pa,*pb;
	
	pa=&a; pb=&b;
	
	printf("Enter first integer: ");
	scanf("%d",pa);
	printf("Enter second integer: ");
	scanf("%d",pb);
	
	//compare 
	if(*pa==*pb)
		printf("1\n");
	else
		printf("0\n");
	
	return 0;
}
*/

/*

// Easy Pointer String
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    char *pa,*pb;
    printf("Enter first string :");
    fgets(a,100,stdin);
    printf("Enter next string to concatenate :");
    fgets(b,100,stdin);
    pa=a,pb=b;
    strcat(pa,pb);
    printf("concatenation of two strings using strcat is %s\n",pa);//birleştirme işlemi
    return 0;
}
*/

/*
//  Function Even Number
//  C program to print only even numbers from 1 to 50 using function.

#include <stdio.h>
int even(int i);
int main()
{
  int i;
  int x = even(i);
}
int even(int i)
{
  for (i = 1; i <= 50; i++)
  {
    if (i % 2 == 0)
      printf("%d\t", i);
  }
}
*/

/*

//  Function Add
//  C program to add two numbers using functions of type with no arguments and no return type

#include <stdio.h>
void sum();
int main()
{
  sum();
}
void sum()
{
  int a, b, sum;
  printf("Enter first number:");
  scanf("%d", &a);
  printf("Enter second number:");
  scanf("%d", &b);
  sum = a + b;
  printf("Sum of two numbers=%d", sum);
}

*/
/*

// Function Add 2
// C  program to add two numbers using function of type with no arguments but return type


#include <stdio.h>
int sum();
int main()
{
  int add = sum();
}
int sum()
{
  int a, b;
  printf("Enter first number:");
  scanf("%d", &a);
  printf("Enter second number:");
  scanf("%d", &b);
  return (a + b);
}
*/

/*
// Function Add 3
//  C program to add two numbers using functions of type with arguments and return type

#include <stdio.h>
int sum(int a, int b);
int main()
{
  int a, b;
  printf("Enter first number:");
  scanf("%d", &a);
  printf("Enter second number:");
  scanf("%d", &b);
  int add = sum(a, b);
  printf("Sum of two numbers=%d", add);
}

int sum(int a, int b)
{
  int sum;
  sum = a + b;
  return sum;
}
*/

/*
// Function Average

   #include  <stdio.h>
    float avg(float n1,float n2,float n3,float n4,float n5);  //    (function to find the average of given 5 numbers)
int main()
{
    float n1,n2,n3,n4,n5;
    printf("Enter five numbers:");
    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
    float average=avg(n1,n2,n3,n4,n5);
    printf("Average of five numbers=%f",average);
}
float avg(float n1,float n2,float n3,float n4,float n5)
{
    float avg;
    avg=(n1+n2+n3+n4+n5/5.0);
    return avg;
}
*/




/*
//C program to count number of digits in a number using function.

//  Function Count

#include<stdio.h>
int digit(int num,int count);
int main()
{
  int num,count=0;
  printf("Enter a number:");
  scanf("%d",&num);
  int y=digit(num,count);
  printf("Count of digits in a number=%d",y);
}
int digit(int num,int count)
{
  while(num!=0)
  {
    num=num/10;
    count++;
  }
  return count;
}
*/

/*
//  C program to divide two numbers using functions of type with arguments but no return type

// Function divide
#include<stdio.h>
void div(int a,int b);
int main()
{
  int a,b;
  printf("Enter numerator:");
  scanf("%d",&a);
  printf("Enter denominator:");
  scanf("%d",&b);
  div(a,b);
}
void div(int a,int b)
{
  int t;
  t=a/b;
  printf("Division of two numbers=%d",t);
}
*/

/*
// Goto Start;  and Start: Statements

// Example 1
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n,t;
    int ans;
    start:
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++) {
        printf("Enter the element :");
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n-1; i++) {
        for (j=i+1; j<n; j++) {
            if (arr[j]<arr[i]) {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    printf("the elements are :-\n");
    for (i=0; i<n; i++) {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    printf("do you want to rum this program again enter 1/0:");
    scanf("%d",&ans);
    if (ans ==1) {
        printf("way of goto");
        goto start;
    }
}

// Example 2
#include <stdio.h>
int main()
{
    int num,i=1;
    printf("Enter the number whose table you want to print?:");
    scanf("%d",&num);
    table:
    printf("%d x %d = %d\n",num,i,num*i);
    i++;
    if(i<=10)
        goto table;
}

// Example 3
#include <stdio.h>
int main()
{
    int num,i,p,ans;
    start:
    printf("Enter the size :");
    scanf("%d",&p);
    for (num=0; num<=p; num++) {
        for (i=2; i<num; i++) {
            if (num%i==0) {
                break;
            }
        }
        if (i==num) {
            printf("%d - %d = %d\n",p,p-num,num);
        }
        printf("\n");
        printf("enter '1' if you want run again or '0' to exit :");
        scanf("%d",&ans);
        if (ans== 1) {
            goto start;
        }
    }
}

//goto statement of prime series.
// Example 4
#include <stdio.h>
int prime(int p);
int main()
{
    int p,ans;
    start:
    printf("\n");
    printf("Enter the size :");
    scanf("%d",&p);
    prime(p);
    printf("\n");
    printf("enter '1' if you want run again or '0' to exit :");
    scanf("%d",&ans);
    if (ans== 1) {
        goto start;
    }
}
int prime(int x){
    int num,i;
    for (num=0; num<=x; num++) {
        for (i=2; i<num; i++) {
            if (num%i==0) {
                break;
            }
        }
        if (i==num) {
            printf("%d - %d = %d\n",x,x-num,num);
        }
    }
    return 0;
}
*/


/*
//  Guess The Number
//  C program mini game for guessing number between 1 to 100

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num = rand() % 100;
    int n, count = 1;
    // printf("%d",num);

    do
    {
        printf("Enter you number\n");
        scanf("%d", &n);

        if (n > num)
        {
            printf("Enter smaller number!!!!\n");
        }
        else if (n < num)
        {
            printf("Enter greater number!!!!\n");
        }
        else
            printf("You got right %d in %d attempts!!!!\n", num, count);
        count++;
        printf("***********************************************\n");
    } while (n != num);
}

*/
/*
//  Identical Array
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,j,n,m,p;
    printf("Enter the size of the array 1 :");
    scanf("%d",&n);
    int arr1[n];
    for ( i = 0; i < n; i++)
    {
        printf("Element No. %d :",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of the array 2 :");
    scanf("%d",&m);
    int arr2[m];
    for ( j = 0; j < m; j++)
    {
        printf("Elemen No. %d :",j+1);
        scanf("%d",&arr2[j]);
    }

    if ( n != m)
    {
        printf("The arrays are not identical\n");
    }
    else
    {
        int identical = 0; /// 0 -> identical , 1 = differenrt
        for (int k = 0; k < n; ++k) {
            printf("Value of k (%d) , arr1[k] = %d | arr2[k] %d \n", k, arr1[k], arr2[k]);
            if(arr1[k] != arr2[k]) {
                identical = 1;
                break;
            }
        }

        if(identical == 0) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }
    return 0;
}*/

/*
//  Largest Location
#include <stdio.h>
int main()
{
    int i,n,l;
    printf("Enter the size :");
    scanf("%d",&n);
    int array[n];
    for (i=0 ; i<n; i++) {
        printf("enter the element no. %d :",i+1);
        scanf("%d",&array[i]);
    }
    l=array[0];
    int index=array[i];
    for (i=0; i<n; i++) {
        if (l<array[i]) {
            l=array[i];
            index =i;
        }
    }
    for (i=0; i<1; i++) {
        for (i=0; i<10; i++) {
            printf(" ");
        }
        printf("The largest no is :%d\n",l);
        printf("\tThe location of this no is :%d\n",index+1);
    }
    return 0;
}
*/

/*
// Matrix
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, m, n, a, b, first[10][10], second[10][10], sum[10][10];
    printf("enter the no. of rows m :");
    scanf("%d", &m);
    printf("enter the no. of columns n :");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < 1; i++)
    {
        for (i = 0; i < 10; i++)
        {
            printf(" ");
        }
        printf("Now enter the element of first row \n");
    }
    printf("\n");
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            printf("Enter the no. a :");
            scanf("%d", &first[a][b]);
        }
    }
    printf("\n");
    for (i = 0; i < 1; i++)
    {
        for (i = 0; i < 10; i++)
        {
            printf(" ");
        }
        printf("Now enter the element of second colunms \n");
    }
    printf("\n");
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            printf("Enter the no. b :");
            scanf("%d", &second[a][b]);
        }
    }
    printf("\n");
    for (i = 0; i < 1; i++)
    {
        for (i = 0; i < 10; i++)
        {
            printf(" ");
        }
        printf("so the sum of the matrix is \n");
    }
    printf("\n");
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            sum[a][b] = first[a][b] + second[a][b];
            printf("%d\t", sum[a][b]);
        }
        printf("\n");
    }
    printf("Exiting the program .........................\n");
    printf("\n");
    exit(0);
    return 0;
}
*/

/*
//  Odd
#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the no. to check odd and even :");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("the no is the even :%d",n);
    }
    else
    {
        printf("the no is odd :%d",n);
    }
    
}
*/

/*
//C program to check a number whether it is palindrome or not.

#include <stdio.h>
int main()
{
  int num, i, rev = 0;
  printf("Enter a number:");
  scanf("%d", &num);

  for (i = num; i > 0; i = i / 10)
  {
    rev = rev * 10 + i % 10;
  }
  if (rev == num)
  {
    printf("A palindrome number");
  }
  else
  {
    printf("Not a palindrome number");
  }
}
*/

/*
// Pointer
#include <stdio.h>
#include <math.h>
void times(int *j) //Created a function times
{
    *j = pow(*j, 10);
}
int main()
{
    int i = 4, *j;
    j = &i;
    times(j);
    printf("%d\n", i);
    return 0;
}
*/

/*
//  PrintHelloWithNoSemiColon
#include <stdio.h>

int main()
{
  //Here if we use 'if' then no need semi colon. 
  
    if (printf("Hello World")){}
    
    return 0;
}
##################################################################
// or
// we can use switch



int main()
{
    switch(printf("Hello World")){}

    return 0;
}
##################################################################
// or
// we can use while loop

int main()
{
    while (! printf("Hello World")){}
    
    return 0;
}
##################################################################
// or
// we can use d0 while loop
int main()
{
    do{} while (! printf("Hello World"));

    return 0;
}
#################################################################
// and we can use for loop 
int main()
{
    for (;!printf("Hello World");){}
    
    return 0;
}

##################################################################

#include <stdio.h>
#define SHOW printf("Hello World")

int main()
{
 // Printing hello world without semicolon using macros.
    if (SHOW){}
    
    return 0;
}

##################################################################

#include <stdio.h>

// Printing hello world without semicolon using command line arguments.
int main(int agrc, char *agrv[printf("Hello World")]){}
*/
