#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string name,words,grade;
    string W1;
    float obtained_marks,M1,M2,M3,M4,M5,M6,M7,M8;
    float total,PERSENTAGE;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|                                GUJARAT SECONDARY AND HIGHER SECONDARY EDUCATION BOARD, GANDHINAGAR                                                |";
cout << endl;
cout << "|                                                                                                                                 SCIENCE STREAM    |";
cout << endl;
cout << "|                                STATEMENT OF MARKS-HIGHER SECINDARY CERTIFICATE EXAMINATION-2024                                                   |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|   MONTH AND YEAR OF EXAM.             |       SEAT NO.         |       CENTRE NO.        |        SCHOOL INDEX NO.        |        GROUP         |";
cout << endl;
cout << "|   MARCH-2024                           |    B-314537            |      2701               |   27.0106                      |       A              |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|CANDIDATE'S NAME :";
getline(cin,name);
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|           S.I.D. NUMBER   |             24V-198540             |    SR. NO. OF STATEMENT    |                        487315                    |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|      NAME OF THE SUBJECT WITH CODE    |     TOTAL MARKS     |     OBTAINED MARKS     |     MARKS OBTSINED IN WORDS     |     SUBJECT WISE GRADE   |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;


cout << "THE OBTAINED MARKS OF THE STUDENT = ";
cin >> M1 ;
getline(cin,words);

cout << "OBTAINED MARKS OF THE STUDENT IN WORDS = ";

//getline(cin,words);
cout << endl;
cout << "THE GRADE OF THE STUDENTS IS = ";
cin >> grade;

cout << "|       006 ENGLISH (F.L.)            |"<< "           100            |" << "              " << M1 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "THE OBTAINED MARKS OF THE STUDENT = ";
cin >> M2 ;
getline(cin,words);
cout << "OBTAINED MARKS OF THE STUDENT IN WORDS = ";
cout << endl;
cout << "THE GRADE OF THE STUDENTS IS = ";
cin >> grade;
cout << "|         050  MATHEMATICS                  |"<< "       100         |" << "              " << M2 << "         |"  << "           " << words << "             |" << "          " << grade << "`          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "THE OBTAINED MARKS OF THE STUDENT = ";
cin >> M3 ;
getline(cin,words);
cout << "OBTAINED MARKS OF THE STUDENT IN WORDS = ";
cout << endl;
cout << "THE GRADE OF THE STUDENTS IS = ";
cin >> grade;
cout << "|       052  CHEMISTRY                    |"<< "       100         |" << "              " << M3 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "THE OBTAINED MARKS OF THE STUDENT = ";
cin >> M4 ;
getline(cin,words);
cout << "OBTAINED MARKS OF THE STUDENT IN WORDS = ";
cout << endl;
cout << "THE GRADE OF THE STUDENTS IS = ";
cin >> grade;
cout << "|       053  CHEMISTRY PRACTICAL          |"<< "        50         |"  << "              " << M4 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "THE OBTAINED MARKS OF THE STUDENT = ";
cin >> M5 ;
getline(cin,words);
cout << "OBTAINED MARKS OF THE STUDENT IN WORDS = ";
cout << endl;
cout << "THE GRADE OF THE STUDENTS IS = ";
cin >> grade;
cout << "|       054  PHYSICS                      |"<< "       100         |" << "              " << M5 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "THE OBTAINED MARKS OF THE STUDENT = ";
cin >> M6 ;
getline(cin,words);
cout << "OBTAINED MARKS OF THE STUDENT IN WORDS = ";
cout << endl;
cout << "THE GRADE OF THE STUDENTS IS = ";
cin >> grade;
cout << "|       055  PHYSICS PRACTICAL            |"<< "        50         |" << "              " << M6 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "THE OBTAINED MARKS OF THE STUDENT = ";
cin >> M7 ;
getline(cin,words);
cout << "OBTAINED MARKS OF THE STUDENT IN WORDS = ";
cout << endl;
cout << "THE GRADE OF THE STUDENTS IS = ";
cin >> grade;
cout << "|       331  COMPUTER                     |"<< "       100         |" << "              " << M7 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "THE OBTAINED MARKS OF THE STUDENT = ";
cin >> M8 ;
getline(cin,words);
cout << "OBTAINED MARKS OF THE STUDENT IN WORDS = ";
cout << endl;
cout << "THE GRADE OF THE STUDENTS IS = ";
cin >> grade;
cout << "|       331  COMPUTER PRACTICAL           |"<< "        50          |" << "              " << M8 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
obtained_marks=M1+M2+M3+M4+M5+M6+M7+M8;
total=obtained_marks/500;
cout << "|THEORY TOTAL ON WHICH GRADE IS CALCULATED :" << total << "                                                                              |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";

