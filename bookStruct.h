#ifndef BOOKSTRUCT_H
#define BOOKSTRUCT_H


struct book
{
	char author[128];
	char pub_date[11]; //format: dd/mm/yyyy
	char title[128];
	char pub_location[81];
	char pub_name[81];
	char state[13]; //eithr [ON_Shelf] or [Checked_Out]







/*
	char name[30];
	char publication_date[11] //format (dd/mm/yyyy)
	char author[30];
	int edition;
	char publication[30];
	char publisher[30];
*/
};

#endif 
