#include <stdio.h>

typedef struct
{
    char a;
    int b;
    int c;
} test_struct;

class TestClass
{
protected:
    char a;
    int b;
    int c;
public:
    TestClass() { };
    ~TestClass() { };
    int getA() { return a; };
    int getB() { return b; };
    int getC() { return c; };
};

class DerivedClass: protected TestClass
{
protected:
    static int d;
public:
    int getD() { return d; };
};

int main()
{
    printf("struct: %d\n", sizeof(test_struct));
    printf("base class: %d\n", sizeof(TestClass));
    printf("derived class: %d\n", sizeof(DerivedClass));
    return 0;
}
