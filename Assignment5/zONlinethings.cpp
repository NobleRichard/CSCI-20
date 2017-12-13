#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string leer_parrafo( istream &in )
  {
  string result, line;

  // read and concatenate lines until two newlines are read
  while (getline( in, line ))
    if (line.empty()) break;
    else result += line +' ';

  // get rid of that last space
  result.erase( result.length() -1 );

  return result;
  }

int main()
  {
  cout << "Reading paragraph from file...\n";
  ifstream file( "input.txt" );
  string fichero_parrafo = leer_parrafo( file );
  file.close();

  cout << "The file's text is:\n"
       << fichero_parrafo
       << endl;

  cout << "Please enter a paragraph (press ENTER twice to stop):\n";
  string console_parrafo = leer_parrafo( cin );

  cout << "You entered the text:\n"
       << console_parrafo
       << endl;

  cout << "Bye!\n";
  return 0;
  }