#include <iostream>

double posx[6];
double posy[6];
double tarx[3];
double tary[3];

void GetPos()
{
    for(int i = 0, k = 0; i < 3; i++)
    {
        std::cout << "Line " << i + 1 << ': ';
        std::cin >> posx[k] >> posy[k++]
                 >> posx[k] >> posy[k++];
    }
}

int main()
{
    GetPos();
    Calculate();
    PrintPos();

    return 0;
}
