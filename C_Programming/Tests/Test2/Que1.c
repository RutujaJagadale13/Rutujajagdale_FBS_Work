 void main()
 {
 	int units,bill;
 	printf("enter a units");
 	scanf("%d",&units);
 	
 	if(units>=1&&units<=50)
 	{
 		bill=30*units;
 		printf("the total bill is=%d",bill);
	 }
	 else if(units>=51&&units<=150)
	 {
	 	    bill=30*units;
	 		printf("the total bill is=%d",bill);
	 }
    else if(units>=151)
    {
    	bill=30*units;
    	printf("the total bill is=%d",bill);
    	
	}
	 
 }