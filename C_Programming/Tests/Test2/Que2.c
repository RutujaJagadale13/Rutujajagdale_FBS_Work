void main()
{
	int no;
	printf("enter a no");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf("no is positive");
	}
	else if(no<0)
	{
		printf("no is negative");
	}
	else if(no==0)
	{
		printf("no is Neutral");
	}
}