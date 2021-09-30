#include <iostream>
#define COLS 3
using namespace std;

class Circle {
  int radius;
  public:
    void setRadius(int r);
    double getArea();
};

void Circle::setRadius(int r){
  radius= r;
}
double Circle::getArea() {
  double sum = 3.14*radius*radius;
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