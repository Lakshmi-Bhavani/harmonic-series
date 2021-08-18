#include<stdio.h>
void main()
{
	int num,i;
	float sum=0.0;
	printf("enter number of terms");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	 if(i==1)
	 {
	 	printf("%d",i);
	 	sum=sum+i;
	 	continue;
	 }	
	 	printf("+ 1/%d",i);
	 	sum+=1/(float)i;
	}
	printf("\n the sum of the series is %f",sum);
}
