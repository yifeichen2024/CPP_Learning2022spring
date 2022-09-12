// stock02.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>
#include <iostream>
using namespace std;
class Stock
{
    private:
    char *company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
    
    public:
    Stock(); // default constructor
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock(); // do-nothing destructor

    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    friend ostream & operator << (ostream & os, const Stock &a);
    const Stock & topval(const Stock & s) const;
};
#endif