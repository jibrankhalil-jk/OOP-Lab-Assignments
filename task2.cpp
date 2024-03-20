#include <iostream>
#include <string>

using namespace std;

class Maths
{

public:
    int a, b,c;

public:
    Maths(int a = 0, int b = 0,int c = 0)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    };

    // // unary increment
    void operator++()
    {
        ++a;
    }

    void operator++(int)
    {
        a++;
    }

    void operator--()
    {
        --a;
    }

    void operator--(int)
    {
        a--;
    }

    Maths operator+(Maths math)
    {
        Maths t;
        t.a = math.a + this->a;
        t.b = math.b + this->b;
        // t.c  = math.c + this->c;
        return t;
    }
    Maths operator -(Maths math)
    {
        Maths t;
        t.a = math.a - this->a;
        t.b = math.b - this->b;
        return t;
    }
    Maths operator*(Maths math)
    {
        Maths t;
        t.a = math.a * this->a;
        t.b = math.b * this->b;
        return t;
    }
    Maths operator/(Maths math)
    {
        Maths t;
        t.a = math.a / this->a;
        t.b = math.b / this->b;
        return t;
    }
    bool operator<(Maths math)
    {
        Maths t;
        if(a<math.a && b<math.b){
            return 1;
        }else{
        return 0;
        }
    }
    bool operator>(Maths math)
    {
        Maths t;
        if(a>math.a && b>math.b){
            return 1;
        }else{
        return 0;
        }
    }

    bool operator ==(Maths math)
    {
        Maths t;
        if(a == math.a && b == math.b){
            return 1;
        }else{
        return 0;
        }
    }
};

int main()
{
    Maths a(10, 10,1), b(10, 10,2);

    // unary increment and
    ++a;
    cout<<"a ="<<a.a<<endl;
    --a;
    cout<<"a ="<<a.a<<endl<<endl;
    Maths c = a + b;

    c.c = 99;
    cout<<"c.c" << c.c<<endl;


    cout << " a.a("<<a.a<<") + b.a("<<b.a<<") = " << c.a << endl;
    cout << " a.b("<<a.a<<") + b.b("<<b.a<<") = " << c.b << endl<< endl;

    c = a - b;
    cout << " a.a("<<a.a<<") - b.a("<<b.a<<") = " << c.a << endl;
    cout << " a.b("<<a.a<<") - b.b("<<b.a<<") = " << c.b << endl<< endl;
  
    c = a * b;
    cout << " a.a("<<a.a<<") * b.a("<<b.a<<") = " << c.a << endl;
    cout << " a.b("<<a.a<<") * b.b("<<b.a<<") = " << c.b << endl<< endl;;
   
    c = a / b;
    cout << " a.a("<<a.a<<") / b.a("<<b.a<<") = " << c.a << endl;
    cout << " a.b("<<a.a<<") / b.b("<<b.a<<") = " << c.b << endl<< endl;


    cout<<"c.c" << c.c <<endl;


    if(a<b){
        cout<<"a is smaller than b"<<endl;
    }else{
        cout<<"a is greater than b"<<endl;
    }

    if(a == b){
        cout<<"a is equal to b"<<endl;
    }
    

    return 0;
}