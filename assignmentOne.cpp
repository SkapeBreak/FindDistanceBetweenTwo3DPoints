#include <iostream>
#include <cmath>
using namespace std;
#include <iomanip>

void threeDPointFormula(int x1, int y1, int z1, int x2, int y2, int z2)
{
  float distanceBeyweenPointAandB = sqrt((x2 - x1)*(x2 - x1)+(y2 - y1)*(y2 - y1) + (z2 - z1)*(z2 - z1));
  float distanceBeyweenOriginAndPointB = sqrt((x2)*(x2)+(y2)*(y2) + (z2)*(z2));
  float distanceBeyweenOriginAndPointA = sqrt((x1)*(x1)+(y1)*(y1) + (z1)*(z1));

  string origin = "(0, 0, 0)";
  string pointOne = "(" + to_string(x1) + ", " + to_string(y1) + ", " + to_string(z1) + ")";
  string pointTwo = "(" + to_string(x2) + ", " + to_string(y2) + ", " + to_string(z2) + ")";

  cout<<"Point one is: "<< pointOne <<endl;
  cout<<"Point two is: "<< pointTwo <<endl;


  cout<<"The distance between points " << pointOne <<  " and " << origin<< " is: " << fixed << setprecision(2) << distanceBeyweenOriginAndPointA <<endl;
  cout<<"The distance between points " << pointTwo <<  " and " << origin<< " is: " << fixed << setprecision(2) << distanceBeyweenOriginAndPointB <<endl;
  cout<<"The distance between points " << pointOne <<  " and " << pointTwo<< " is: " << fixed << setprecision(2) << distanceBeyweenPointAandB <<endl;

}
void pointInputHandler()
{
int x1, y1, z1, x2, y2, z2;

cout<<"Please enter the values x, y and z for point one, separated by spaces: "<<endl;
cin >> x1 >> y1 >> z1;
cout<<"Please enter the values x, y and z for point two separated by spaces: "<<endl;
cin >> x2 >> y2 >> z2;

threeDPointFormula(x1, y1, z1, x2, y2, z2);

}


int main() {
  pointInputHandler();
  cout << endl;
    return 0;
}