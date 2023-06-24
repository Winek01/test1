#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string filename;
  char characterToCount;
  int characterCount = 0;

  cout << "Podaj nazwę pliku: ";
  cin >> filename;
  cout << "Podaj znak do sprawdzenia: ";
  cin >> characterToCount;

  ifstream file;
  file.open(filename);

  if (!file.is_open()) {
    cout << "Nie udało się otworzyć pliku." << endl;
    return 1;
  }

  char currentCharacter;
  while (file.get(currentCharacter)) {
    if (currentCharacter == characterToCount) {
      characterCount++;
    }
  }

  cout << "Liczba znaków '" << characterToCount << "' w pliku '" << filename << "': " << characterCount << endl;
  cout << "Aktualizacja";

  return 0;
}
