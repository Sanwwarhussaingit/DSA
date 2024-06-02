#include <iostream>
#define n 20;
class poly
{
private:
    int a[n], b[n], add[n], q, p, r;

public:
    void init_poly();
    void input_poly();
    void add_poly();
    void display_poly();
};

void poly::init_poly()
{
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i] = add[i] = mul[i] = 0;
    }
}

void poly::input_poly()
{
    int i = 0, j;
    std::cout << "\nEnter degree of first Polynomial:";
    std::cin >> p;
    std::cout << "\nEnter values for first Polynomial";
    do
    {
        std::cout << "\nEnter the degree less than or equal to" << p << ":";
        std::cin >> i;
        std::cout << "\n Enter the coefficiant: ";
        std::cin >> a[i];
        j = 0;
        std::cout << "Enter more element ? pass for yes & 0 for exit";
        std::cin >> j;
    } while (j == 1);

    std::cout << "\n Enter degrree of second polynomial ";
    std::cin >> q;
    std::cout << "\nEnter values for second polynomial";
    do
    {
        std::cout << "\nEnter the degree less then or qual to " << q << ":";
        std::cin >> i;
        std::cout << "enter the coefficient:";
        std::cin >> b[i];

        std::cout << "\nEnter more element? press 1 for yes & 0 for exit:";
        std::cin >> j;
    } while (j == 1);
}
void poly::add_poly()
{
    int i, j;
    if (p > q)
    {
        r = p;
    }
    else
    {
        r = q;
    }
    for (int i = 0; i <= r; i++)
    {
        add[i] = a[i] + b[i];
    }
}
void poly::display_poly()
{
    int i;
    std::cout << "\nAddition of two PolynomialExpression:\n\n\n ";
    for (i = r; i >= 0; i--)
    {
        if (add[i] == 0)
        {
            continue;
        }
        std::cout << add[i] << "X^" << i;
        if (i != 0)
        {
            std::cout << "+";
        }
    }
}
void main()
{
    poly obj;
    clrscr();
    obj.init_poly();
    obj.input_poly(a);
    obj.input_poly(b);
    obj.add_poly();
    obj.display_poly();
    getch();
}