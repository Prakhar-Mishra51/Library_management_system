#include "header.h"
#include "declaration.h"

void Book::diskIn(int pn)
{
	ifstream infile;
	infile.open("books.dat",ios::binary);
	infile.seekg(pn*sizeof(Book),ios::beg);
	infile.read((char*)this,sizeof(*this));
	b.state[sizeof(b.state) ] = '\0';
	infile.close();
}

void Periodical::diskIn(int pn)
{
        ifstream infile;
        infile.open("periodicals.dat",ios::binary);
        infile.seekg(pn*sizeof(Periodical),ios::beg);
        infile.read((char*)this,sizeof(*this));
        p.state[sizeof(p.state) ] = '\0';
        infile.close();
}

void Dvd::diskIn(int pn)
{
        ifstream infile;
        infile.open("dvds.dat",ios::binary);
        infile.seekg(pn*sizeof(Dvd),ios::beg);
        infile.read((char*)this,sizeof(*this));
        d.state[sizeof(d.state) ] = '\0';
        infile.close();
}



