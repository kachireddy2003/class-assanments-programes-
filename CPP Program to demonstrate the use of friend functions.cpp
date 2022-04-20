//demonstrate of friend functions

#include<iostream>
using namespace std;
class Cars
{
private:
int height;
public:
Cars()
{
height = 0;
}
void displayHeight()
{
cout<< "The height of the Car is" <<height << "\n";
}
friend void changeHeight(Cars &h);
};

void changeHeight(Cars &h)
{
h.height = h.height +10;
}

int main()
{
Cars h1;
h1.displayHeight();
changeHeight(h1);
h1.displayHeight();
return(0);
}
