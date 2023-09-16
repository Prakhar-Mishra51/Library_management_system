#include"header.h"
#include"declaration.h"

void Book::diskFind(char* query)
{
	ifstream infile;
	infile.open("BOOKFILE.DAT",ios::binary);

	int n= Book::diskCount();

	for(int i=0;i<n;i++)
	{
		char Buffer[30];
		infile.seekg(i*sizeof(Book));
		infile.read((char*)Buffer,sizeof(Buffer));
		if(strcmp(Buffer, query) == 0)
		{
			cout<<"\nFound the Book at no. "<<i;
			exit(0);
		}
	}
	cout<<"\nBook not found";
}
