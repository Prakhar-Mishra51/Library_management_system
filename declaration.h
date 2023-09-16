#include"bookStruct.h"
#include"dvdStruct.h"
#include"periodicalStruct.h"
using namespace std;

class Book
{
	private:
		book b;
	public:
		void getData(); //Enter Data of Book
		void showData(); //Print Data of Book

		void diskIn(int); //Read File
		void diskOut(); //Write in file.
				//
		void checkOut();
		void checkIn();
		static int diskCount();

		void diskFind( char*);
};

class Periodical
{
        private:
                periodical p;
        public:
                void getData(); //Enter Data of Book
                void showData(); //Print Data of Book

                void diskIn(int); //Read File
                void diskOut(); //Write in file.
                                //
                void checkOut();
                void checkIn();
                static int diskCount();

                void diskFind( char*);
};

class Dvd
{
        private:
                dvd d;
        public:
                void getData(); //Enter Data of Book
                void showData(); //Print Data of Book

                void diskIn(int); //Read File
                void diskOut(); //Write in file.
                                //
                void checkOut();
                void checkIn();
                static int diskCount();

                void diskFind( char*);
};

