#include "header.h"
#include "declaration.h"

void Book::diskOut()
{
	ofstream outfile;
	outfile.open("books.dat",ios::binary | ios::app);
	outfile.write((char*)this,sizeof(*this));
	outfile.close();
}

void Periodical::diskOut()
{
        ofstream outfile;
        outfile.open("periodicals.dat",ios::binary | ios::app);
        outfile.write((char*)this,sizeof(*this));
        outfile.close();
}

void Dvd::diskOut()
{
        ofstream outfile;
        outfile.open("dvds.dat",ios::binary | ios::app);
        outfile.write((char*)this,sizeof(*this));
        outfile.close();
}

