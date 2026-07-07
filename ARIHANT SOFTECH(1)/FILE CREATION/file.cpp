//to make a file and to store a text message in the file.
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
ofstream MyFile("filename.txt");

MyFile << "my name is parva,";
MyFile.close();


  // Create a text string, which is used to output the text file
  string myText;

  // Read from the text file
  ifstream MyReadFile("filename.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
    // Output the text from the file
    cout << myText;
  }

  // Close the file
  MyReadFile.close();
}
