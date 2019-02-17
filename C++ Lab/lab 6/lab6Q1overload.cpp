/*
//Overload  << operator 
// Curiously Recurring Template Pattern
#include<iostream>
template<class Derived>
class serializable {
 public:
  void serialize(std::ostream& os) const {
    static_cast<const Derived *>(this)->serialize(os);
  }
};

template<class Derived>
std::ostream&
operator<< (std::ostream& os, const serializable<Derived>& s) {
  s.serialize(os);
  return os;
}

class Foo : public serializable<Foo> {
 public:
  void serialize(std::ostream& os) const {
    os << "Foo" << std::endl;
  }
};
int main() {
  Foo f;
  std::cout << f;
  return 0;
}
*/
#include <iostream>
 
class Point
{
private:
    float a, b, c;
 
public:
    Point(float x=0.0, float y=0.0, float z=0.0): a(x), b(y), c(z){}
 
    friend std::ostream& operator<< (std::ostream &out, const Point &point);
};
 
std::ostream& operator<< (std::ostream &out, const Point &point)
{
    // Since operator<< is a friend of the Point class, we can access Point's members directly.
    out << "Point(" << point.a << ", " << point.b << ", " << point.c << ")";
 
    return out;
}
 
int main()
{
    Point point1(2.0, 3.5, 4.0);
    Point point2(6.0, 7.5, 8.0);
 
    std::cout << point1 << " " << point2 << '\n';
 
    return 0;
}
