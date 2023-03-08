#include<stdio.h>
int acctype();
void sbiacc(int b);
void ubiacc(int b);
void yesacc(int b);

int main ()
{
	int a,b;
	printf("--------------------------------------------\n");
	printf("          Welcome to Banking System         \n");
	printf("--------------------------------------------\n");
	printf("\n Choose your bank using the numbers\n");
	printf("\n 1.State bank of india\n");
	printf("\n 2.Union bank of india\n");
	printf("\n 3.Yes bank \n");
	printf("\n Enter your choice : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			{       b=acctype();
				sbiacc(b);
				break;
			}
		case 2:
			{
				b=acctype();
				ubiacc(b);
				break;
			}
		case 3:
			{
				b=acctype();
				yesacc(b);
				break;
			}
			default:printf("\n Enter a valid code\n");
		
	}
	return 0;
}
int acctype()
{
	int b ;
	printf("--------------------------------------------\n");
	printf("\n Choose your account type by using numbers \n");
	printf("--------------------------------------------\n");
	printf("\n 1.Savings account \n");
	printf("\n 2.Demat account \n");
	printf("\n 3.Current account \n");
	printf("\n Enter your account choice : ");
	scanf("%d",&b);
	return b;
}
void sbiacc(int b)
{
	printf("--------------------------------------------\n");
	printf("\n Features of STATE BANK OF INDIA account  \n ");
	printf("--------------------------------------------\n");
	switch (b)
	{
		case 1:
			{
				printf("\n Safe deposit locker service is availabe\n");
				printf("\n Savings account comes with a passbook and cheque book feature\n");
				printf("\n NetBanking and MobileBanking\n");
				printf("\n Interest rate : 2.50 percent p.a\n\n");
				break;
			}
		case 2:
			{
				printf("\n you don't need to maintain a minimum balance in your trading account\n");
				printf("\n Easy Dematerialization of Securities. \n");
				printf("\n SBI offers a 3-in-1 account including Demat, trading, and bank account\n");
				printf("\n Interest rate : 8.30 percent p.a \n\n");
				break;
			}
		case 3:
			{
			        printf("\n Low Monthly Average Balance: Rs 5,000 \n");
                                printf("\n Free Cash Deposit upto Rs 5,00,000/- per Month \n");
                                printf("\n Free Cash Withdrawal from Home Branch \n");
                                printf("\n Interest rate : 9.40 percent p.a \n\n");
				break;
			}
			default:printf("\n Enter a valid code\n");
	}
}
void ubiacc(int b)
{
	printf("--------------------------------------------\n");
	printf("\n Features of UNION BANK OF INDIA account \n");
	printf("--------------------------------------------\n");
	switch(b)
	{
		case 1:
			{
				printf("\n No minimum balance requirement as account can be opened with Zero balance\n");
                                printf("\n Cash Withdrawal (self) at non base branches is allowed up to Rs.25000 \n");
                                printf("\n No monthly service fees \n");
                                printf("\n Interest rate : 4.30 percent p.a \n\n");
			       	break;
		       	}
	       	case 2:
			{
				printf("\n Conduct hassle-free transactions on your shares. Manage your securities at your fingertips  \n");
                                printf("\n Union Demat will empower you with hassle-free, fast and accurate electronic transactions \n");
                                printf("\n All our Demat account holders can avail the net-based facilities ‘Easy’ & ‘Easiest’ provided by CDSL \n");
                                printf("\n Interest rate : 7.40 percent p.a \n\n");

				break;
			}
		case 3:
			{
				printf("\n Transfer of accounts between our wide network of branches without any charge \n");
                                printf("\n ATM cards are given to individual current accounts, joint individuals and to the accounts of proprietary concerns\n");
                                printf("\n It is a non-interest bearing bank account \n");
                                printf("\n Interest rate : 4.40 percent p.a \n\n");

				break;

			}
			default:printf("\n Enter a valid code\n");
	}
}
void yesacc(int b)
{
	printf("--------------------------------------------\n");
	printf("\n   Features of YES BANK INDIA account    \n ");
	printf("--------------------------------------------\n");
	switch(b)
	{
		case 1:
			{
				printf("\n No additional charges for transactions across all 1000+ YES BANK Branches \n");
                                printf("\n enhanced free limits on Cash Deposits and Demand Drafts \n");
                                printf("\n Free RTGS/NEFT through Branch  \n");
                                printf("\n Interest rate : 6.25 percent p.a \n\n");

				break;
			}
		case 2:
			{
				printf("\n The Bank offers its depository / demat services to retail as well as corporate investors \n");
                                printf("\n Your Demat account with YES BANK will enable you to easily convert your shares from physical mode to electronic units \n");
                                printf("\n ES BANK offers demat services from a network of 279 Branches \n");
                                printf("\n Interest rate : 8.30 percent p.a \n\n");

				break;
			
			}
		case 3:
			{
				printf("\n Free cash deposits ranging up to INR 2 lac per month at any branch across India, for Business Value Current Account \n");
                                printf("\n Issue of 60 free demand drafts per month across India for Business Value Current Account \n");
                                printf("\n Free Payable At Par cheque leaves for Exclusive Business Current Account \n");
                                printf("\n Interest rate : 5.20 percent p.a \n\n");

				break;
			}
			default:printf("\n Enter a valid code\n");
	}
}
