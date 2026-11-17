/*
    Factory Method Solved Tight Coupling
*/
#include <bits/stdc++.h>
using namespace std;
class Circle;
class Shape{
    public:
        static string color;
        string func1(float a1)
        {
            return "Value received : " + to_string(a1);
        }
    private:
        static int border;
        float f2(int& a2)
        {
            a2 += 5;
        }
    protected:
        Circle* f3()
        {
            a3 = ;   
            return a3;
        }
};


int main()
{

}