
#include<iostream>
#include<string.h>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
 int player=1;
 int randomnumber2=0;
int parva=1;
int randomnumber1=0;
int i=0, j=0;
int board[10][10]={
  { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {11,12,13,14,15,16,17,18,19,20},
  {21,22,23,24,25,26,27,28,29,30},
  {31,32,33,34,35,36,37,38,39,40},
  {41,42,43,44,45,46,47,48,49,50},
  {51,52,53,54,55,56,57,58,59,60},
  {61,62,63,64,65,66,67,68,69,70},
  {71,72,73,74,75,76,77,78,79,80},
  {81,82,83,84,85,86,87,88,89,90},
  {91,92,93,94,95,96,97,98,99,100}
};



for(int i=10; i>=0; i--){
  for(int j=0; j<10; j++){
        cout << board[i][j];
        cout << " ";
        if(j<=100) cout << " | ";
    }
    cout << endl;
    if (i<=100) cout << "-----+-----+-----+-----+-----+-----+-----+-----+-----+-----";
    cout << endl;
  }

ofstream writefile("filename.txt");
writefile << "
srand(time(0));

int counter=3;
  for(int k=1; k<counter; k++){
    char dice1;
    cout << "Press any key then ENTER to roll the die: ";
    cin >> dice1;
randomnumber1=(rand()%6)+1;
/*if(randomnumber1==6){
    cout << "parva:you can start your game." << endl;
    break;
}*/
parva=parva+randomnumber1;
    cout << endl;
    //ladders.
    if (parva == 12) {
                cout << "jump to 35 from 12 because of the ladder" << endl;
                parva = 35;}
    if (parva == 19) {
                cout << "jump to 81 from 19 because of the ladder" << endl;
                parva = 81;}
    if (parva == 24) {
                cout << "jump to 46 from 24 because of the ladder" << endl;
                parva = 46;}
    if (parva == 55) {
                cout << "jump to 68 from 55 because of the ladder" << endl;
                parva = 68;}
    if (parva == 88) {
                cout << "jump to 97 from 88 because of the ladder" << endl;
                parva = 97;}
    if (parva == 10) {
                cout << "jump to 40 from 10 because of the ladder" << endl;
                parva = 40;}
    if (parva == 25) {
                cout << "jump to 53 from 25 because of the ladder" << endl;
                parva = 53;}

     //snakes.
      if (parva == 27) {
                cout << "snake bites at 27, now position is 7" << endl;
                parva = 7;}
    if (parva == 38) {
                cout << "snake bites at 38, now position is 11" << endl;
                parva = 11;}
    if (parva == 62) {
                cout << "snake bites at 62, now position is 54" << endl;
                parva = 54;}
    if (parva == 89) {
                cout << "snake bites at 89, now position is 75" << endl;
                parva = 75;}
    if (parva == 93) {
                cout << "snake bites at 93, now position is 85" << endl;
                parva = 85;}
    if (parva == 98) {
                cout << "snake bites at 98, now position is 81" << endl;
                parva = 81;}
    if (parva == 99) {
                cout << "snake bites at 99, now position is 3" << endl;
                parva = 3;}
if(parva<=101){
      cout <<"moves to make by parva = "  << randomnumber1 << "   , &   position of the parva = " << parva << endl;
        }
        else {
             cout << "parva won the game.";
             counter=0;
    cout << endl;
        }"
        int row1,column1;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(board[i][j]==parva){
                    row1=i;
                    column1=j;
                    break;
                }
            }
        }
writefile.close();

for(int i=10; i>=0; i--){
  for(int j=0; j<10; j++){
    if (i == row1 && j == column1){
                cout << " A ";}
                    cout << board[i][j];
        cout << " ";
        if(j<=100) cout << " | ";

  }
   cout << endl;
    if (i<=100) cout << "-----+-----+-----+-----+-----+-----+-----+-----+-----+-----";
    cout << endl;
}


ofstream writefile("filename.txt");
writefile << "char dice2;
    cout << "Press any key then ENTER to roll the die: ";
    cin >> dice2;
randomnumber2=(rand()%6)+1;
/*if(randomnumber2==6){
    cout << "player:you can start your game." << endl;
    break;}*/
player=player+randomnumber2;
    cout << endl;
    //ladders.
    if (player == 12) {
                cout << "jump to 35 from 12 because of the ladder" << endl;
                player = 35;}
     if (player == 19) {
                cout << "jump to 81 from 19 because of the ladder" << endl;
               player = 81;}
    if (player == 24) {
                cout << "jump to 46 from 24 because of the ladder" << endl;
              player = 46;}
    if (player == 55) {
                cout << "jump to 68 from 55 because of the ladder" << endl;
               player = 68;}
    if (player == 88) {
                cout << "jump to 97 from 88 because of the ladder" << endl;
              player = 97;}
     if (parva == 10) {
                cout << "jump to 40 from 10 because of the ladder" << endl;
                parva = 40;}
    if (parva == 25) {
                cout << "jump to 53 from 25 because of the ladder" << endl;
                parva = 53;}

     //snakes.
      if (parva == 27) {
                cout << "snake bites at 27, now position is 7" << endl;
                parva = 7;}
    if (parva == 38) {
                cout << "snake bites at 38, now position is 11" << endl;
                parva = 11;}
    if (parva == 62) {
                cout << "snake bites at 62, now position is 54" << endl;
                parva = 54;}
    if (parva == 89) {
                cout << "snake bites at 89, now position is 75" << endl;
                parva = 75;}
    if (parva == 93) {
                cout << "snake bites at 93, now position is 85" << endl;
                parva = 85;}
    if (parva == 98) {
                cout << "snake bites at 98, now position is 81" << endl;
                parva = 81;}
    if (parva == 99) {
                cout << "snake bites at 99, now position is 3" << endl;
                parva = 3;}

if(player<101){
      cout <<"moves to make by player = "  << randomnumber2 << "   , &   position of the player = " << player << endl;
        }
else {
     cout << "player won the game.";
     counter=0;
    cout << endl;
}"




        /*int row1,column1;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(board[i][j]==parva){
                    row1=i;
                    column1=j;
                    break;
                }
            }
        }*/
 int row2,column2;
        for(int i=0; i<=10; i++){
            for(int j=0; j<=10; j++){
                if(board[i][j]==player){
                    row2=i;
                    column2=j;
                    break;
                }
            }
        }





for(int i=10; i>=0; i--){
  for(int j=0; j<10; j++){

 if(i==row2 && j==column2){
    cout << "B";
}

             cout << board[i][j];
        cout << " ";
        if(j<=100) cout << " | ";

  }
   cout << endl;
    if (i<=100) cout << "-----+-----+-----+-----+-----+-----+-----+-----+-----+-----";
    cout << endl;
}
counter++;
}
string myText;
ifstream ReadFile("filename.txt");


  while (getline (ReadFile, myText)) {

    cout << myText;
  }


  ReadFile.close();

return 0;
}



