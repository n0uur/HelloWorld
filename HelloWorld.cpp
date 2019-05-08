#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
  std::setlocale(LC_ALL, "th_TH.UTF-8");
  //char Text[] = { 'H','E','L','L','O',' ', 'W', 'O','R','L','D' }; // NEED TO BE THAI :/
  char Text[] = { 'ส','ว','ั','ส','ด','ี',' ', 'โ', 'ล','ก','!' };
  for(int i = 0;i< sizeof(Text);i++)
  {
    cout << Text[i];
  }
  
}
