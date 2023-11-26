#include <iostream>
#include <string>

using namespace std;

int main() {

  string message;
  int key;

  cout << "Entrez le texte à chiffrer : ";
  cin >> message;
  cout << "Entrez la cle de chiffrement : ";
  cin >> key;

    string ciphertext;

    for (char letter : message) {

      int X = letter - ' a';
      int Y = (X + key) % 26;

      char new_letter = ' a' + Y;

      ciphertext += new_letter;


  }

  cout << "Texte chiffre : " << ciphertext << endl;

  return 0;
}


