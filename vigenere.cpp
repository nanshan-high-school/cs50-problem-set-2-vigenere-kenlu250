#include <iostream>
using namespace std;

int main() {

  int time = 0;

  int keytime = 0;
  cout << "請輸入密鑰字數:";
  cin >> keytime;

  int wordtime = 0;
  cout << "請輸入文件字數:";
  cin >> wordtime;

  char finalword[wordtime];

  string key;
  cout << "請輸入密鑰:";
  cin >> key;
  
  cout << "請輸入文件:";
  string word;
  cin >> word;

  for (int num = 0; num < keytime; num++){
    if (key[num] >= 'A' && key[num] <= 'Z'){
      key[num] -= 'A';
      }
    else if (key[num] >= 'a' && key[num] <= 'z'){
      key[num] -= 'a';
    }
  }

  for (int i = 0; i < wordtime; i++){
    if (time + i == keytime){
      time -= keytime;
    }

    finalword[i] = word[i] + key[time+i];

    if (word[i] + key[time+i] > 'Z'){
      finalword[i] -= 26;
    }
    else if (word[i] + key[time+i] > 'z'){
      finalword[i] -= 26;
    }

    cout << "結果為:" << finalword[i];

  }
  
}
