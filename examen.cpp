#include <bits/stdc++.h>
using namespace std;
class Circulo
{
    float r;

public:
    int x;
    int y;
    Circulo();
    Circulo(int x2, int y2);
    Circulo(int x2, int y2, float rr);
    float getRadio();
    void setRadio(float rr);
    float getArea();
    void intersects(Circulo c);
};
int main()
{
    Circulo c1;
    Circulo c2(1, 2);
    Circulo c3(1, 2, 1);
    c1.setRadio(3);
    c1.x = 0;
    c1.y = 1;
    c2.setRadio(2);
    cout << "el area del primer circulo es " << c1.getArea() << '\n';
    cout << "el area del segundo circulo es " << c2.getArea() << '\n';
    cout << "el area del tercer circulo es " << c3.getArea() << '\n';
    cout << "1,2: ";
    c1.intersects(c2);
    cout << "1,3: ";
    c1.intersects(c3);
    cout << "2,3: ";
    c2.intersects(c3);
}

Circulo::Circulo()
{
    r = 0.0;
    x = 0;
    y = 0;
}
Circulo::Circulo(int x2, int y2)
{
    r = 0.0;
    x = x2;
    y = y2;
}
Circulo::Circulo(int x2, int y2, float rr)
{
    if (rr > 0.0)
        r = rr;
    else
        r = 0.0;
    x = x2;
    y = y2;
}
float Circulo::getRadio()
{
    return r;
}
void Circulo::setRadio(float rr)
{
    if (rr > 0.0)
        r = rr;
    else
        r = 0.0;
}
float Circulo::getArea()
{
    return 3.1416 * r * r;
}
void Circulo::intersects(Circulo c)
{
    float dist = (sqrt((y - c.y) * (y - c.y) + (x - c.x) * (x - c.x)));
    cout << "los circulos ";
    if (!(c.getRadio() + r > dist))
        cout << "no ";
    cout << "intersectan\n";
}
