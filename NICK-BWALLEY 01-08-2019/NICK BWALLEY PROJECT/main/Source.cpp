﻿#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	int num;
	int sum;
	int sum1;
	int sum2;
	int sum3;

	string fname, sname, f_name, l_name, location;
	string Marks;
	string email1, email2;
	string religion;
	char count;
	float choice;
	int choice1;
	int choice2;
	int choice3;
	int choice4;
	int choice5;
	int choice6;
	int choice7;



	cout << "\n*******************************************************************************\n\n";

	cout << "\t\t\t\t STRATHMORE UNIVERSITY\n";
	cout << "\n\t\t\tCONSOLE ADMISSION AND COURSE ENROLLMENT SYSTEM\n";
	cout << "\n\t\tPLEASE FILL IN YOUR BIO-DATA APPROPRIATELY....\n\n";
	cout << "**********************************************************************************\n";
	cout << "-------------------------------------------------------------\n";
	cout << "\n\nENTER YOUR FULL NAMES: (please use capital letters)\n";
	cout << "-----------------------------------------------------------\n";


	
	cout << "ENTER  YOUR FIRST NAME :(characters only) \n\t";
	cin >> fname;

	cout << "ENTER YOUR SURNAME\n\t";
	cin >> sname;
	cout << "\nYOUR NAME IS " << sname << " " << fname << "\n\n";
	cout << "-----------------------------------------------------------------------------------\n";
	   

	bool        gotInt = false;
	string intext;
	int         inval;

	// Loop until we get a valid integer input
	while (!gotInt)
	{
		char* chk;
		char mn[10];

		cout << "ENTER YOUR TELEPHONE NUMBER :(integers only) \n\t ";
		cin >> intext;

		// strtol() converts as much of the input string to an
		// integer as possible.  chk points to the first character
		// in the string that is not an integer digit.  If this
		// character is anything other than ASCII nul (0) or
		// whitespace, then the input string is not a properly
		// formatted integer.  The '10' parameter indicates that
		// we're interested in base-10 numbers, so hex inputs such
		// as 0x1A2B will be rejected.
		//
		inval = (int)strtol(intext.c_str(), &chk, 10);


		if (*chk == '\0' || isspace(*chk))
		{
			gotInt = true;
		}
	}


	cout << "ENTER YOUR EMAIL ADDRESS: (no spaces or caps) \n\t ";
	cin >> email1;
	int day;
	int month;
	int year;
	cout << "ENTER YOUR DATE OF BIRTH :\n";

	do
	{
		cout << "Enter your day of birth \n";
		cin >> day;
	} while (day > 31);
		
		
	
	do {
		cout << "Enter your month of birth" << endl;
		cin >> month;
	} while (month > 12);
	
	
	do {
		cout << "Enter your year of birth\n";
		cin >> year;
	} while (year < 1985 || year>2002);
	
	cout << "YOUR DATE OF BIRTH IS " << day << "," << month << ", " << year;

	cout << "\n-----------------------------------------------------------------------------------\n\n";
	cout << " ENTER YOUR PARENTS OR  GUARDIANS DETAILS APPRORIATELY (NEXT OF KIN DETAILS)\n";
	cout << "-----------------------------------------------------------------------------------\n";
	cout << "ENTER FIRST NAME \n\t";
	cin >> f_name;
	cout << "ENTER LAST NAME \n\t";
	cin >> l_name;
	cout << " \nNAME IS " << l_name << " " << f_name;
	cout << "\n------------------------------------------------------------------------------------\n";

	
	bool        gotInt1 = false;
	std::string intext1;
	int         inval1;

	// Loop until we get a valid integer input
	while (!gotInt1)
	{
		char* chk;
		char mn[10];

		cout << "ENTER TELEPHONE NUMBER :(integers only) \n\t ";
		cin >> intext1;

		// strtol() converts as much of the input string to an
		// integer as possible.  chk points to the first character
		// in the string that is not an integer digit.  If this
		// character is anything other than ASCII nul (0) or
		// whitespace, then the input string is not a properly
		// formatted integer.  The '10' parameter indicates that
		// we're interested in base-10 numbers, so hex inputs such
		// as 0x1A2B will be rejected.
		//
		inval1 = (int)strtol(intext1.c_str(), &chk, 10);


		if (*chk == '\0' || isspace(*chk))
		{
			gotInt1 = true;
		}
	}

	cout << "ENTER EMAIL ADDRESS: (no spaces or caps) \n\t ";
	cin >> email2;
	cout << "ENTER HOME LOCATION \n\t";
	cin >> location;

	bool        gotInt2 = false;
	std::string intext2;
	int         inval2;

	// Loop until we get a valid integer input
	while (!gotInt2)
	{
		char* chk;
		char mn[10];

		cout << "ENTER ID NUMBER :(integers only) \n\t ";
		cin >> intext2;

		// strtol() converts as much of the input string to an
		// integer as possible.  chk points to the first character
		// in the string that is not an integer digit.  If this
		// character is anything other than ASCII nul (0) or
		// whitespace, then the input string is not a properly
		// formatted integer.  The '10' parameter indicates that
		// we're interested in base-10 numbers, so hex inputs such
		// as 0x1A2B will be rejected.
		//
		inval2 = (int)strtol(intext2.c_str(), &chk, 10);


		if (*chk == '\0' || isspace(*chk))
		{
			gotInt2 = true;
		}
	}

	cout << "----------------------------------------------------------------------------------------\n";
	cout << "\n\n###################################################################################\n\n";
	cout << "PLEASE CONFIRM THAT THE INFORMATION FILLED IN ABOVE ARE CORRECT\n";
	cout << "-------------------------------------------------------------------------------------\n";
	cout << "YOUR PERSONAL DETAILS\n";
	cout << "-------------------------------------------------------------------------------------\n";
	cout << "YOUR NAME IS : " << sname << " " << fname << endl;
	cout << "YOUR TELEPHONE NUMBER IS : " << intext << endl;
	cout << "YOUR EMAIL ADDRESS IS : " << email1 << endl;
	cout << "YOUR DATE OF BIRTH IS : " << day << "," << month << ","<< year << endl;

	cout << "\n-------------------------------------------------------------------------------------\n";
	cout << "PARENTS / GUARDIANS DETAILS\n";
	cout << "-------------------------------------------------------------------------------------\n";
	cout << " NAME IS : " << l_name << " " << f_name << endl;
	cout << "TELEPHONE NUMBER IS : " << intext1 << endl;
	cout << "EMAIL : " << email2 << endl;
	cout << "LOCATION IS : " << location << endl;
	cout << "ID NUMBER IS : " << intext2 << endl;
	
	cout << "\n#####################################################################################\n";





	cout << "\n-----------------------------------------------------------------------------------\n\n";
	cout << "\n\nENTER KCSE GRADE\n";
	cout << "Please pick any of this numbers,that correspond to your KCSE grade\n";
	cout << "1 -  (A)\n";
	cout << "2 -  (A-)\n";
	cout << "3 -  (B+)\n";
	cout << "4 -  (B)\n";
	cout << "5 -  (B-)\n";
	cout << "6 -  (C+)\n";
	cout << "7 -  (C)\n";
	cout << "8 -  (C-)\n";

	cin >> num;
	cout << "YOUR GRADE IS :";
	switch (num)
	{
	case 1:
		cout << "GRADE (A)" << endl;
		break;
	case 2:
		cout << "GRADE (A-)" << endl;
		break;
	case 3:
		cout << "GRADE (B+)" << endl;
		break;
	case 4:
		cout << "GRADE (B)" << endl;
		break;
	case 5:
		cout << "GRADE (B-)" << endl;
		break;
	case 6:
		cout << "GRADE (C+)" << endl;
		break;
	case 7:
		cout << "GRADE (C)" << endl;
		break;
	case 8:
		cout << "GRADE (C-)" << endl;
		break;
	default:
		cout << "ERROR! INVALID SELECTION..\n\t PLEASE TRY AGAIN.." << endl;
		break;
	}

	if (num == 1)
	{
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nIN ACCORDANCE TO YOUR GRADE, YOU CAN PERSUE THE COURSES BELOW....\n\t";
		cout << "\n  KINDLY NOTE THAT YOU MUST SIT FOR AN ENTRY EXAM,\n\t TO DETERMINE YOUR ENTRY TO THE COURSE.\n";

		cout << "\n1. Bachelor in Informatics & computer science\n";
		cout << "2. Bachelor in Bussiness & Information Technology\n";
		cout << "3. Bachelor in Law\n";
		cout << "4. Bachelor in medicine\n";
		cout << "5. Bachelor in Interior Design\n";
		cout << "6. Bachelor in Accounting\n";
		cout << "7. Bachelor in Business Management\n";
		cout << "8. Bachelor in Actural science\n";
		cout << "9. Bachelor in mechanical engineering\n";
		cout << "10. Bachelor in software engineeering\n";
		cout << "11. Bachelor in Economics and Finance\n";
		cout << "12. Bachelor in Economics and statistics\n";
		cout << "13. Bachelor in Architecture\n";
		cout << "14. Bachelor in criminology\n";
		cout << "15. Bachelor in Commerce;\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";

		cout << "\nKINDLY NOTE THAT DOING AN ENTRY EXAM IS MANDATORY\n";
		cout << "IN ADDITION, NOTE THAT YOU MUST ACQUIRE A MINIMUM AVERAGE OF 70% \n\tTO BE ABLE TO QUALIFY FOR THE COURSES STATED ABOVE..\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\n\n THIS ENTRY EXAM IS BASED ON TWO SUBJECTS: \n";
		cout << "(A) MATHS\n";
		cout << "(B)ENGLISH\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nARE YOU READY TO START YOUR ENTRY EXAM ? \n";
		cout << "\n IF YOU ARE READY, PRESS (N0 1) TO START \n\n";
		cout << "1.YES\n";

		cin >> choice;



		if (choice == 1)

		{
			cout << "\n--------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n MATHEMATICS EXAM..\n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE MATHEMATICS EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS :\n\n\t\tSURDS:  \n\n\tPLEASE SELECT SUITABLE CHOICE\n";

			cout << "\nQUESTION ONE :\n";
			cout << "\n. Simplify\n where (rt)rep root..\n\t (1). 10rt3/rt5..\n\n";
			cout << "1.4rt15\n";
			cout << "2.6rt19\n";
			cout << "3.2rt15\n";
			cout << "4.2rt9\n";
			cin >> choice1;
			if (choice1 == 3)
				choice1 = 10;
			else if (choice1 != 3)
				choice1 = 00;

			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION TWO:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRationalize the denominator..\n\t";
			cout << "\n (2).  rt3/rt7-rt2\n\n";
			cout << "1.rt2-rt7/rt4\n";
			cout << "2.rt2-rt3/rt4\n";
			cout << "3.rt4-rt6/rt9\n";
			cout << "4.rt21-rt6/4\n";
			cin >> choice2;
			if (choice2 == 4)
				choice2 = 30;
			else if (choice2 != 4)
				choice2 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION THREE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (3).  7/rt3+2\n\n";
			cout << "1.7rt3+14\n";
			cout << "2.-7rt3 + 14\n";
			cout << "3.4rt3+9\n";
			cout << "4.2rt3+14\n";
			cin >> choice3;
			if (choice3 == 2)
				choice3 = 10;
			else if (choice3 != 2)
				choice3 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FOUR:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (4). 2/1-rt2\n\n";
			cout << "1.-2 -2rt2\n";
			cout << "2.2rt3+9\n";
			cout << "3.2rt3+16\n";
			cout << "4.2-3rt4\n";
			cin >> choice4;
			if (choice4 == 1)
				choice4 = 30;
			else if (choice4 != 1)
				choice4 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FIVE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nWork out..\n\t";
			cout << "\n (5).2rt3/5+rt108\n\n";
			cout << "1.2rt2/5\n";
			cout << "2.3rt4/7\n";
			cout << "3.32rt3/5\n";
			cout << "4.4rt5/21\n";
			cin >> choice5;
			if (choice5 == 3)
				choice5 = 20;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum1 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum1 << "%";

			cout << "\n--------------------------------------------------------------------------------------------------------";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE MATHEMATICS EXAM...\n";
			cout << "\n=======================================================================================================\n\n\n\n";




			cout << "\n=========================================================================================================\n";
			cout << "\n ENGLISH EXAM..\n";
			cout << "\n----------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE ENGLISH EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS : \n\tPLEASE SELECT SUITABLE CHOICE\n";
			cout << "\nPROVIDE AN ENGLISH IDIOM THAT MEANS THE SAME AS THE STATED BELOW..\n";
			cout << "\n QUESTION ONE: \n\t";
			cout << "(1). A DOGS AGE\n";
			cout << "1. Along period of time.\n";
			cout << "2. Along time\n";
			cout << "3. A short period of time\n";
			cout << "4. A short time\n";
			cin >> choice1;
			if (choice1 == 2)
				choice1 = 10;
			else if (choice1 != 2)
				choice1 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION TWO: \n\t";
			cout << "(2). Be a cold fish\n";
			cout << "1. feeling and happy\n";
			cout << "2. Distance and unfeeling\n";
			cout << "3. Sad and unfeeling\n";
			cout << "4. Happy and felling\n";
			cin >> choice2;
			if (choice2 == 2)
				choice2 = 30;
			else if (choice2 != 2)
				choice2 = 00;

			cout << "\n-------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION THREE: \n\t";
			cout << "(3). In two shakes ofa lamb tail\n";
			cout << "1. In  split second\n";
			cout << "2. In desperation\n";
			cout << "3. In a twinkling of an eye\n";
			cout << "4. In a very short time\n";
			cin >> choice3;
			if (choice3 == 4)
				choice3 = 20;
			else if (choice3 != 4)
				choice3 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FOUR: \n\t";
			cout << "(4). Like water of a ducks back\n";
			cout << "1. Without any reason\n";
			cout << "2. With any apparent reason\n";
			cout << "3. Without any apparent reason\n";
			cout << "4. With despair\n";
			cin >> choice4;
			if (choice4 == 3)
				choice4 = 30;
			else if (choice4 != 3)
				choice4 = 00;

			cout << "\n-----------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FIVE: \n\t";
			cout << "(5).Play cat and mouse\n";
			cout << "1.  To Tease or to confuse somebody\n";
			cout << "2. To have disadvantage over them\n";
			cout << "3. To guide somebody to do something \n";
			cout << "4. To untrick somebody\n";
			cin >> choice5;
			if (choice5 == 1)
				choice5 = 10;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum2 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum2 << "%";

			cout << "\n======================================================================================================\n";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE ENGLISH EXAM...\n";
			sum3 = (sum1 + sum2) / 2;
			cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout << "\n\nYOUR AVERAGE SCORE IS " << sum3 << "%\n\n";
			cout << "\n======================================================================================================\n";

			if (sum3 < 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tREGRETFULLY,YOU HAVE NOT QUALIFIED TO JOIN THIS INSTITUTION SINCE YOU DID NOT MAKE THE CUT..\n\t";
				cout << "THANK YOU FOR COMING TO STRATHMORE UNIVERSITY\nTRY AGAIN!!, OUR NEXT INTAKE.." << endl;
				cout << endl;
				cout << "-------------------------------------------------------------------------------------------------------\n";
			}
			else if (sum3 >= 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tSUCCESSFULLY,YOU HAVE QUALIFIED TO JOIN THIS INSTITUTION....CONGRATULATIONS....\n";
				cout << "\nIN ACCORDANCE TO YOUR SCORES, \n";
				cout << "YOU HAVE QUALIFIED TO PERSUE THE COURSES BELOW\n";
				cout << "\n1. Bachelor in Informatics & computer science\n";
				cout << "2. Bachelor in Bussiness & Information Technology\n";
				cout << "3. Bachelor in Law\n";
				cout << "4. Bachelor in medicine\n";
				cout << "5. Bachelor in Interior Design\n";
				cout << "6. Bachelor in Accounting\n";
				cout << "7. Bachelor in Business Management\n";
				cout << "8. Bachelor in Actural science\n";
				cout << "9. Bachelor in mechanical engineering\n";
				cout << "10. Bachelor in software engineeering\n";
				cout << "11. Bachelor in Economics and Finance\n";
				cout << "12. Bachelor in Economics and statistics\n";
				cout << "13. Bachelor in Architecture\n";
				cout << "14. Bachelor in criminology\n";
				cout << "15. Bachelor in Commerce;\n";
				cout << "\nPLEASE SELECT ANY COURSE AS PER YOUR WISH\n\n";
				cin >> choice6;

				switch (choice6)
				{
				case 1:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU  " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN INFORMATICS AND COMPUTER SCIENCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 2:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN BUSINESS INFORMATION TECHNOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JUNE  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 3:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN LAW\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  18TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 4:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN MEDICINE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH MAY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 5:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN INTERIOR DESIGN\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH SEPTEMBER  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 6:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN BUSINESS MANAGEMENT\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JANUARY \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 7:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ACCOUNTING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH MAY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 8:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ACTURAL SCIENCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH APRIL  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 9:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN MECHANICAL ENGINEERING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 10:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN SOFTWARE ENGINEERING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH SEPTEMBER  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 11:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ECONOMICS AND FINANCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 12:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ECONOMICS AND STATISTICS\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 13:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ARCHITECTURE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 14:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN CRIMINOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 15:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN COMMERCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				default:
					cout << "ERROR!!..INVALID INPUT " << endl;
				}


			}

		}
	}




	if (num == 2)
	{
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nIN ACCORDANCE TO YOUR GRADE, YOU CAN PERSUE THE COURSES BELOW....\n\t";
		cout << "\n  KINDLY NOTE THAT YOU MUST SIT FOR AN ENTRY EXAM,\n\t TO DETERMINE YOUR ENTRY TO THE COURSE.\n";

		cout << "\n1. Bachelor in Informatics & computer science\n";
		cout << "2. Bachelor in Bussiness & Information Technology\n";
		cout << "3. Bachelor in Law\n";
		cout << "4. Bachelor in Accounting\n";
		cout << "5. Bachelor in Business Management\n";
		cout << "6. Bachelor in mechanical engineering\n";
		cout << "7. Bachelor in software engineeering\n";
		cout << "8. Bachelor in Economics and Finance\n";
		cout << "9. Bachelor in Economics and statistics\n";
		cout << "10. Bachelor in Architecture\n";
		cout << "11. Bachelor in criminology\n";
		cout << "12. Bachelor in Commerce;\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";

		cout << "\nKINDLY NOTE THAT DOING AN ENTRY EXAM IS MANDATORY\n";
		cout << "IN ADDITION, NOTE THAT YOU MUST ACQUIRE A MINIMUM AVERAGE OF 70% \n\tTO BE ABLE TO QUALIFY FOR THE COURSES STATED ABOVE..\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\n\n THIS ENTRY EXAM IS BASED ON TWO SUBJECTS: \n";
		cout << "(A) MATHS\n";
		cout << "(B)ENGLISH\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nARE YOU READY TO START YOUR ENTRY EXAM ? \n";
		cout << "\n IF YOU ARE READY, PRESS (N0 1) TO START \n\n";
		cout << "1.YES\n";

		cin >> choice;



		if (choice == 1)

		{
			cout << "\n--------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n MATHEMATICS EXAM..\n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE MATHEMATICS EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS :\n\n\t\tSURDS:  \n\n\tPLEASE SELECT SUITABLE CHOICE\n";

			cout << "\nQUESTION ONE :\n";
			cout << "\n. Simplify\n where (rt)rep root..\n\t (1). 10rt3/rt5..\n\n";
			cout << "1.4rt15\n";
			cout << "2.6rt19\n";
			cout << "3.2rt15\n";
			cout << "4.2rt9\n";
			cin >> choice1;
			if (choice1 == 3)
				choice1 = 10;
			else if (choice1 != 3)
				choice1 = 00;

			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION TWO:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRationalize the denominator..\n\t";
			cout << "\n (2).  rt3/rt7-rt2\n\n";
			cout << "1.rt2-rt7/rt4\n";
			cout << "2.rt2-rt3/rt4\n";
			cout << "3.rt4-rt6/rt9\n";
			cout << "4.rt21-rt6/4\n";
			cin >> choice2;
			if (choice2 == 4)
				choice2 = 30;
			else if (choice2 != 4)
				choice2 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION THREE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (3).  7/rt3+2\n\n";
			cout << "1.7rt3+14\n";
			cout << "2.-7rt3 + 14\n";
			cout << "3.4rt3+9\n";
			cout << "4.2rt3+14\n";
			cin >> choice3;
			if (choice3 == 2)
				choice3 = 10;
			else if (choice3 != 2)
				choice3 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FOUR:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (4). 2/1-rt2\n\n";
			cout << "1.-2 -2rt2\n";
			cout << "2.2rt3+9\n";
			cout << "3.2rt3+16\n";
			cout << "4.2-3rt4\n";
			cin >> choice4;
			if (choice4 == 1)
				choice4 = 30;
			else if (choice4 != 1)
				choice4 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FIVE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nWork out..\n\t";
			cout << "\n (5).2rt3/5+rt108\n\n";
			cout << "1.2rt2/5\n";
			cout << "2.3rt4/7\n";
			cout << "3.32rt3/5\n";
			cout << "4.4rt5/21\n";
			cin >> choice5;
			if (choice5 == 3)
				choice5 = 20;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum1 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum1 << "%";

			cout << "\n--------------------------------------------------------------------------------------------------------";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE MATHEMATICS EXAM...\n";
			cout << "\n=======================================================================================================\n\n\n\n";




			cout << "\n=========================================================================================================\n";
			cout << "\n ENGLISH EXAM..\n";
			cout << "\n----------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE ENGLISH EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS : \n\tPLEASE SELECT SUITABLE CHOICE\n";
			cout << "\nPROVIDE AN ENGLISH IDIOM THAT MEANS THE SAME AS THE STATED BELOW..\n";
			cout << "\n QUESTION ONE: \n\t";
			cout << "(1). A DOGS AGE\n";
			cout << "1. Along period of time.\n";
			cout << "2. Along time\n";
			cout << "3. A short period of time\n";
			cout << "4. A short time\n";
			cin >> choice1;
			if (choice1 == 2)
				choice1 = 10;
			else if (choice1 != 2)
				choice1 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION TWO: \n\t";
			cout << "(2). Be a cold fish\n";
			cout << "1. feeling and happy\n";
			cout << "2. Distance and unfeeling\n";
			cout << "3. Sad and unfeeling\n";
			cout << "4. Happy and felling\n";
			cin >> choice2;
			if (choice2 == 2)
				choice2 = 30;
			else if (choice2 != 2)
				choice2 = 00;

			cout << "\n-------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION THREE: \n\t";
			cout << "(3). In two shakes ofa lamb tail\n";
			cout << "1. In  split second\n";
			cout << "2. In desperation\n";
			cout << "3. In a twinkling of an eye\n";
			cout << "4. In a very short time\n";
			cin >> choice3;
			if (choice3 == 4)
				choice3 = 20;
			else if (choice3 != 4)
				choice3 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FOUR: \n\t";
			cout << "(4). Like water of a ducks back\n";
			cout << "1. Without any reason\n";
			cout << "2. With any apparent reason\n";
			cout << "3. Without any apparent reason\n";
			cout << "4. With despair\n";
			cin >> choice4;
			if (choice4 == 3)
				choice4 = 30;
			else if (choice4 != 3)
				choice4 = 00;

			cout << "\n-----------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FIVE: \n\t";
			cout << "(5).Play cat and mouse\n";
			cout << "1.  To Tease or to confuse somebody\n";
			cout << "2. To have disadvantage over them\n";
			cout << "3. To guide somebody to do something \n";
			cout << "4. To untrick somebody\n";
			cin >> choice5;
			if (choice5 == 1)
				choice5 = 10;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum2 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum2 << "%";

			cout << "\n======================================================================================================\n";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE ENGLISH EXAM...\n";
			sum3 = (sum1 + sum2) / 2;
			cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout << "\n\nYOUR AVERAGE SCORE IS " << sum3 << "%\n\n";
			cout << "\n======================================================================================================\n";

			if (sum3 < 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tREGRETFULLY,YOU HAVE NOT QUALIFIED TO JOIN THIS INSTITUTION SINCE YOU DID NOT MAKE THE CUT..\n\t";
				cout << "THANK YOU FOR COMING TO STRATHMORE UNIVERSITY\nTRY AGAIN!!, OUR NEXT INTAKE.." << endl;
				cout << endl;
				cout << "-------------------------------------------------------------------------------------------------------\n";
			}
			else if (sum3 >= 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tSUCCESSFULLY,YOU HAVE QUALIFIED TO JOIN THIS INSTITUTION....CONGRATULATIONS....\n";
				cout << "\nIN ACCORDANCE TO YOUR SCORES, \n";
				cout << "YOU HAVE QUALIFIED TO PERSUE THE COURSES BELOW\n";
				cout << "\n1. Bachelor in Informatics & computer science\n";
				cout << "2. Bachelor in Bussiness & Information Technology\n";
				cout << "3. Bachelor in Law\n";
				cout << "4. Bachelor in Accounting\n";
				cout << "5. Bachelor in Business Management\n";
				cout << "6. Bachelor in mechanical engineering\n";
				cout << "7. Bachelor in software engineeering\n";
				cout << "8. Bachelor in Economics and Finance\n";
				cout << "9. Bachelor in Economics and statistics\n";
				cout << "10. Bachelor in Architecture\n";
				cout << "11. Bachelor in criminology\n";
				cout << "12. Bachelor in Commerce;\n";
				cout << "\nPLEASE SELECT ANY COURSE AS PER YOUR WISH\n\n";
				cin >> choice6;

				switch (choice6)
				{
				case 1:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU  " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN INFORMATICS AND COMPUTER SCIENCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 2:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN BUSINESS INFORMATION TECHNOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JUNE  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 3:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN LAW\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  18TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;



				case 4:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN BUSINESS MANAGEMENT\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JANUARY \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 5:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ACCOUNTING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH MAY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 6:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN MECHANICAL ENGINEERING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 7:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN SOFTWARE ENGINEERING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH SEPTEMBER  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 8:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ECONOMICS AND FINANCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 9:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ECONOMICS AND STATISTICS\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 10:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ARCHITECTURE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 11:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN CRIMINOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 12:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN COMMERCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				default:
					cout << "ERROR!!..INVALID INPUT " << endl;
				}


			}

		}
	}





	if (num == 3)
	{

		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nIN ACCORDANCE TO YOUR GRADE, YOU CAN PERSUE THE COURSES BELOW....\n\t";
		cout << "\n  KINDLY NOTE THAT YOU MUST SIT FOR AN ENTRY EXAM,\n\t TO DETERMINE YOUR ENTRY TO THE COURSE.\n";

		cout << "\n1. Bachelor in Informatics & computer science\n";
		cout << "2. Bachelor in Bussiness & Information Technology\n";
		cout << "3. Bachelor in Law\n";
		cout << "4. Bachelor in Accounting\n";
		cout << "5. Bachelor in Business Management\n";
		cout << "6. Bachelor in Economics and Finance\n";
		cout << "7. Bachelor in Economics and statistics\n";
		cout << "8. Bachelor in Architecture\n";
		cout << "9. Bachelor in criminology\n";
		cout << "10. Bachelor in Commerce;\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";

		cout << "\nKINDLY NOTE THAT DOING AN ENTRY EXAM IS MANDATORY\n";
		cout << "IN ADDITION, NOTE THAT YOU MUST ACQUIRE A MINIMUM AVERAGE OF 70% \n\tTO BE ABLE TO QUALIFY FOR THE COURSES STATED ABOVE..\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\n\n THIS ENTRY EXAM IS BASED ON TWO SUBJECTS: \n";
		cout << "(A) MATHS\n";
		cout << "(B)ENGLISH\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nARE YOU READY TO START YOUR ENTRY EXAM ? \n";
		cout << "\n IF YOU ARE READY, PRESS (N0 1) TO START \n\n";
		cout << "1.YES\n";

		cin >> choice;



		if (choice == 1)

		{
			cout << "\n--------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n MATHEMATICS EXAM..\n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE MATHEMATICS EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS :\n\n\t\tSURDS:  \n\n\tPLEASE SELECT SUITABLE CHOICE\n";

			cout << "\nQUESTION ONE :\n";
			cout << "\n. Simplify\n where (rt)rep root..\n\t (1). 10rt3/rt5..\n\n";
			cout << "1.4rt15\n";
			cout << "2.6rt19\n";
			cout << "3.2rt15\n";
			cout << "4.2rt9\n";
			cin >> choice1;
			if (choice1 == 3)
				choice1 = 10;
			else if (choice1 != 3)
				choice1 = 00;

			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION TWO:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRationalize the denominator..\n\t";
			cout << "\n (2).  rt3/rt7-rt2\n\n";
			cout << "1.rt2-rt7/rt4\n";
			cout << "2.rt2-rt3/rt4\n";
			cout << "3.rt4-rt6/rt9\n";
			cout << "4.rt21-rt6/4\n";
			cin >> choice2;
			if (choice2 == 4)
				choice2 = 30;
			else if (choice2 != 4)
				choice2 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION THREE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (3).  7/rt3+2\n\n";
			cout << "1.7rt3+14\n";
			cout << "2.-7rt3 + 14\n";
			cout << "3.4rt3+9\n";
			cout << "4.2rt3+14\n";
			cin >> choice3;
			if (choice3 == 2)
				choice3 = 10;
			else if (choice3 != 2)
				choice3 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FOUR:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (4). 2/1-rt2\n\n";
			cout << "1.-2 -2rt2\n";
			cout << "2.2rt3+9\n";
			cout << "3.2rt3+16\n";
			cout << "4.2-3rt4\n";
			cin >> choice4;
			if (choice4 == 1)
				choice4 = 30;
			else if (choice4 != 1)
				choice4 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FIVE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nWork out..\n\t";
			cout << "\n (5).2rt3/5+rt108\n\n";
			cout << "1.2rt2/5\n";
			cout << "2.3rt4/7\n";
			cout << "3.32rt3/5\n";
			cout << "4.4rt5/21\n";
			cin >> choice5;
			if (choice5 == 3)
				choice5 = 20;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum1 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum1 << "%";

			cout << "\n--------------------------------------------------------------------------------------------------------";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE MATHEMATICS EXAM...\n";
			cout << "\n=======================================================================================================\n\n\n\n";




			cout << "\n=========================================================================================================\n";
			cout << "\n ENGLISH EXAM..\n";
			cout << "\n----------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE ENGLISH EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS : \n\tPLEASE SELECT SUITABLE CHOICE\n";
			cout << "\nPROVIDE AN ENGLISH IDIOM THAT MEANS THE SAME AS THE STATED BELOW..\n";
			cout << "\n QUESTION ONE: \n\t";
			cout << "(1). A DOGS AGE\n";
			cout << "1. Along period of time.\n";
			cout << "2. Along time\n";
			cout << "3. A short period of time\n";
			cout << "4. A short time\n";
			cin >> choice1;
			if (choice1 == 2)
				choice1 = 10;
			else if (choice1 != 2)
				choice1 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION TWO: \n\t";
			cout << "(2). Be a cold fish\n";
			cout << "1. feeling and happy\n";
			cout << "2. Distance and unfeeling\n";
			cout << "3. Sad and unfeeling\n";
			cout << "4. Happy and felling\n";
			cin >> choice2;
			if (choice2 == 2)
				choice2 = 30;
			else if (choice2 != 2)
				choice2 = 00;

			cout << "\n-------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION THREE: \n\t";
			cout << "(3). In two shakes ofa lamb tail\n";
			cout << "1. In  split second\n";
			cout << "2. In desperation\n";
			cout << "3. In a twinkling of an eye\n";
			cout << "4. In a very short time\n";
			cin >> choice3;
			if (choice3 == 4)
				choice3 = 20;
			else if (choice3 != 4)
				choice3 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FOUR: \n\t";
			cout << "(4). Like water of a ducks back\n";
			cout << "1. Without any reason\n";
			cout << "2. With any apparent reason\n";
			cout << "3. Without any apparent reason\n";
			cout << "4. With despair\n";
			cin >> choice4;
			if (choice4 == 3)
				choice4 = 30;
			else if (choice4 != 3)
				choice4 = 00;

			cout << "\n-----------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FIVE: \n\t";
			cout << "(5).Play cat and mouse\n";
			cout << "1.  To Tease or to confuse somebody\n";
			cout << "2. To have disadvantage over them\n";
			cout << "3. To guide somebody to do something \n";
			cout << "4. To untrick somebody\n";
			cin >> choice5;
			if (choice5 == 1)
				choice5 = 10;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum2 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum2 << "%";

			cout << "\n======================================================================================================\n";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE ENGLISH EXAM...\n";
			sum3 = (sum1 + sum2) / 2;
			cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout << "\n\nYOUR AVERAGE SCORE IS " << sum3 << "%\n\n";
			cout << "\n======================================================================================================\n";

			if (sum3 < 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tREGRETFULLY,YOU HAVE NOT QUALIFIED TO JOIN THIS INSTITUTION SINCE YOU DID NOT MAKE THE CUT..\n\t";
				cout << "THANK YOU FOR COMING TO STRATHMORE UNIVERSITY\nTRY AGAIN!!, OUR NEXT INTAKE.." << endl;
				cout << endl;
				cout << "-------------------------------------------------------------------------------------------------------\n";
			}
			else if (sum3 >= 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tSUCCESSFULLY,YOU HAVE QUALIFIED TO JOIN THIS INSTITUTION....CONGRATULATIONS....\n";
				cout << "\nIN ACCORDANCE TO YOUR SCORES, \n";
				cout << "YOU HAVE QUALIFIED TO PERSUE THE COURSES BELOW\n";
				cout << "\n1. Bachelor in Informatics & computer science\n";
				cout << "2. Bachelor in Bussiness & Information Technology\n";
				cout << "3. Bachelor in Law\n";
				cout << "4. Bachelor in Accounting\n";
				cout << "5. Bachelor in Business Management\n";
				cout << "6. Bachelor in Economics and Finance\n";
				cout << "7. Bachelor in Economics and statistics\n";
				cout << "8. Bachelor in Architecture\n";
				cout << "9. Bachelor in criminology\n";
				cout << "10. Bachelor in Commerce;\n";
				cout << "\nPLEASE SELECT ANY COURSE AS PER YOUR WISH\n\n";
				cin >> choice6;

				switch (choice6)
				{
				case 1:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU  " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN INFORMATICS AND COMPUTER SCIENCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 2:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN BUSINESS INFORMATION TECHNOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JUNE  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 3:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN LAW\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  18TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;



				case 4:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN BUSINESS MANAGEMENT\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JANUARY \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 5:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ACCOUNTING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH MAY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;


				case 6:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ECONOMICS AND FINANCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 7:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ECONOMICS AND STATISTICS\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 8:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ARCHITECTURE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 9:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN CRIMINOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 10:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN COMMERCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				default:
					cout << "ERROR!!..INVALID INPUT " << endl;
				}


			}

		}

	}
	if (num == 4)
	{
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nIN ACCORDANCE TO YOUR GRADE, YOU CAN PERSUE THE COURSES BELOW....\n\t";
		cout << "\n  KINDLY NOTE THAT YOU MUST SIT FOR AN ENTRY EXAM,\n\t TO DETERMINE YOUR ENTRY TO THE COURSE.\n";

		cout << "\n1. Bachelor in Informatics & computer science\n";
		cout << "2. Bachelor in Bussiness & Information Technology\n";
		cout << "3. Bachelor in Accounting\n";
		cout << "4. Bachelor in Business Management\n";
		cout << "5. Bachelor in Economics and Finance\n";
		cout << "6. Bachelor in Economics and statistics\n";
		cout << "7. Bachelor in criminology\n";
		cout << "8. Bachelor in Commerce;\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";

		cout << "\nKINDLY NOTE THAT DOING AN ENTRY EXAM IS MANDATORY\n";
		cout << "IN ADDITION, NOTE THAT YOU MUST ACQUIRE A MINIMUM AVERAGE OF 70% \n\tTO BE ABLE TO QUALIFY FOR THE COURSES STATED ABOVE..\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\n\n THIS ENTRY EXAM IS BASED ON TWO SUBJECTS: \n";
		cout << "(A) MATHS\n";
		cout << "(B)ENGLISH\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nARE YOU READY TO START YOUR ENTRY EXAM ? \n";
		cout << "\n IF YOU ARE READY, PRESS (N0 1) TO START \n\n";
		cout << "1.YES\n";

		cin >> choice;



		if (choice == 1)

		{
			cout << "\n--------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n MATHEMATICS EXAM..\n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE MATHEMATICS EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS :\n\n\t\tSURDS:  \n\n\tPLEASE SELECT SUITABLE CHOICE\n";

			cout << "\nQUESTION ONE :\n";
			cout << "\n. Simplify\n where (rt)rep root..\n\t (1). 10rt3/rt5..\n\n";
			cout << "1.4rt15\n";
			cout << "2.6rt19\n";
			cout << "3.2rt15\n";
			cout << "4.2rt9\n";
			cin >> choice1;
			if (choice1 == 3)
				choice1 = 10;
			else if (choice1 != 3)
				choice1 = 00;

			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION TWO:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRationalize the denominator..\n\t";
			cout << "\n (2).  rt3/rt7-rt2\n\n";
			cout << "1.rt2-rt7/rt4\n";
			cout << "2.rt2-rt3/rt4\n";
			cout << "3.rt4-rt6/rt9\n";
			cout << "4.rt21-rt6/4\n";
			cin >> choice2;
			if (choice2 == 4)
				choice2 = 30;
			else if (choice2 != 4)
				choice2 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION THREE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (3).  7/rt3+2\n\n";
			cout << "1.7rt3+14\n";
			cout << "2.-7rt3 + 14\n";
			cout << "3.4rt3+9\n";
			cout << "4.2rt3+14\n";
			cin >> choice3;
			if (choice3 == 2)
				choice3 = 10;
			else if (choice3 != 2)
				choice3 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FOUR:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (4). 2/1-rt2\n\n";
			cout << "1.-2 -2rt2\n";
			cout << "2.2rt3+9\n";
			cout << "3.2rt3+16\n";
			cout << "4.2-3rt4\n";
			cin >> choice4;
			if (choice4 == 1)
				choice4 = 30;
			else if (choice4 != 1)
				choice4 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FIVE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nWork out..\n\t";
			cout << "\n (5).2rt3/5+rt108\n\n";
			cout << "1.2rt2/5\n";
			cout << "2.3rt4/7\n";
			cout << "3.32rt3/5\n";
			cout << "4.4rt5/21\n";
			cin >> choice5;
			if (choice5 == 3)
				choice5 = 20;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum1 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum1 << "%";

			cout << "\n--------------------------------------------------------------------------------------------------------";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE MATHEMATICS EXAM...\n";
			cout << "\n=======================================================================================================\n\n\n\n";




			cout << "\n=========================================================================================================\n";
			cout << "\n ENGLISH EXAM..\n";
			cout << "\n----------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE ENGLISH EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS : \n\tPLEASE SELECT SUITABLE CHOICE\n";
			cout << "\nPROVIDE AN ENGLISH IDIOM THAT MEANS THE SAME AS THE STATED BELOW..\n";
			cout << "\n QUESTION ONE: \n\t";
			cout << "(1). A DOGS AGE\n";
			cout << "1. Along period of time.\n";
			cout << "2. Along time\n";
			cout << "3. A short period of time\n";
			cout << "4. A short time\n";
			cin >> choice1;
			if (choice1 == 2)
				choice1 = 10;
			else if (choice1 != 2)
				choice1 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION TWO: \n\t";
			cout << "(2). Be a cold fish\n";
			cout << "1. feeling and happy\n";
			cout << "2. Distance and unfeeling\n";
			cout << "3. Sad and unfeeling\n";
			cout << "4. Happy and felling\n";
			cin >> choice2;
			if (choice2 == 2)
				choice2 = 30;
			else if (choice2 != 2)
				choice2 = 00;

			cout << "\n-------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION THREE: \n\t";
			cout << "(3). In two shakes ofa lamb tail\n";
			cout << "1. In  split second\n";
			cout << "2. In desperation\n";
			cout << "3. In a twinkling of an eye\n";
			cout << "4. In a very short time\n";
			cin >> choice3;
			if (choice3 == 4)
				choice3 = 20;
			else if (choice3 != 4)
				choice3 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FOUR: \n\t";
			cout << "(4). Like water of a ducks back\n";
			cout << "1. Without any reason\n";
			cout << "2. With any apparent reason\n";
			cout << "3. Without any apparent reason\n";
			cout << "4. With despair\n";
			cin >> choice4;
			if (choice4 == 3)
				choice4 = 30;
			else if (choice4 != 3)
				choice4 = 00;

			cout << "\n-----------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FIVE: \n\t";
			cout << "(5).Play cat and mouse\n";
			cout << "1.  To Tease or to confuse somebody\n";
			cout << "2. To have disadvantage over them\n";
			cout << "3. To guide somebody to do something \n";
			cout << "4. To untrick somebody\n";
			cin >> choice5;
			if (choice5 == 1)
				choice5 = 10;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum2 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum2 << "%";

			cout << "\n======================================================================================================\n";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE ENGLISH EXAM...\n";
			sum3 = (sum1 + sum2) / 2;
			cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout << "\n\nYOUR AVERAGE SCORE IS " << sum3 << "%\n\n";
			cout << "\n======================================================================================================\n";

			if (sum3 < 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tREGRETFULLY,YOU HAVE NOT QUALIFIED TO JOIN THIS INSTITUTION SINCE YOU DID NOT MAKE THE CUT..\n\t";
				cout << "THANK YOU FOR COMING TO STRATHMORE UNIVERSITY\nTRY AGAIN!!, OUR NEXT INTAKE.." << endl;
				cout << endl;
				cout << "-------------------------------------------------------------------------------------------------------\n";
			}
			else if (sum3 >= 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tSUCCESSFULLY,YOU HAVE QUALIFIED TO JOIN THIS INSTITUTION....CONGRATULATIONS....\n";
				cout << "\nIN ACCORDANCE TO YOUR SCORES, \n";
				cout << "YOU HAVE QUALIFIED TO PERSUE THE COURSES BELOW\n";
				cout << "\n1. Bachelor in Informatics & computer science\n";
				cout << "2. Bachelor in Bussiness & Information Technology\n";
				cout << "3. Bachelor in Accounting\n";
				cout << "4. Bachelor in Business Management\n";
				cout << "5. Bachelor in Economics and Finance\n";
				cout << "6. Bachelor in Economics and statistics\n";
				cout << "7. Bachelor in criminology\n";
				cout << "8. Bachelor in Commerce;\n";
				cout << "\nPLEASE SELECT ANY COURSE AS PER YOUR WISH\n\n";
				cin >> choice6;

				switch (choice6)
				{
				case 1:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU  " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN INFORMATICS AND COMPUTER SCIENCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 2:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN BUSINESS INFORMATION TECHNOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JUNE  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;




				case 3:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN BUSINESS MANAGEMENT\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JANUARY \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 4:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ACCOUNTING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH MAY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;


				case 5:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ECONOMICS AND FINANCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 6:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ECONOMICS AND STATISTICS\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 7:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN CRIMINOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 8:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN COMMERCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				default:
					cout << "ERROR!!..INVALID INPUT " << endl;
				}


			}

		}

	}


	if (num == 5)
	{
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nIN ACCORDANCE TO YOUR GRADE, YOU CAN PERSUE THE COURSES BELOW....\n\t";
		cout << "\n  KINDLY NOTE THAT YOU MUST SIT FOR AN ENTRY EXAM,\n\t TO DETERMINE YOUR ENTRY TO THE COURSE.\n";


		cout << "1. Bachelor in Accounting\n";
		cout << "2. Bachelor in Business Management\n";
		cout << "3. Bachelor in Economics and Finance\n";
		cout << "4. Bachelor in Economics and statistics\n";
		cout << "5. Bachelor in criminology\n";
		cout << "6. Bachelor in Commerce;\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";

		cout << "\nKINDLY NOTE THAT DOING AN ENTRY EXAM IS MANDATORY\n";
		cout << "IN ADDITION, NOTE THAT YOU MUST ACQUIRE A MINIMUM AVERAGE OF 70% \n\tTO BE ABLE TO QUALIFY FOR THE COURSES STATED ABOVE..\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\n\n THIS ENTRY EXAM IS BASED ON TWO SUBJECTS: \n";
		cout << "(A) MATHS\n";
		cout << "(B)ENGLISH\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nARE YOU READY TO START YOUR ENTRY EXAM ? \n";
		cout << "\n IF YOU ARE READY, PRESS (N0 1) TO START \n\n";
		cout << "1.YES\n";

		cin >> choice;



		if (choice == 1)

		{
			cout << "\n--------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n MATHEMATICS EXAM..\n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE MATHEMATICS EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS :\n\n\t\tSURDS:  \n\n\tPLEASE SELECT SUITABLE CHOICE\n";

			cout << "\nQUESTION ONE :\n";
			cout << "\n. Simplify\n where (rt)rep root..\n\t (1). 10rt3/rt5..\n\n";
			cout << "1.4rt15\n";
			cout << "2.6rt19\n";
			cout << "3.2rt15\n";
			cout << "4.2rt9\n";
			cin >> choice1;
			if (choice1 == 3)
				choice1 = 10;
			else if (choice1 != 3)
				choice1 = 00;

			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION TWO:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRationalize the denominator..\n\t";
			cout << "\n (2).  rt3/rt7-rt2\n\n";
			cout << "1.rt2-rt7/rt4\n";
			cout << "2.rt2-rt3/rt4\n";
			cout << "3.rt4-rt6/rt9\n";
			cout << "4.rt21-rt6/4\n";
			cin >> choice2;
			if (choice2 == 4)
				choice2 = 30;
			else if (choice2 != 4)
				choice2 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION THREE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (3).  7/rt3+2\n\n";
			cout << "1.7rt3+14\n";
			cout << "2.-7rt3 + 14\n";
			cout << "3.4rt3+9\n";
			cout << "4.2rt3+14\n";
			cin >> choice3;
			if (choice3 == 2)
				choice3 = 10;
			else if (choice3 != 2)
				choice3 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FOUR:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (4). 2/1-rt2\n\n";
			cout << "1.-2 -2rt2\n";
			cout << "2.2rt3+9\n";
			cout << "3.2rt3+16\n";
			cout << "4.2-3rt4\n";
			cin >> choice4;
			if (choice4 == 1)
				choice4 = 30;
			else if (choice4 != 1)
				choice4 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FIVE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nWork out..\n\t";
			cout << "\n (5).2rt3/5+rt108\n\n";
			cout << "1.2rt2/5\n";
			cout << "2.3rt4/7\n";
			cout << "3.32rt3/5\n";
			cout << "4.4rt5/21\n";
			cin >> choice5;
			if (choice5 == 3)
				choice5 = 20;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum1 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum1 << "%";

			cout << "\n--------------------------------------------------------------------------------------------------------";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE MATHEMATICS EXAM...\n";
			cout << "\n=======================================================================================================\n\n\n\n";




			cout << "\n=========================================================================================================\n";
			cout << "\n ENGLISH EXAM..\n";
			cout << "\n----------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE ENGLISH EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS : \n\tPLEASE SELECT SUITABLE CHOICE\n";
			cout << "\nPROVIDE AN ENGLISH IDIOM THAT MEANS THE SAME AS THE STATED BELOW..\n";
			cout << "\n QUESTION ONE: \n\t";
			cout << "(1). A DOGS AGE\n";
			cout << "1. Along period of time.\n";
			cout << "2. Along time\n";
			cout << "3. A short period of time\n";
			cout << "4. A short time\n";
			cin >> choice1;
			if (choice1 == 2)
				choice1 = 10;
			else if (choice1 != 2)
				choice1 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION TWO: \n\t";
			cout << "(2). Be a cold fish\n";
			cout << "1. feeling and happy\n";
			cout << "2. Distance and unfeeling\n";
			cout << "3. Sad and unfeeling\n";
			cout << "4. Happy and felling\n";
			cin >> choice2;
			if (choice2 == 2)
				choice2 = 30;
			else if (choice2 != 2)
				choice2 = 00;

			cout << "\n-------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION THREE: \n\t";
			cout << "(3). In two shakes ofa lamb tail\n";
			cout << "1. In  split second\n";
			cout << "2. In desperation\n";
			cout << "3. In a twinkling of an eye\n";
			cout << "4. In a very short time\n";
			cin >> choice3;
			if (choice3 == 4)
				choice3 = 20;
			else if (choice3 != 4)
				choice3 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FOUR: \n\t";
			cout << "(4). Like water of a ducks back\n";
			cout << "1. Without any reason\n";
			cout << "2. With any apparent reason\n";
			cout << "3. Without any apparent reason\n";
			cout << "4. With despair\n";
			cin >> choice4;
			if (choice4 == 3)
				choice4 = 30;
			else if (choice4 != 3)
				choice4 = 00;

			cout << "\n-----------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FIVE: \n\t";
			cout << "(5).Play cat and mouse\n";
			cout << "1.  To Tease or to confuse somebody\n";
			cout << "2. To have disadvantage over them\n";
			cout << "3. To guide somebody to do something \n";
			cout << "4. To untrick somebody\n";
			cin >> choice5;
			if (choice5 == 1)
				choice5 = 10;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum2 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum2 << "%";

			cout << "\n======================================================================================================\n";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE ENGLISH EXAM...\n";
			sum3 = (sum1 + sum2) / 2;
			cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout << "\n\nYOUR AVERAGE SCORE IS " << sum3 << "%\n\n";
			cout << "\n======================================================================================================\n";

			if (sum3 < 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tREGRETFULLY,YOU HAVE NOT QUALIFIED TO JOIN THIS INSTITUTION SINCE YOU DID NOT MAKE THE CUT..\n\t";
				cout << "THANK YOU FOR COMING TO STRATHMORE UNIVERSITY\nTRY AGAIN!!, OUR NEXT INTAKE.." << endl;
				cout << endl;
				cout << "-------------------------------------------------------------------------------------------------------\n";
			}
			else if (sum3 >= 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tSUCCESSFULLY,YOU HAVE QUALIFIED TO JOIN THIS INSTITUTION....CONGRATULATIONS....\n";
				cout << "\nIN ACCORDANCE TO YOUR SCORES, \n";
				cout << "YOU HAVE QUALIFIED TO PERSUE THE COURSES BELOW\n";

				cout << "1. Bachelor in Accounting\n";
				cout << "2. Bachelor in Business Management\n";
				cout << "3. Bachelor in Economics and Finance\n";
				cout << "4. Bachelor in Economics and statistics\n";
				cout << "5. Bachelor in criminology\n";
				cout << "6. Bachelor in Commerce;\n";
				cout << "\nPLEASE SELECT ANY COURSE AS PER YOUR WISH\n\n";
				cin >> choice6;

				switch (choice6)
				{

				case 1:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN BUSINESS MANAGEMENT\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JANUARY \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 2:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ACCOUNTING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH MAY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;


				case 3:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ECONOMICS AND FINANCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 4:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ECONOMICS AND STATISTICS\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH AUGUST  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 5:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN CRIMINOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 6:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN COMMERCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				default:
					cout << "ERROR!!..INVALID INPUT " << endl;
				}


			}

		}

	}


	if (num == 6)


	{
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nIN ACCORDANCE TO YOUR GRADE, YOU CAN PERSUE THE COURSES BELOW....\n\t";
		cout << "\n  KINDLY NOTE THAT YOU MUST SIT FOR AN ENTRY EXAM,\n\t TO DETERMINE YOUR ENTRY TO THE COURSE.\n";


		cout << "1. Bachelor in Accounting\n";
		cout << "2. Bachelor in Business Management\n";
		cout << "3. Bachelor in criminology\n";
		cout << "4. Bachelor in Commerce;\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";

		cout << "\nKINDLY NOTE THAT DOING AN ENTRY EXAM IS MANDATORY\n";
		cout << "IN ADDITION, NOTE THAT YOU MUST ACQUIRE A MINIMUM AVERAGE OF 70% \n\tTO BE ABLE TO QUALIFY FOR THE COURSES STATED ABOVE..\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\n\n THIS ENTRY EXAM IS BASED ON TWO SUBJECTS: \n";
		cout << "(A) MATHS\n";
		cout << "(B)ENGLISH\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nARE YOU READY TO START YOUR ENTRY EXAM ? \n";
		cout << "\n IF YOU ARE READY, PRESS (N0 1) TO START \n\n";
		cout << "1.YES\n";

		cin >> choice;



		if (choice == 1)

		{
			cout << "\n--------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n MATHEMATICS EXAM..\n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE MATHEMATICS EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS :\n\n\t\tSURDS:  \n\n\tPLEASE SELECT SUITABLE CHOICE\n";

			cout << "\nQUESTION ONE :\n";
			cout << "\n. Simplify\n where (rt)rep root..\n\t (1). 10rt3/rt5..\n\n";
			cout << "1.4rt15\n";
			cout << "2.6rt19\n";
			cout << "3.2rt15\n";
			cout << "4.2rt9\n";
			cin >> choice1;
			if (choice1 == 3)
				choice1 = 10;
			else if (choice1 != 3)
				choice1 = 00;

			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION TWO:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRationalize the denominator..\n\t";
			cout << "\n (2).  rt3/rt7-rt2\n\n";
			cout << "1.rt2-rt7/rt4\n";
			cout << "2.rt2-rt3/rt4\n";
			cout << "3.rt4-rt6/rt9\n";
			cout << "4.rt21-rt6/4\n";
			cin >> choice2;
			if (choice2 == 4)
				choice2 = 30;
			else if (choice2 != 4)
				choice2 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION THREE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (3).  7/rt3+2\n\n";
			cout << "1.7rt3+14\n";
			cout << "2.-7rt3 + 14\n";
			cout << "3.4rt3+9\n";
			cout << "4.2rt3+14\n";
			cin >> choice3;
			if (choice3 == 2)
				choice3 = 10;
			else if (choice3 != 2)
				choice3 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FOUR:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (4). 2/1-rt2\n\n";
			cout << "1.-2 -2rt2\n";
			cout << "2.2rt3+9\n";
			cout << "3.2rt3+16\n";
			cout << "4.2-3rt4\n";
			cin >> choice4;
			if (choice4 == 1)
				choice4 = 30;
			else if (choice4 != 1)
				choice4 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FIVE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nWork out..\n\t";
			cout << "\n (5).2rt3/5+rt108\n\n";
			cout << "1.2rt2/5\n";
			cout << "2.3rt4/7\n";
			cout << "3.32rt3/5\n";
			cout << "4.4rt5/21\n";
			cin >> choice5;
			if (choice5 == 3)
				choice5 = 20;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum1 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum1 << "%";

			cout << "\n--------------------------------------------------------------------------------------------------------";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE MATHEMATICS EXAM...\n";
			cout << "\n=======================================================================================================\n\n\n\n";




			cout << "\n=========================================================================================================\n";
			cout << "\n ENGLISH EXAM..\n";
			cout << "\n----------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE ENGLISH EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS : \n\tPLEASE SELECT SUITABLE CHOICE\n";
			cout << "\nPROVIDE AN ENGLISH IDIOM THAT MEANS THE SAME AS THE STATED BELOW..\n";
			cout << "\n QUESTION ONE: \n\t";
			cout << "(1). A DOGS AGE\n";
			cout << "1. Along period of time.\n";
			cout << "2. Along time\n";
			cout << "3. A short period of time\n";
			cout << "4. A short time\n";
			cin >> choice1;
			if (choice1 == 2)
				choice1 = 10;
			else if (choice1 != 2)
				choice1 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION TWO: \n\t";
			cout << "(2). Be a cold fish\n";
			cout << "1. feeling and happy\n";
			cout << "2. Distance and unfeeling\n";
			cout << "3. Sad and unfeeling\n";
			cout << "4. Happy and felling\n";
			cin >> choice2;
			if (choice2 == 2)
				choice2 = 30;
			else if (choice2 != 2)
				choice2 = 00;

			cout << "\n-------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION THREE: \n\t";
			cout << "(3). In two shakes ofa lamb tail\n";
			cout << "1. In  split second\n";
			cout << "2. In desperation\n";
			cout << "3. In a twinkling of an eye\n";
			cout << "4. In a very short time\n";
			cin >> choice3;
			if (choice3 == 4)
				choice3 = 20;
			else if (choice3 != 4)
				choice3 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FOUR: \n\t";
			cout << "(4). Like water of a ducks back\n";
			cout << "1. Without any reason\n";
			cout << "2. With any apparent reason\n";
			cout << "3. Without any apparent reason\n";
			cout << "4. With despair\n";
			cin >> choice4;
			if (choice4 == 3)
				choice4 = 30;
			else if (choice4 != 3)
				choice4 = 00;

			cout << "\n-----------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FIVE: \n\t";
			cout << "(5).Play cat and mouse\n";
			cout << "1.  To Tease or to confuse somebody\n";
			cout << "2. To have disadvantage over them\n";
			cout << "3. To guide somebody to do something \n";
			cout << "4. To untrick somebody\n";
			cin >> choice5;
			if (choice5 == 1)
				choice5 = 10;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum2 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum2 << "%";

			cout << "\n======================================================================================================\n";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE ENGLISH EXAM...\n";
			sum3 = (sum1 + sum2) / 2;
			cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout << "\n\nYOUR AVERAGE SCORE IS " << sum3 << "%\n\n";
			cout << "\n======================================================================================================\n";

			if (sum3 < 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tREGRETFULLY,YOU HAVE NOT QUALIFIED TO JOIN THIS INSTITUTION SINCE YOU DID NOT MAKE THE CUT..\n\t";
				cout << "THANK YOU FOR COMING TO STRATHMORE UNIVERSITY\nTRY AGAIN!!, OUR NEXT INTAKE.." << endl;
				cout << endl;
				cout << "-------------------------------------------------------------------------------------------------------\n";
			}
			else if (sum3 >= 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tSUCCESSFULLY,YOU HAVE QUALIFIED TO JOIN THIS INSTITUTION....CONGRATULATIONS....\n";
				cout << "\nIN ACCORDANCE TO YOUR SCORES, \n";
				cout << "YOU HAVE QUALIFIED TO PERSUE THE COURSES BELOW\n";

				cout << "1. Bachelor in Accounting\n";
				cout << "2. Bachelor in Business Management\n";
				cout << "3. Bachelor in criminology\n";
				cout << "4. Bachelor in Commerce;\n";
				cout << "\nPLEASE SELECT ANY COURSE AS PER YOUR WISH\n\n";
				cin >> choice6;

				switch (choice6)
				{

				case 1:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ACCOUNTING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JANUARY \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 2:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN BUSINESS MANAGEMENT\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH MAY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;




				case 3:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN CRIMINOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 4:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN COMMERCE\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				default:
					cout << "ERROR!!..INVALID INPUT " << endl;
				}


			}

		}
	}

	if (num == 7)


	{
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nIN ACCORDANCE TO YOUR GRADE, YOU CAN PERSUE THE COURSES BELOW....\n\t";
		cout << "\n  KINDLY NOTE THAT YOU MUST SIT FOR AN ENTRY EXAM,\n\t TO DETERMINE YOUR ENTRY TO THE COURSE.\n";


		cout << "1. Bachelor in Accounting\n";
		cout << "2. Diploma in Business Management\n";
		cout << "3. Diploma in Business Information technology\n";
		cout << "4. Diploma in Information Technology\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";


		cout << "\nKINDLY NOTE THAT DOING AN ENTRY EXAM IS MANDATORY\n";
		cout << "IN ADDITION, NOTE THAT YOU MUST ACQUIRE A MINIMUM AVERAGE OF 70% \n\tTO BE ABLE TO QUALIFY FOR THE COURSES STATED ABOVE..\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\n\n THIS ENTRY EXAM IS BASED ON TWO SUBJECTS: \n";
		cout << "(A) MATHS\n";
		cout << "(B)ENGLISH\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nARE YOU READY TO START YOUR ENTRY EXAM ? \n";
		cout << "\n IF YOU ARE READY, PRESS (N0 1) TO START \n\n";
		cout << "1.YES\n";

		cin >> choice;



		if (choice == 1)

		{
			cout << "\n--------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n MATHEMATICS EXAM..\n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE MATHEMATICS EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS :\n\n\t\tSURDS:  \n\n\tPLEASE SELECT SUITABLE CHOICE\n";

			cout << "\nQUESTION ONE :\n";
			cout << "\n. Simplify\n where (rt)rep root..\n\t (1). 10rt3/rt5..\n\n";
			cout << "1.4rt15\n";
			cout << "2.6rt19\n";
			cout << "3.2rt15\n";
			cout << "4.2rt9\n";
			cin >> choice1;
			if (choice1 == 3)
				choice1 = 10;
			else if (choice1 != 3)
				choice1 = 00;

			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION TWO:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRationalize the denominator..\n\t";
			cout << "\n (2).  rt3/rt7-rt2\n\n";
			cout << "1.rt2-rt7/rt4\n";
			cout << "2.rt2-rt3/rt4\n";
			cout << "3.rt4-rt6/rt9\n";
			cout << "4.rt21-rt6/4\n";
			cin >> choice2;
			if (choice2 == 4)
				choice2 = 30;
			else if (choice2 != 4)
				choice2 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION THREE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (3).  7/rt3+2\n\n";
			cout << "1.7rt3+14\n";
			cout << "2.-7rt3 + 14\n";
			cout << "3.4rt3+9\n";
			cout << "4.2rt3+14\n";
			cin >> choice3;
			if (choice3 == 2)
				choice3 = 10;
			else if (choice3 != 2)
				choice3 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FOUR:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (4). 2/1-rt2\n\n";
			cout << "1.-2 -2rt2\n";
			cout << "2.2rt3+9\n";
			cout << "3.2rt3+16\n";
			cout << "4.2-3rt4\n";
			cin >> choice4;
			if (choice4 == 1)
				choice4 = 30;
			else if (choice4 != 1)
				choice4 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FIVE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nWork out..\n\t";
			cout << "\n (5).2rt3/5+rt108\n\n";
			cout << "1.2rt2/5\n";
			cout << "2.3rt4/7\n";
			cout << "3.32rt3/5\n";
			cout << "4.4rt5/21\n";
			cin >> choice5;
			if (choice5 == 3)
				choice5 = 20;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum1 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum1 << "%";

			cout << "\n--------------------------------------------------------------------------------------------------------";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE MATHEMATICS EXAM...\n";
			cout << "\n=======================================================================================================\n\n\n\n";




			cout << "\n=========================================================================================================\n";
			cout << "\n ENGLISH EXAM..\n";
			cout << "\n----------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE ENGLISH EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS : \n\tPLEASE SELECT SUITABLE CHOICE\n";
			cout << "\nPROVIDE AN ENGLISH IDIOM THAT MEANS THE SAME AS THE STATED BELOW..\n";
			cout << "\n QUESTION ONE: \n\t";
			cout << "(1). A DOGS AGE\n";
			cout << "1. Along period of time.\n";
			cout << "2. Along time\n";
			cout << "3. A short period of time\n";
			cout << "4. A short time\n";
			cin >> choice1;
			if (choice1 == 2)
				choice1 = 10;
			else if (choice1 != 2)
				choice1 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION TWO: \n\t";
			cout << "(2). Be a cold fish\n";
			cout << "1. feeling and happy\n";
			cout << "2. Distance and unfeeling\n";
			cout << "3. Sad and unfeeling\n";
			cout << "4. Happy and felling\n";
			cin >> choice2;
			if (choice2 == 2)
				choice2 = 30;
			else if (choice2 != 2)
				choice2 = 00;

			cout << "\n-------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION THREE: \n\t";
			cout << "(3). In two shakes ofa lamb tail\n";
			cout << "1. In  split second\n";
			cout << "2. In desperation\n";
			cout << "3. In a twinkling of an eye\n";
			cout << "4. In a very short time\n";
			cin >> choice3;
			if (choice3 == 4)
				choice3 = 20;
			else if (choice3 != 4)
				choice3 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FOUR: \n\t";
			cout << "(4). Like water of a ducks back\n";
			cout << "1. Without any reason\n";
			cout << "2. With any apparent reason\n";
			cout << "3. Without any apparent reason\n";
			cout << "4. With despair\n";
			cin >> choice4;
			if (choice4 == 3)
				choice4 = 30;
			else if (choice4 != 3)
				choice4 = 00;

			cout << "\n-----------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FIVE: \n\t";
			cout << "(5).Play cat and mouse\n";
			cout << "1.  To Tease or to confuse somebody\n";
			cout << "2. To have disadvantage over them\n";
			cout << "3. To guide somebody to do something \n";
			cout << "4. To untrick somebody\n";
			cin >> choice5;
			if (choice5 == 1)
				choice5 = 10;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum2 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum2 << "%";

			cout << "\n======================================================================================================\n";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE ENGLISH EXAM...\n";
			sum3 = (sum1 + sum2) / 2;
			cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout << "\n\nYOUR AVERAGE SCORE IS " << sum3 << "%\n\n";
			cout << "\n======================================================================================================\n";

			if (sum3 < 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tREGRETFULLY,YOU HAVE NOT QUALIFIED TO JOIN THIS INSTITUTION SINCE YOU DID NOT MAKE THE CUT..\n\t";
				cout << "THANK YOU FOR COMING TO STRATHMORE UNIVERSITY\nTRY AGAIN!!, OUR NEXT INTAKE.." << endl;
				cout << endl;
				cout << "-------------------------------------------------------------------------------------------------------\n";
			}
			else if (sum3 >= 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tSUCCESSFULLY,YOU HAVE QUALIFIED TO JOIN THIS INSTITUTION....CONGRATULATIONS....\n";
				cout << "\nIN ACCORDANCE TO YOUR SCORES, \n";
				cout << "YOU HAVE QUALIFIED TO PERSUE THE COURSES BELOW\n";

				cout << "1. Bachelor in Accounting\n";
				cout << "2. Diploma in Business Management\n";
				cout << "3.Diploma in Business Information Technology\n";
				cout << "4.Diploma in Information Techonology\n";
				cout << "\nPLEASE SELECT ANY COURSE AS PER YOUR WISH\n\n";
				cin >> choice6;

				switch (choice6)
				{

				case 1:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE BACHELOR IN ACCOUNTING\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 4 years of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JANUARY \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;

				case 2:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE DIPLOMA IN BUSINESS MANAGEMENT\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 1 year of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH MAY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;




				case 3:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE DIPLOMA IN BUSINESS INFORMATION TECHNOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 1 year of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 4:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE DIPLOMA IN INFORMATION TECHNOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 1 year of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				default:
					cout << "ERROR!!..INVALID INPUT " << endl;
				
				}


			}

		}

	}

	if (num == 8)

	{
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nIN ACCORDANCE TO YOUR GRADE, YOU CAN PERSUE THE COURSES BELOW....\n\t";
		cout << "\n  KINDLY NOTE THAT YOU MUST SIT FOR AN ENTRY EXAM,\n\t TO DETERMINE YOUR ENTRY TO THE COURSE.\n";

		cout << "1. Diploma in Business Management\n";
		cout << "2. Diploma in Business Information technology\n";
		cout << "3. Diploma in Information Technology\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";


		cout << "\nKINDLY NOTE THAT DOING AN ENTRY EXAM IS MANDATORY\n";
		cout << "IN ADDITION, NOTE THAT YOU MUST ACQUIRE A MINIMUM AVERAGE OF 70% \n\tTO BE ABLE TO QUALIFY FOR THE COURSES STATED ABOVE..\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\n\n THIS ENTRY EXAM IS BASED ON TWO SUBJECTS: \n";
		cout << "(A) MATHS\n";
		cout << "(B)ENGLISH\n";
		cout << "\n-----------------------------------------------------------------------------------------------\n";
		cout << "\nARE YOU READY TO START YOUR ENTRY EXAM ? \n";
		cout << "\n IF YOU ARE READY, PRESS (N0 1) TO START \n\n";
		cout << "1.YES\n";

		cin >> choice;



		if (choice == 1)

		{
			cout << "\n--------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n MATHEMATICS EXAM..\n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE MATHEMATICS EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS :\n\n\t\tSURDS:  \n\n\tPLEASE SELECT SUITABLE CHOICE\n";

			cout << "\nQUESTION ONE :\n";
			cout << "\n. Simplify\n where (rt)rep root..\n\t (1). 10rt3/rt5..\n\n";
			cout << "1.4rt15\n";
			cout << "2.6rt19\n";
			cout << "3.2rt15\n";
			cout << "4.2rt9\n";
			cin >> choice1;
			if (choice1 == 3)
				choice1 = 10;
			else if (choice1 != 3)
				choice1 = 00;

			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION TWO:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRationalize the denominator..\n\t";
			cout << "\n (2).  rt3/rt7-rt2\n\n";
			cout << "1.rt2-rt7/rt4\n";
			cout << "2.rt2-rt3/rt4\n";
			cout << "3.rt4-rt6/rt9\n";
			cout << "4.rt21-rt6/4\n";
			cin >> choice2;
			if (choice2 == 4)
				choice2 = 30;
			else if (choice2 != 4)
				choice2 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION THREE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (3).  7/rt3+2\n\n";
			cout << "1.7rt3+14\n";
			cout << "2.-7rt3 + 14\n";
			cout << "3.4rt3+9\n";
			cout << "4.2rt3+14\n";
			cin >> choice3;
			if (choice3 == 2)
				choice3 = 10;
			else if (choice3 != 2)
				choice3 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FOUR:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nRatinalize the denominator..\n\t";
			cout << "\n (4). 2/1-rt2\n\n";
			cout << "1.-2 -2rt2\n";
			cout << "2.2rt3+9\n";
			cout << "3.2rt3+16\n";
			cout << "4.2-3rt4\n";
			cin >> choice4;
			if (choice4 == 1)
				choice4 = 30;
			else if (choice4 != 1)
				choice4 = 00;
			cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTION FIVE:\n";
			cout << "PLEASE NOTE THAT (rt) rep root..\n";

			cout << "\n\nWork out..\n\t";
			cout << "\n (5).2rt3/5+rt108\n\n";
			cout << "1.2rt2/5\n";
			cout << "2.3rt4/7\n";
			cout << "3.32rt3/5\n";
			cout << "4.4rt5/21\n";
			cin >> choice5;
			if (choice5 == 3)
				choice5 = 20;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum1 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum1 << "%";

			cout << "\n--------------------------------------------------------------------------------------------------------";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE MATHEMATICS EXAM...\n";
			cout << "\n=======================================================================================================\n\n\n\n";




			cout << "\n=========================================================================================================\n";
			cout << "\n ENGLISH EXAM..\n";
			cout << "\n----------------------------------------------------------------------------------------------------------\n";
			cout << "\n PLEASE READ THE INSTRUCTIONS CAREFULLY BEFORE STARTING THE ENGLISH EXAM \n\n";
			cout << "1.KINDLY NOTE THAT  YOUR MOBILE PHONES SHOULD BE SWITCHED OFF,BEFORE SITTING FOR THE EXAM\n";
			cout << "2.NOTE THAT CALCULATORS ARE NOT ALLOWED\n";
			cout << "3.NOTE THAT ONCE YOU PRESS ENTER YOU WILL NO LONGER BE IN A POSITION TO ERASE YOUR  PREVIOUS CHOICE\n";
			cout << "4.NOTE THAT THIS EXAM CONSISTS OF (100MKS)\n";
			cout << "5.KINDLY NOTE THAT THE CUT OF MARK TO JOIN THIS INSTITUTION IN (70%)\n\t IN WHICH THERE IS A CUT OFF MARKS TO PERSUE EACH COURSE..\n";
			cout << "--------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\nQUESTIONS ARE AS FOLLOWS : \n\tPLEASE SELECT SUITABLE CHOICE\n";
			cout << "\nPROVIDE AN ENGLISH IDIOM THAT MEANS THE SAME AS THE STATED BELOW..\n";
			cout << "\n QUESTION ONE: \n\t";
			cout << "(1). A DOGS AGE\n";
			cout << "1. Along period of time.\n";
			cout << "2. Along time\n";
			cout << "3. A short period of time\n";
			cout << "4. A short time\n";
			cin >> choice1;
			if (choice1 == 2)
				choice1 = 10;
			else if (choice1 != 2)
				choice1 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION TWO: \n\t";
			cout << "(2). Be a cold fish\n";
			cout << "1. feeling and happy\n";
			cout << "2. Distance and unfeeling\n";
			cout << "3. Sad and unfeeling\n";
			cout << "4. Happy and felling\n";
			cin >> choice2;
			if (choice2 == 2)
				choice2 = 30;
			else if (choice2 != 2)
				choice2 = 00;

			cout << "\n-------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION THREE: \n\t";
			cout << "(3). In two shakes ofa lamb tail\n";
			cout << "1. In  split second\n";
			cout << "2. In desperation\n";
			cout << "3. In a twinkling of an eye\n";
			cout << "4. In a very short time\n";
			cin >> choice3;
			if (choice3 == 4)
				choice3 = 20;
			else if (choice3 != 4)
				choice3 = 00;

			cout << "\n------------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FOUR: \n\t";
			cout << "(4). Like water of a ducks back\n";
			cout << "1. Without any reason\n";
			cout << "2. With any apparent reason\n";
			cout << "3. Without any apparent reason\n";
			cout << "4. With despair\n";
			cin >> choice4;
			if (choice4 == 3)
				choice4 = 30;
			else if (choice4 != 3)
				choice4 = 00;

			cout << "\n-----------------------------------------------------------------------------------------------------------\n";
			cout << "\n QUESTION FIVE: \n\t";
			cout << "(5).Play cat and mouse\n";
			cout << "1.  To Tease or to confuse somebody\n";
			cout << "2. To have disadvantage over them\n";
			cout << "3. To guide somebody to do something \n";
			cout << "4. To untrick somebody\n";
			cin >> choice5;
			if (choice5 == 1)
				choice5 = 10;
			else if (choice5 != 3)
				choice5 = 00;


			cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
			cout << "YOU HAVE SUCCESSFULLY COMPLETED YOUR EXAMS\n\t YOUR SCORES ARE AS FOLLOWS: \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";

			sum2 = (choice1 + choice2 + choice3 + choice4 + choice5);
			cout << "YOUR SCORES IS:  " << sum2 << "%";

			cout << "\n======================================================================================================\n";

			cout << "\n\nTHANKS FOR YOUR CO-OPERATION TO DO THE ENGLISH EXAM...\n";
			sum3 = (sum1 + sum2) / 2;
			cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout << "\n\nYOUR AVERAGE SCORE IS " << sum3 << "%\n\n";
			cout << "\n======================================================================================================\n";

			if (sum3 < 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tREGRETFULLY,YOU HAVE NOT QUALIFIED TO JOIN THIS INSTITUTION SINCE YOU DID NOT MAKE THE CUT..\n\t";
				cout << "THANK YOU FOR COMING TO STRATHMORE UNIVERSITY\nTRY AGAIN!!, OUR NEXT INTAKE.." << endl;
				cout << endl;
				cout << "-------------------------------------------------------------------------------------------------------\n";
			}
			else if (sum3 >= 70)
			{
				cout << "\n----------------------------------------------------------------------------------------------------\n\n";
				cout << "\n\tDEAR " << sname << " " << fname;
				cout << "\n\n\tSUCCESSFULLY,YOU HAVE QUALIFIED TO JOIN THIS INSTITUTION....CONGRATULATIONS....\n";
				cout << "\nIN ACCORDANCE TO YOUR SCORES, \n";
				cout << "YOU HAVE QUALIFIED TO PERSUE THE COURSES BELOW\n";


				cout << "1. Diploma in Business Management\n";
				cout << "2.Diploma in Business Information Technology\n";
				cout << "3.Diploma in Information Techonology\n";
				cout << "\nPLEASE SELECT ANY COURSE AS PER YOUR WISH\n\n";
				cin >> choice6;

				switch (choice6)
				{

				case 1:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE DIPLOMA IN BUSINESS MANAGEMENT\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 1 year of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH MAY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;




				case 2:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE DIPLOMA IN BUSINESS INFORMATION TECHNOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 1 year of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				case 3:
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					cout << "PLESE CONFIRM THAT YOU   " << sname << " " << fname << " HAVE DECIDED TO PERSUE DIPLOMA IN INFORMATION TECHNOLOGY\n";
					cout << "Sucessfully, " << sname << " " << fname << " your name has been added to our system\n";
					cout << "This degree course takes 1 year of which a certificate is issued for exemplary results\n";
					cout << "This course starts on  8TH JULY  \n";
					cout << "\n\t\tTHANK YOU FOR COMING AND FOR CHOOSING STRATHMORE UNIVERSITY...ONCE AGAIN CONGRATULATIONS..\n\n";
					cout << "\n----------------------------------------------------------------------------------------------------\n\n";
					break;
				default:
					cout << "ERROR!!..INVALID INPUT " << endl;
				}


			}

		}
	}
	system("pause");
	return 0;

}
