#include <iostream>

using namespace std;

int main()
{     // 10965053
     // Find the average of the sum of prime numbers between 1 to any given number

       int num = 0;
       int i =0;
       int prime =0;
       int sum = 0;

      double coun = 0;


    cout << "Enter number ";

    cin >> prime;

    for(num = 2; num <= prime; num++)

        {

        for(i = 2; i <= (num / 2); i++)

            {

            if(num % i == 0) {
                i = num;
                break;
            }
        }


        if(i != num){

            sum += num;

            coun ++;


            cout << " prime numbers are " <<num<< endl;
        }

    }
     cout << "The average of the number is "<< sum/coun <<endl;

    cout << "Sum of the number is " << prime << endl << " : " << sum;;

    return 0;
}

