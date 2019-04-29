// myProg02.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  std::ifstream ifs;
  string txtLine;

  int duckCount = 0;
  int animals = 0;
  int nonDuck = 0;


  ifs.open(argv[1]);
  while(!ifs.eof())
  {
    if (txtLine=="duck")
    {
       duckCount++;
       animals++;
    }
    else
    {
       nonDuck++;
       animals++;
    }
    getline(ifs,txtLine);
  }
  cout << "Report for " << argv[1] << ":" << endl;
  cout << "   Animal count:    " << animals-1 << endl;
  cout << "   Duck count:      " << duckCount << endl;
  cout << "   Non duck count:  " << nonDuck-1<< endl;
  
  return 0;
}
