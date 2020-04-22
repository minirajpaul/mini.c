#include<stdio.h>
Void main()
{README.mdnt marks;
printf("enter your marks");
scanf("%d",&marks);
if(marks<0||marks>100)
{
Printf("wrong entry");
}
elseif(marks<50)
{
printf("grade f");
}
elseif (marks>=50&&marks<60)
{
printf("grade d");
}
elseif(marks>=60&&marks<70)
{
printf("grade c");
}
elseif (marks>=70&&marks<80)
{
Printf("grade b");
}
elseif (marks>=80&&marks<90)
{
printf("grade a");
}
else
{
printf( "grade a+");
}
return 0;
}
