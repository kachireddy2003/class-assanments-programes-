// 21bai1779_k.achireddy _assament 1
#include <iostream>
using namespace std;
class stores
{
    private :
    int items;
    public:
    stores() : items(0){};
    stores(int y){
        items=y ;
    }
    void disp(){
        cout<<"The value is "<<items<<endl;
    }
    friend void friend_store(stores &s);
};
void friend_store(stores &s){
    cout<<"Printing the value of number of items through friend function "<<s.items<<endl;
}
int main() {
    
    stores s1, s2(10),s3(60) , s4,s5(90);
    s1.disp();
    s2.disp();
    s3.disp();
    friend_store( s4);
    friend_store( s5);

    return 0;
}