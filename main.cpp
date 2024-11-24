#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    /* változó neve rossul volt írva*/
    std::cout << '1-100 ertekek duplazasa';
    /*hiányzó ; */
    for (int i = 0; i < N_ELEMENTS; i++)
    /*hiányzó ciklus feltétel és növelés*/

    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:";
        /*hiányzó ; */
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;
    /*inicializálás hiánya*/
    for (int i = 0, i < N_ELEMENTS, i++)
    /*; helyett ,*/
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << "Ez egy szöveg más githubjáról commitolva!" << std:endl;
    return 0;
}
