// countDucks.cpp 
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
  
  ifs.open(argv[1]);
  while(!ifs.eof())
  {
    if (txtLine=="duck")
       {
          duckCount++;
       }
    getline(ifs,txtLine);
  }
  cout << "There were " << duckCount << " in " << argv[1] << endl;
  return 0;
}
