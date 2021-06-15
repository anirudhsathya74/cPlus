#include <stdio.h>

int main()

{

int a,b,c,match=0;

printf("Enter the sides of a triangle\n");

scanf("%d%d%d",&a,&b,&c);

printf("Side A is %d\n",a);

printf("Side B is %d\n",b);

printf("Side C is %d\n",c);

if (a==b)
match = match+1;

if (a==c)
match = match+2;

if (b==c)
match = match+3;

if (match == 0)

{

if((a+b)<=c)

printf("Not a Triangle 1\n");

else if ((b+c) <= a)

printf("Not a Triangle 2\n");

else if ((a+c) <= b)

printf("Not a Triangle 3\n");

else

printf("Triangle is scalene\n");

}

else if (match == 1)

{

if((a +b) <= c)

printf("Not a Triangle 4\n");

else

printf("Triangle is isoceles 1\n");

}

else if (match == 2)

{
    
if ((a+c) <= b)
    
printf("Not a Triangle 5\n");
    
else
    
printf("Triangle is isoceles 2\n");
}

else if (match == 3)

{
    
if ((b+c) <= a)
    
printf("Not a Triangle 6\n");
    
else
    
printf("Triangle is isoceles 3\n");

}

else

printf("Triangle is equilateral\n");

}