//OK

#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    int n;
    int nNegativos = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        if (n < 0)
        {
            nNegativos++;
        }
    }

    cout << nNegativos;
    return 0;
}
