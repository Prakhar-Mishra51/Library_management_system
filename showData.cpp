#include "header.h"
#include "declaration.h"

void Book::showData()
{
	int n=diskCount();

        for(int j=0; j<n;j++)
        {
		diskIn(j);

                cout<<"\n| [ "<<j<<"], ";
		cout<<b.state<<", "
			<<b.author<<", "
			<<b.pub_date<<", "
			<<b.title<<", "
			<<b.pub_location<<", "
			<<b.pub_name<<".";

         }
}

void Periodical::showData()
{
        int n=diskCount();

        for(int j=0; j<n;j++)
        {
                diskIn(j);

                cout<<"\n| [ "<<j<<"], ";
                cout<<p.state<<", "
                        <<p.author<<", "
                        <<p.pub_date<<", "
                        <<p.title<<", "
                        <<p.periodical_name<<", "
                        <<p.page_range<<".";

         }
}
void Dvd::showData()
{
        int n=diskCount();

        for(int j=0; j<n;j++)
        {
                diskIn(j);

                cout<<"\n| [ "<<j<<"], ";
                cout<<d.state<<", "
                        <<d.artist<<", "
                        <<d.title<<", "
                        <<d.label<<", "
                        <<d.date<<", ";

         }
}





