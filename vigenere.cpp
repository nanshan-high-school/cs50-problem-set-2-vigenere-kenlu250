#include <iostream>
using namespace std;

int main() {

  char finalword;
  char key[2];
  cout << "請輸入密鑰:";
  cin >> key;
  
  cout << "請輸入文件:";
  string word;
  cin >> word;

  for (int num = 0; num < 3; num++){
    if (key[num] >= 'A' && key[num] <= 'Z'){
        key[num] -= 'A';
      }
    else if (key[num] >= 'a' && key[num] <= 'z'){
      key[num] -= 'a';
    }
  }

  for (int i = 0; i < 5; i++){
    for (int k = 0; k < 3; k++){
      finalword = key[k] + word[i];
      if (k == 2){
        k -= 2;
      }
    }
    cout << finalword;
  }
}
