
#include <iostream>
#include <math.h>

using namespace std;
double findRoot(int n, double k) {
    double x = 1;
    double x0 = 0;
    while (abs(x0 - x) > 0.00001) {
        x0 = x;
        x = 1. / n * ((n - 1) * x0 + k / pow(x0, (n - 1)));
    }
    return x;
}
// float findRoot(float n, float x) {

//   if (n + 1 == 0) {
//     return x;
//   }
//   return x = 1. / n * (x / (pow(findRoot(n-1, x), n)) + (n-1) * findRoot(n-1, x));
// }

float findY(float a, float b) {
 
	double first = findRoot(5, a);
	double second = findRoot(5, b);

	return findRoot(5,first * second ) + first;
}

int main()
{

cout<<findY(5, 32)<<endl;

}