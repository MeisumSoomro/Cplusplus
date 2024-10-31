#include <iostream>
using namespace std;
 
float round(float F)
{
    float value = (int)(F * 100 + .5);
    return (float)value / 100;
}
 
float force(double m1, double m2, double r)
{
    float G;
    G = 6.673;
    float F;
    F = (G * m1 * m2) / (r * r);
    return round(F);
}

int main()
{
    float m1, m2, r;
    m1 = 5000000;
    m2 = 900000;
    r = 30;
     
    cout << "The Gravitational Fource is: "
         << force(m1, m2, r) << "N";
     
    return 0;
	}
	
	

