#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

const float Pi = 3.14;
int main()
{
    double CylinderHeight,
        CylinderRadius,
        CylinderVolume;

    cout << "\n\nEnter Cylinder Height: ";
    cin >> CylinderHeight;
    cout << "\n\nEnter Cylider Radius: ";
    cin >> CylinderRadius;

    CylinderVolume = Pi * CylinderRadius * CylinderRadius * CylinderHeight;

    cout << "\n\nCylinder Volume: ";
    cout << CylinderVolume;

    return 0;
}