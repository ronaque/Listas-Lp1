/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    // TODO: Adicione aqui a sua solução.
    float c;
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, t = 0;
    while (cin >> c)
    {
        t++;
        if (c >= 0 && c < 25)
        {
            n1++;
        }
        else if (c >= 25 && c < 50)
        {
            n2++;
        }
        else if (c >= 50 && c < 75)
        {
            n3++;
        }
        else if (c >= 75 && c < 100)
        {
            n4++;
        }
        else
        {
            n5++;
        }
    }

    n1 = (n1 / t) * 100;
    n2 = (n2 / t) * 100;
    n3 = (n3 / t) * 100;
    n4 = (n4 / t) * 100;
    n5 = (n5 / t) * 100;

    cout << setprecision(4) << n1 << endl;
    cout << setprecision(4) << n2 << endl;
    cout << setprecision(4) << n3 << endl;
    cout << setprecision(4) << n4 << endl;
    cout << setprecision(4) << n5 << endl;

    return 0;
}
