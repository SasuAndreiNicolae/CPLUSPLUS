#ifndef TET_H
#define TET_H

#endif // TET_H
#include <string>

class Test
{
private:
const std::string& str;
public:
Test(const std::string&k) :str{k}
    {

    }
    int a;
    void doSomething();
    const std::string& getStr()
    {
        return str;
    }

};
enum Types
{
    A,B,C,D,E,F,G,H,I,J,K,L,M,N
};
