#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream f("szoveg.txt");
  string sor;
  if(f.is_open())
  {
    while(getline(f, sor))
    {
      cout << sor << endl;
    }
    f.close();
  }
  else
  {
    cerr << "Hiba!" << endl;
  }
  return 0;
}
