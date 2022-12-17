#include <iostream>
#include <string>

using namespace std;

int main() {
  string a = "Sou uma string!";
  string b = "Eu também sou uma string!";

  cout << "a string a tem: " << a.size() << " caracteres." << endl;
  cout << "a string b tem: " << b.size() << " caracteres." << endl;

  int c = (a.size() + b.size()) / 2;
  cout << "A media aproximada das strings a e b e: " << c << endl;

  return 0;
}
