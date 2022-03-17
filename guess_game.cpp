#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    while (1)
    {
        int guess_number,random_number;
        cout << "Enter your guess number between 1 to 5 :";
        cin >> guess_number;
        random_number = 1 + rand()%5;
        if(random_number == guess_number)
        {
            cout << "You have won."<<endl<<endl;
        }
        else
        {
            cout << "You have lost. Try again."<<endl;
            cout << "Random number was : "<<random_number<<endl<<endl;
        }
    }

    return 0;
}
