#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

struct horner {
    horner (): current(0), vec() {};
    void take_input ();
    double mult (double x);
    void print ();
private:
    int current;
    std::vector<double> vec;
};

void horner::take_input ()
{
    double x = 0;
    std::cout << "Add input for x^" << this -> current << std::endl;
    std::cin >> x;
    while (x != -1) {
        (this -> current)++;
        this -> vec.push_back(x);
        std::cout << "Add input for x^" << this -> current << std::endl;
        std::cin >> x;
    }
}

void horner::print ()
{
    for (int i = this -> vec.size() - 1; i >= 0; i--) {
        std::cout << "x^" << i << " = " << this -> vec[i] << std::endl;;
    }
}

double horner::mult (double x)
{
    double ans = this -> vec[this -> vec.size() - 1];
    for (int i = this -> vec.size() - 2; i >= 0; i--) {
        ans = this -> vec[i] + ans * x;
    }
    return ans;
}

int main ()
{
    horner h;

    h.take_input();

    h.print();

    double x = 0;

    std::cout << "Input for x at: " << std::endl;
    std::cin >> x;

    std::cout << std::setprecision(30) << "The answer at x = " << x << " is: " << h.mult(x) << std::endl;
    system("pause");
    return 0;
}
