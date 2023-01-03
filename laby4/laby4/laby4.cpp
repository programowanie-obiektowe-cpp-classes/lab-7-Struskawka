
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;


//----------------------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
try{
    double n;
    cin >> n;
    throw n;

    int m;
    cin >> m;
    throw m;

}
catch (int val) { cout <<val; }
catch (...) { cout << "wyjatek"; }

    return 0;
}