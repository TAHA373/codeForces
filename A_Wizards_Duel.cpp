#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float l,p,q;
    float relative_time;
    float relative_speed;
    float relative_distance;

    cin >> l ;
    cin >> p;
    cin >> q;
    relative_speed = p + q;// v = v1  + v2;
    relative_time = l / relative_speed; // v = d/t => t = d / v
    relative_distance = relative_time * p;
    cout << relative_distance << endl;
}

