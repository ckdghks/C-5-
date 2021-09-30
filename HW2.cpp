/*
// #include <string>을 해야할 듯...
#include <iostream>
#define COLS 3
using namespace std;

class Person {
  string name;
  string tel;
  public:
    Person();
    string getName() {
      return name;
    }
    string getTel() {
      return tel;
    }
    void set(string n, string t);
};

Person::Person() {
  name = "홍길동";
  tel = "010-9999-9999";
}

void Person::set(string n, string t) {
  name = n;
  tel = t;
}

int main() {
  Person p[COLS];
  string buf1, buf2;

  cout << "이름과 전화 번호를 입력해 주세요" << endl;

  for(int i=0; i<COLS; i++) {
    cout << "사람 " << i+1 << ">> ";
    cin >> buf1; 
    cin >> buf2;
    p[i].set(buf1, buf2);
  }

  cout << "모든 사람의 이름은 "; 
  for(int j=0; j<COLS; j++) {
    cout << p[j].getName() << " ";
  }

  cout << "전화번호를 검색합니다. 이름을 입력하세요>>";
  cin >> buf1;
  for(int k=0; k<COLS; k++) {
    if(buf1 == p[k].getName()) {
      cout << "전화번호는 " << p[k].getTel() << endl;
    }
  }
}
*/