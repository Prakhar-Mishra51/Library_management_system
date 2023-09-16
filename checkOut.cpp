#include "header.h"
#include "declaration.h"



void Book::checkOut()
{
	int id;
        cout<<"Enter Book No.: ";
        cin>>id;
        int n=Book::diskCount();
        if(id>n)
        {
                cerr<<"Book does not exist"<<endl;
                return;
        }
        fstream file("books.dat",ios::in | ios::out | ios::binary);
       
        file.seekg(id*sizeof(Book),ios::beg);

        file.read(reinterpret_cast<char*>(this),sizeof(*this));


	if(strcmp(b.state,"[ON_SHELF]")==0)
	{
		strncpy(b.state,"[CHECKED_OUT]",sizeof(b.state));
		b.state[sizeof(b.state)]='\0';
		cout<<"\n CHECKING OUT......";

		file.seekp(id*sizeof(Book),ios::beg);
		file.write(reinterpret_cast<char*>(this),sizeof(*this));
		file.close();
		cout<<"\nCHECKED out Succesfully";

	}
	else
	{
		cerr<<"\nAlready Checked Out....";
	}
}

void Periodical::checkOut()
{
        int id;
        cout<<"Enter Periodical No.: ";
        cin>>id;
        int n=Periodical::diskCount();
        if(id>n)
        {
                cerr<<"Perioidical does not exist"<<endl;
                return;
        }
        fstream file("perioidcals.dat",ios::in | ios::out | ios::binary);
        file.seekg(id*sizeof(Periodical),ios::beg);
        file.read(reinterpret_cast<char*>(this),sizeof(*this));
        if(strcmp(p.state,"[ON_SHELF]")==0)
        {
                strncpy(p.state,"[CHECKED_OUT]",sizeof(p.state));
                p.state[sizeof(p.state)]='\0';
                cout<<"\n CHECKING OUT......";

                file.seekp(id*sizeof(Periodical),ios::beg);
                file.write(reinterpret_cast<char*>(this),sizeof(*this));
                file.close();
                cout<<"\nCHECKED out Succesfully";

        }
        else
        {
                cerr<<"\nAlready Checked Out....";
        }
}
void Dvd::checkOut()
{
        int id;
        cout<<"Enter DvD No.: ";
        cin>>id;
        int n=Dvd::diskCount();
        if(id>n)
        {
                cerr<<"DvD does not exist"<<endl;
                return;
        }
        fstream file("dvds.dat",ios::in | ios::out | ios::binary);

        file.seekg(id*sizeof(Dvd),ios::beg);

        file.read(reinterpret_cast<char*>(this),sizeof(*this));

        
        if(strcmp(d.state,"[ON_SHELF]")==0)
        {
                strncpy(d.state,"[CHECKED_OUT]",sizeof(d.state));
                d.state[sizeof(d.state)]='\0';
                cout<<"\n CHECKING OUT......";

                file.seekp(id*sizeof(Dvd),ios::beg);
                file.write(reinterpret_cast<char*>(this),sizeof(*this));
                file.close();
                cout<<"\nCHECKED out Succesfully";
        }
        else
        {
                cerr<<"\nAlready Checked Out....";
        }
}


