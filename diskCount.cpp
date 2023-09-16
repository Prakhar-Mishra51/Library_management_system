#include"header.h"
#include"declaration.h"

int Book::diskCount()
{
	ifstream infile;

	infile.open("books.dat",ios::binary);
	infile.seekg(0,ios::end);
	return (int)infile.tellg()/sizeof(Book);

}

int Periodical::diskCount()
{
        ifstream infile;

        infile.open("periodicals.dat",ios::binary);
        infile.seekg(0,ios::end);
        return (int)infile.tellg()/sizeof(Periodical);
}

int Dvd::diskCount()
{
        ifstream infile;

        infile.open("dvds.dat",ios::binary);
        infile.seekg(0,ios::end);
        return (int)infile.tellg()/sizeof(Dvd);
}       
