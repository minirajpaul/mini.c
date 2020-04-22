#include<stdio.h>
Void main()
{
int marks;
Printf("enter your marks");
Scanf("%d",&marks);
if(marks<0||marks>100)
{ 
Printf("wrong entry");
}
else if(marks<50)
{
Printf("gradef");
}
elseif(marks>=50&&marks<60)
{
Printf("grade d");
}
else if("marks>=60&&marks<70)
{
Printf("gradec");
}
elseif("marks>=70&&marks<80)
{
Printf("gradeb");
}
elseif("marks>=80&&marks<90)
{
Printf("grade a");
}
else 
{
Printf(" grade a+");
}
return 0;
}

