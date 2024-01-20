#include<stdio.h>
int main ()
{
	float price, qty, total=0.0, discount=0.0, netbill=0.0;
	 
	 printf("\nEnter the Price:");
	 scanf("%f", &price);
	 
	 printf("\nEnter the Quantity:");
	 scanf("%f", &qty);
	 
	 total = price * qty;
	 printf("\nTotal=%f", total);
	 
	 if(total>=200)
	 
	{
	 discount = total * 0.15;
	 printf("\nDiscount=%f", discount);
	 
	 netbill = total - discount;
	 printf("\nNetBill=%f", netbill);
    }
	
    else
	{
   	 printf("\nSorry We does not Give Discount");
    } 
	 
	 return 0;
	 
}