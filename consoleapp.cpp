#include <iostream>
#include <vector>
using namespace std;
/*This program was written by includeRubiks on GitHub. Should a world record mersenne prime be found using this program,
includeRubiks will take 50% of the credit.*/
vector <int> factors;
void findFactors(int number) {
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0){
            factors.push_back(i);
        }
    }
}

int main() {

    int number = 1; //The number being tested
    int pe = 1; //Declare the previous exponent variable (a way of speeding things up when doing powers of 2)
    while(true) {
        cout << "Testing: " << number << "\n Factors: ";
        findFactors(number);
        for(int num : factors){
            cout << num << " ";
        }
        cout << "\n";
        if(factors.size() == 2 || factors.size() == 1){
            cout << "The number we tested is a prime! \n";
        }
        factors.clear();
        number++;
    }
}
