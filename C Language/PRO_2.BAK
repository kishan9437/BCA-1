/*banking system project*/
#include<stdio.h>
#include<conio.h>
int list();
void Diposite();
void Withdrow();
void Transfer();
void checkDetail();
void last();
int Totalamount=1000,amount,Amo,Tr,TotalDiposite=0,Totalwith=0,TotalTr=0;
int acc;
char a[50];
void main()
{
	clrscr();
	printf("\n Enter your name: ");
	gets(a);
	printf("\n Enter your acc number: ");
	scanf("%d",&acc)
	while(1)
	{
		clrscr();
		switch(list())
		{
			case 1:
				Diposite();
				TotalDiposite+=amount;
				break;
			case 2:
				Withdrow();
				if(Amo<=Totalamount)
					Totalwith+=Amo;
				break;
			case 3:
				Transfer();
				if(Tr<=Totalamount)
					TotalTr+=Tr;
				break;
			case 4:
				checkDetail();
				break;
			case 5:
				clrscr();
				last();
				getch();
				exit(0);
			default:
				printf("\n Invalid choice");

		}
		getch();
	}

}
int list()
{
	char ch;
	printf("\n1.Diposite Amount: ");
	printf("\n2.Withdrow Amount: ");
	printf("\n3.Tranfer Amount: ");
	printf("\n4.Check Detail: ");
	printf("\n5.Exit: ");
	printf("\n Enter your choice: ");
	scanf("%d",&ch);
	return(ch);
}
void Diposite()
{
	printf("\n Enter the amount you want to diposite: ");
	scanf("%d",&amount);
	Totalamount+=amount;
}
void Withdrow()
{
	printf("\n Enter the amount u wish to withdrow: ");
	scanf("%d",&Amo);
	if(Amo<=Totalamount)
		Totalamount-=Amo;
	else
		printf("\n less amount withdrow is not possible: ");
}
void Transfer()
{
	printf("\n Enter the amount u went to transfer: ");
	scanf("%d",&Tr);
	if(Tr<=Totalamount)
		Totalamount-=Tr;
	else
		printf("\n less amount transfer is not possible: ");
}
void checkDetail()
{
	printf("\n Total Amount:%d ",Totalamount);
	printf("\n Total Diposite amount:%d ",TotalDiposite);
	printf("\n Total Withdrow amount:%d ",Totalwith);
	printf("\n Total Transfer amount:%d ",TotalTr);
}
void last()
{
	printf("********************************************");
	printf("\n Your Name:%s",a);
	printf("\n Account Number:%d",acc);
	printf("\n Total Amount:%d ",Totalamount);
	printf("\n Total Diposite amount:%d ",TotalDiposite);
	printf("\n Total Withdrow amount:%d ",Totalwith);
	printf("\n Total Transfer amount:%d ",TotalTr);
	printf("\n \n ************* THANK YOU **************");
}