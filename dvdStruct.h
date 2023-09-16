#ifndef DVDSTRUCT_H
#define DVDSTRUCT_H



struct dvd	
{
	char artist[128];
	char title[128];
	char label[81];
	char date[11]; //format( dd/mm/yyyy )
	char state[13]; //eithr [ON_Shelf] or [Checked_Out]

};

#endif 
