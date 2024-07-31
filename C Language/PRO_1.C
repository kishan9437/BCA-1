/*parking management*/
#include<stdio.h>
#include<conio.h>
void Delete();
int menu() ;
void showDetail();
void Cycle();
void Riksha();
void Bus();
int nor=0,nob=0,noc=0,amount=0,count=0;
void main()
{
	while(1)
	{
	clrscr();
	switch(menu())
	{
		case 1:
			Bus();
			break;
		case 2:
			Cycle();
			break;
		case 3:
			Riksha();
			break;
		case 4:
			showDetail();
			break;
		case 5:
			Delete();
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("\n Invalid Choice");
	}
	getch();
	}
}
void Delete()
{
	nor=0;
	noc=0;
	nob=0;
	amount=0;
	count=0;
}
int menu()
{
	int ch;
	printf("\n1.Enter Bus:");
	printf("\n2.Enter Cycle:");
	printf("\n3.Enter Riksha:");
	printf("\n4.Show status:");
	printf("\n5.Delete Data:");
	printf("\n6.exit:");
	printf("\n Enter any Choice :\n");
	scanf("%d",&ch);
	return(ch);
}
void showDetail()
{
	printf("\n Number of Bus=%d",nob);
	printf("\n Number of Cycle=%d",noc);
	printf("\n Number of Riksha=%d",nor);
	printf("\n Total Number of Vehicle=%d",count);
	printf("\n Total gain amount=%d",amount);
}
void Cycle()
{
	printf("\n Entry successfull");
	noc++;
	amount=amount+20;
	count++ ;
}
void Riksha()
{
	printf("\n Entry successfull");
	nor++;
	amount=amount+50;
	count++;
}

void Bus()
{
	printf("\n Entry successfull");
	nob++;
	amount=amount+100;
	count++ ;
}