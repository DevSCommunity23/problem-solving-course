#include <iostream>

using namespace std;

int main()
{
    /*
        what is if statement?


        boolen => true or false

        true => any number other than 0
        false => 0

        if( boolean experssion)
        {
            // code
        }

        if( some condtion) {

            if (another condition) {
                if (another condition) {

                } else {

                }
            } else if()

        } else if()
    */

    // int Age;
    // cin >> Age;

    // if (Age >= 18)
    // {
    //     cout << "Age is greater than 18" << endl;

    //     if (Age >= 100)
    //     {
    //         cout << "Age is greater than 100" << endl;
    //     }
    //     else
    //     {
    //         cout << "Age is less than 100" << endl;
    //     }
    // }
    // else
    // {
    //     cout << "Age is less than 18" << endl;
    // }

    // if (Age >= 18 and Age >= 100)
    // {
    //     cout << "Age is greater than 18" << endl;
    //     cout << "Age is greater than 100" << endl;
    // }
    // // else if (Age >= 18 and Age < 100)
    // // {

    // //     cout << "Age is greater than 18" << endl;
    // // }
    // // else
    // // {
    // //     cout << "Age is less than 18" << endl;
    // // }

    // switch (Age)

    // int Age;

    // cin >> Age;

    // switch (Age)
    // {
    // case 18:
    //     cout << "Age is 18" << endl;
    //     // break;
    // case 20:
    //     cout << "Age is 20" << endl;
    //     // break;

    // default:
    //     cout << "Age is not 18 or 20" << endl;
    //     // break;
    // }

    // Loop => means to repeat something
    // For Loop , while loop, do while loop
    // int counter = 1;
    // while (counter) // 1 < 10 => true, 2 < 10? true , 3 < 10? true, 10 <= 10? true , 11 <= 10? false
    // {
    //     // code while run while the expression is true
    //     // cout << "The value of counter is: " << counter << endl;
    //     // counter++;

    //     // if() ,

    //     int value = 43;
    //     value += counter;

    //     cout << "The value of value is: " << value << endl;
    // }
    // // when infinite loop hapeens? when the condition is always true
    // cout << "Code after loop" << endl;

    // bool isExit = 0;   // fa;se
    // while (not isExit) // not exit not false => true , isExtit = 1, true, not true => false
    // {
    //     int Age;
    //     cout << "Enter your age: ";
    //     cin >> Age;

    //     if (Age >= 18)
    //     {
    //         cout << "You are an adult" << endl;
    //     }
    //     else
    //     {
    //         cout << "You are to young" << endl;
    //     }

    //     char choice;
    //     cout << "Do you want to exit? (y/n): ";
    //     cin >> choice;

    //     if (choice == 'y')
    //     {
    //         isExit = 1;
    //     }
    // }

    // for loop
    // for (variale initlztion; condition; update)

    // for (int i = 1; i <= 10; i++)
    // {
    //     int value;
    //     cout << "Enter a number: ";
    //     cin >> value;

    //     cout << value * 2 << endl;
    // }

    // bool isExit = 0;
    // while (not isExit)
    // {
    //     int numberOfIterations;

    //     cout << "Enter the number of iterations: ";
    //     cin >> numberOfIterations;

    //     for (int i = 0; i < numberOfIterations; i++)
    //     {
    //         int value;
    //         cout << "Enter a number: ";
    //         cin >> value;

    //         cout << value * 2 << endl;
    //     }

    //     cout << "Do you want to exit? (1/0): ";
    //     cin >> isExit;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     // another loop
    //     for (int j = 0; j < 10; j++)
    //     {
    //         cout << "i: " << i << " j: " << j << endl;
    //         // cout << "i+j: " << i + j << endl;
    //     }
    // }

    // do while loop => while loop => works atleast once

    // bool condtion = 0;
    // do
    // {
    //     cout << "This will run atleast once" << endl;
    // } while (condtion);

    /*
        1. user will enter a number
        2. print the sum of numbers from 1 to the number

        user enters 10

        sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10

        print sum
    */

    // int number;
    // cout << "Enter a number: ";
    // cin >> number;

    // cout << (number + 1) * number / 2 << endl;
    // // sum of numbers from 1 to that number , 1 + 2 + 3 + 4 ............ number
    // // 1+2+3+4+5 => 15
    // // int sum = 0;

    // // for (int i = 0; i <= number; i++)
    // // {
    // //     sum += i;
    // // }

    // cout << sum << endl;

    // break and continue key words in c++ and all programming languages

    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i == 5)
    //     {
    //         // break;
    //         continue;
    //         cout << "This will not run" << endl;
    //     }
    //     cout << "This will not work for i = 5" << endl;
    //     cout << i << endl;
    // }

    // cout << "Code after loop" << endl;

    return 0;
}