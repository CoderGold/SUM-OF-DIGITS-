#include<stdio.h>
#include<math.h>
int sum(int num)
{
	int digit;
	if(num!=0)
	{
	int noofdigits=(int)log10(num);
	 digit=num/pow(10,noofdigits);
	num=num-(digit*pow(10,noofdigits));
	return digit+sum(num);
    }
	    	
	else
	{
		return digit;		
	}
	
}
main()
{
	int num;
	printf("Enter The Number Whose Digits Are To be added: ");
	scanf("%d",&num);
	printf("%d",sum(num));
}
