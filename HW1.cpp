/*
// 문제점.
// 1. setRadius함수에 문제가 있다.
// 1-1. 반지름 값의 이상으로 면적 값이 이상하게 나온다.
#include <iostream>
#define COLS 3
using namespace std;

class Circle {
  int radius;
  public:
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int radius){
  radius= radius;
}
double Circle::getArea() {
  double sum = 3.14 * radius *radius;
  return sum;
}
int main() {
  Circle c[COLS];
  int tmp, index = 0;

  for(int i=0; i<COLS; i++) {
    cout << "원 " << i+1 << "의 반지름 >> ";
    cin >> tmp;
    c[i].setRadius(tmp);
    cout << " 면적은 " << c[i].getArea() << endl;
    if(c[i].getArea() > 100) 
      index++;
  }
  cout << "면적이 100보다 큰 원은 " << index << "개 입니다.";
}
*/