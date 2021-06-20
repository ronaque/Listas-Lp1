//OK

/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    // TODO: Adicione seu código aqui.
    int m;
    int n;
    int index;
    int soma = 0;

    while (cin >> m >> n)
    {

        index = m;
        if (n > 0)
        {
            for (int i = 0; i < n; i++)
            {
                soma += index;
                index++;
            }
        }
        else if (n < 0)
        {
            for (int i = 0; i > n; i--)
            {
                soma += index;
                index--;
            }
        }
        else
        {
            soma = m;
        }
        cout << soma << endl;
        soma = 0;
    }
    return 0;
}
