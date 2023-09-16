#include "header.h"
#include "declaration.h"

const int MAX=80;

void Book::getData()
{
	cin.ignore();
	cout<<"\nEnter Book  Title: ";
	cin.getline(b.title,sizeof(b.title));

	cout<<"\nEnter Author name: ";
	cin.getline(b.author,sizeof(b.author));

	cout<<"\nEnter Publication Date (Format dd/mm/yyyy): ";
	cin.getline(b.pub_date,sizeof(b.pub_date));

	cout<<"\nEnter publication name: ";
        cin.getline(b.pub_name,sizeof(b.pub_name));

	cout<<"\nEnter publlisher location: ";
	cin.getline(b.pub_location,sizeof(b.pub_location));
	
	strncpy(b.state, "[ON_SHELF]", sizeof(b.state));
	
}

void Periodical::getData()
{
        cin.ignore();
        cout<<"\nEnter Periodical's  Title: ";
        cin.getline(p.title,sizeof(p.title));

        cout<<"\nEnter Author name: ";
        cin.getline(p.author,sizeof(p.author));

        cout<<"\nEnter Publication Date (Format dd/mm/yyyy): ";
        cin.getline(p.pub_date,sizeof(p.pub_date));

        cout<<"\nEnter periodical's name: ";
        cin.getline(p.periodical_name,sizeof(p.periodical_name));
	
        cout<<"\nEnter page range (format- pp.xx-xx) ";
        cin.getline(p.page_range,sizeof(p.page_range));

        strncpy(p.state, "[ON_SHELF]", sizeof(p.state));

}

void Dvd::getData()
{
        cin.ignore();
        cout<<"\nEnter DVD  Title: ";
        cin.getline(d.title,sizeof(d.title));

        cout<<"\nEnter Artist name: ";
        cin.getline(d.artist,sizeof(d.artist));

        cout<<"\nEnter Date (Format dd/mm/yyyy): ";
        cin.getline(d.date,sizeof(d.date));

        cout<<"\nEnter Label: ";
        cin.getline(d.label,sizeof(d.label));

        strncpy(d.state, "[ON_SHELF]", sizeof(d.state));

}


