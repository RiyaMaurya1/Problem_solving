#include <iostream>
using namespace std;

int main()
{

    int starting_range = 0;
    int ending_range = 0;

    cin >> starting_range >> ending_range;
    for (int i = starting_range; i <= ending_range; i++)
    {
        int number = i;
        if (number >= 2)
        {
            // cout << number << " ";

            if (number == 2 || number == 3)
            {
                cout << number << " ";
            }
            else if (number % 2 == 0)
            {
                continue;
            }
            else
            {
                bool not_prime = false;
                for (int j = 3; j < number; j += 2)
                {

                    if (number > 3 && number % j == 0)
                    {
                        not_prime = true;
                        break;
                    }
                }
                if (not_prime == false)
                {
                    cout << number << " ";
                }
            }
        }
    }

    return 0;
}
