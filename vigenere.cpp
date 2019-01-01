#include <iostream>
using namespace std;

int main() {

  char key[3];
  cout << "請輸入密鑰:";
  cin >> key;
  
  cout << "請輸入文件:";
  string word;
  cin >> word;
  
  for (int num = 0; num < 4; num++){
    if (key[num] >= 'A' && key[num] <= 'Z'){
        key[num] -= 'A';
      }
    else if (key[num] >= 'a' && key[num] <= 'z'){
      key[num] -= 'a';
    }
  }

  for (int one = 0; one < 4; one += 4){
    char first = key[0] + word[one];
    cout << first;
  }

  for (int two = 1; two < 4; two += 4){
    char second = key[1] + word[two];
    cout << second;
  }

  for (int three = 2; three < 4; three += 4){
    char third = key[2] + word[three];
    cout << third;
  }

  for (int four = 3; four < 4; four += 4){
    char fourth = key[3] + word[four];
    cout << fourth;
  }
  
}



  
