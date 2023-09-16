#include"header.h"
#include"declaration.h"

using namespace std;

int main()
{
	Book b1;
	Periodical p1;
	Dvd d1;

	int command;
	char query[30];

	do
	{
	cout<<"\n============LIBRARY INVENTORY MANAGER===============\n"
		<<"0-QUIT\n"
		<<"1-DISPLAY BOOK\n"
		<<"2-DISPLAY PERIODICALS\n"
		<<"3-DISPLAY DVD'S\n"
		<<"10-Checkout Book\n"
		<<"11-Checkout Periodical\n"
		<<"12-Checkout Dvd\n"
		<<"20-CheckIn Book\n"
                <<"21-CheckIn Periodical\n"
                <<"22-CheckIn Dvd\n"
		<<"30-Enter New Book\n"
		<<"31-Enter new Periodicals\n"
		<<"32-Enter new DVD\n"	
		<<"==============================\n"
		<<"COMMAND: ";
		cin>>command;

		switch(command)
		{
			case 0: cout<<"\nQuitting...";
				break;
			case 1:b1.showData();
			       break;
			case 2:p1.showData();
			       break;
			case 3:d1.showData();
			       break;
			case 10:b1.checkOut();
				break;
			case 11:p1.checkOut();
				break;
			case 12: d1.checkOut();
				 break;
			case 20:b1.checkIn();
				break;
			case 21:p1.checkIn();
				break;
			case 22:d1.checkIn();
				break;
			case 30:b1.getData();
        	                b1.diskOut();
				break;
			case 31:p1.getData();
                                p1.diskOut();
				break;
			case 32:d1.getData();
                                d1.diskOut();
				break;
	

			default:cout<<"\nInvalid command...";
				break;
		}
	/*       if(command==1)
		{
			int n=Book::diskCount();
			cout<<"\n No. of Book are: "<<n;
				for(int j=0; j<n;j++)
			       	{
					cout<<"\n..........New Book.........";
					cout<<"\nBook "<<j+1;
					b1.diskIn(j);
					b1.showBook();
				}
		}
	*/	}while(command!=0);
	cout<<endl;
	return 0;
}
