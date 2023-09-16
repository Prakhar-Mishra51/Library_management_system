#include "header.h"
#include "declaration.h"


void Book::checkIn()
{
	int id;
        cout<<"Enter Book No.: ";
        cin>>id;
        int n=Book::diskCount();
        if(id>n)
        {
                cerr<<"Book does not exist"<<endl;
                exit(1);
        }
        fstream file("BOOKFILE.DAT",ios::in | ios::out | ios::binary);
        file.seekg(id*sizeof(Book),ios::beg);
        file.read(reinterpret_cast<char*>(this),sizeof(*this));

	if(strcmp(b.state,"[CHECKED_OUT]")==0)
	{
		strncpy(b.state,"[ON_SHELF]",sizeof(b.state));
		b.state[sizeof(b.state)]='\0';
		cout<<"\n CHECKING IN......";

		file.seekp(id*sizeof(Book),ios::beg);
		file.write(reinterpret_cast<char*>(this),sizeof(*this));
		file.close();
		cout<<"\nCHECKED IN Succesfully";
	}
	else
	{
		cerr<<"\nAlready on Shelf.";
	}

}

void Periodical::checkIn()
{
        int id;
        cout<<"Enter Periodical No.: ";
        cin>>id;
        int n=Periodical::diskCount();
        if(id>n)
        {
                cerr<<"Periodical does not exist"<<endl;
                exit(1);
        }
        fstream file("periodicals.dat",ios::in | ios::out | ios::binary);
        file.seekg(id*sizeof(Periodical),ios::beg);
        file.read(reinterpret_cast<char*>(this),sizeof(*this));

        if(strcmp(p.state,"[CHECKED_OUT]")==0)
        {
                strncpy(p.state,"[ON_SHELF]",sizeof(p.state));
                p.state[sizeof(p.state)]='\0';
                cout<<"\n CHECKING IN......";

                file.seekp(id*sizeof(Periodical),ios::beg);
                file.write(reinterpret_cast<char*>(this),sizeof(*this));
                file.close();
                cout<<"\nCHECKED IN Succesfully";
        }
        else
        {
                cerr<<"\nAlready on Shelf.";
        }

}

void Dvd::checkIn()
{
        int id;
        cout<<"Enter DVD No.: ";
        cin>>id;
        int n=Dvd::diskCount();
        if(id>n)
        {
                cerr<<"DVD does not exist"<<endl;
                exit(1);
        }
        fstream file("dvds.dat",ios::in | ios::out | ios::binary);
        file.seekg(id*sizeof(Dvd),ios::beg);
        file.read(reinterpret_cast<char*>(this),sizeof(*this));

        if(strcmp(d.state,"[CHECKED_OUT]")==0)
        {
                strncpy(d.state,"[ON_SHELF]",sizeof(d.state));
                d.state[sizeof(d.state)]='\0';
                cout<<"\n CHECKING IN......";

                file.seekp(id*sizeof(Dvd),ios::beg);
                file.write(reinterpret_cast<char*>(this),sizeof(*this));
                file.close();
                cout<<"\nCHECKED IN Succesfully";
        }
        else
        {
                cerr<<"\nAlready on Shelf.";
        }

}

