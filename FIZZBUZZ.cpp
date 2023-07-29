#include <iostream>
using namespace std;

int main()
{
    //cycle through numbers from 1 to 100
    for(int i = 1; i <=100; i++)
    {
        //if the number is divisible by both 3 and 5
        //print fizzbuzz
        if(i % 15 == 0)
        {
            cout << i <<"FIZZBUZZ\n";
        }
        //if number is divisible by 3 and not 5
        //print fizz
        else if(i % 3 == 0)
        {
            cout << i <<"FIZZ\n";
        }
        //if the number is divisible by 5 and not 3
        //print buzz
        else if(i % 5 == 0)
        {
            cout << i <<"BUZZ\n";
        }
        //if it is not divisible by any of them i.e 3 or 5
        //just print the number as it is
        else{
            cout << i <<"\n";
        }
    }
}
