#include <iostream>

using namespace std;

class CBase
{
private:
    int i;

public:
    CBase() {this->i = 0;}
    CBase(int j) {this->i = j;};
    int get() { return this->i;}
    void add(int j) {this->i += j;};
};

class CLast: CBase
{
private:
    int get() {return -1;}
public:
    CLast(int j) {this->add(j);};
    void print(){std::cout << "i = " << this->get() << std::endl;};
    void printB(){std::cout << "i = " << CBase::get() << std::endl;};
};


int main()
{
    CLast a(1);
    
    a.print();
    a.printB();

    return 0;
}
