#include <iostream>
using namespace std;
int main()
{
  int x = 10; // 1010 em binário
  int y = 7;  // 0111 em binário

  int e_result = x & y; // 0010 em binário, que é igual a 2 em decimal
  int ou_result = x | y;  // 1111 em binário, que é igual a 15 em decimal
  int xor_result = x ^ y; // 1101 em binário, que é igual a 13 em decimal
  int negação_result = ~x;    // 0101 em binário, que é igual a -11 em decimal
  int esquerda_result = x << 2; // 101000 em binário, que é igual a 40 em decimal
  int direita_result = x >> 2; // 0010 em binário, que é igual a 2 em decimal

  cout << "E result: " << e_result << endl;
  cout << "OU result: " << ou_result << endl;
  cout << "XOR result: " << xor_result << endl;
  cout << "NEGAÇÃO result: " << negação_result << endl;
  cout << "ESQUERDA result: " << esquerda_result << endl;
  cout << "DIREITA result: " << direita_result << endl;

  return 0;
}
