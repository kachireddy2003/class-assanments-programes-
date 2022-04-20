#include <iostream>
using namespace std;

class Cars
{
// Declare a friend class
friend class Resalecars;
private:
int Key;
public:
Cars() : Key(0){}
void printMember()
{
cout << "The secret password to open the smart car is " << Key << endl;
}
};

class Resalecars
{
public:
void change( Cars & yourclass, int x )
{
yourclass.Key = x;
}
};

int main()
{
Cars c1;
Resalecars r1;
c1.printMember();
r1.change( c1, 5 );
c1.printMember();
return 0;
}