cout << "|TOTAL MARKS   |  650    |  MARKS OBTAINED      |   " << obtained_marks << "       |   OVERALL GRADE    | B2  : DT:09/05/2024          |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cin >> W1;
cout << "|TOTAL MARKS OBTAINED IN WORDS  |"   << W1;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
PERSENTAGE=(obtained_marks/650)*100;
cout << "|PERCENTAGE :   " << PERSENTAGE << "      | PERCENTAGE RANK  :  " << PERSENTAGE << "           | OVERALL PERCENTAGE : " << PERSENTAGE << "         |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|IMPORTANT: Any change in this document except by the issuing authority, will result into cancellation of the statement and shall also invoke imposition of appropriate legla action. |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|                                                                                                                                 JIGAR MAKWANA |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";

cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;





cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|                                GUJARAT SECONDARY AND HIGHER SECONDARY EDUCATION BOARD, GANDHINAGAR                                                |";
cout << endl;
cout << "|                                                                                                                                 SCIENCE STREAM    |";
cout << endl;
cout << "|                                STATEMENT OF MARKS-HIGHER SECINDARY CERTIFICATE EXAMINATION-2024                                                   |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|   MONTH AND YEAR OF EXAM.             |       SEAT NO.         |       CENTRE NO.        |        SCHOOL INDEX NO.        |        GROUP         |";
cout << endl;
cout << "|   MARCH-2024                           |    B-314537            |      2701               |   27.0106                      |       A              |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|CANDIDATE'S NAME :";
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|           S.I.D. NUMBER   |             24V-198540             |    SR. NO. OF STATEMENT    |                        487315                    |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|      NAME OF THE SUBJECT WITH CODE    |     TOTAL MARKS     |     OBTAINED MARKS     |     MARKS OBTSINED IN WORDS     |     SUBJECT WISE GRADE   |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|       006 ENGLISH (F.L.)            |"<< "           100            |" << "              " << M1 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << "|         050  MATHEMATICS                  |"<< "       100         |" << "              " << M2 << "         |"  << "           " << words << "             |" << "          " << grade << "`          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << "|       052  CHEMISTRY                    |"<< "       100         |" << "              " << M3 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << "|       053  CHEMISTRY PRACTICAL          |"<< "        50         |"  << "              " << M4 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << "|       054  PHYSICS                      |"<< "       100         |" << "              " << M5 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << "|       055  PHYSICS PRACTICAL            |"<< "        50         |" << "              " << M6 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << "|       331  COMPUTER                     |"<< "       100         |" << "              " << M7 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";



cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << "|       331  COMPUTER PRACTICAL           |"<< "        50          |" << "              " << M8 << "         |"  << "           " << words << "             |" << "          " << grade << "          |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << "|THEORY TOTAL ON WHICH GRADE IS CALCULATED :" << total << "                                                                              |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";

cout << "|TOTAL MARKS   |  650    |  MARKS OBTAINED      |   " << obtained_marks << "       |   OVERALL GRADE    | B2  : DT:09/05/2024          |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|TOTAL MARKS OBTAINED IN WORDS  |"   << W1;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|PERCENTAGE :   " << PERSENTAGE << "      | PERCENTAGE RANK  :  " << PERSENTAGE << "           | OVERALL PERCENTAGE : " << PERSENTAGE << "         |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|IMPORTANT: Any change in this document except by the issuing authority, will result into cancellation of the statement and shall also invoke imposition of appropriate legla action. |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";
cout << endl;
cout << "|                                                                                                                                 JIGAR MAKWANA |";
cout << endl;
cout << "+---------------------------------------------------------------------------------------------------------------------------------------------------+";

}
