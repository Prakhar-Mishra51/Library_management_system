#ifndef PERIODICALSTRUCT_H
#define PERIODICALSTRUCT_H



struct periodical	
{
	char author[128];
	char pub_date[11]; //format: dd/mm/yyyy
	char title[128];
	char periodical_name[128];
	char page_range[16]; //format( pp.xx-xx )
	char state[13]; //eithr [ON_Shelf] or [Checked_Out]

};

#endif 
