#include <iostream>
using namespace std;

void kevin(int);
void find_the_letter_number(char);

int main()
{
    int a,b ;char find_it;
    const int C = 100;
    char grade = 65;
    int val = 3000;
    kevin(3);
    cout << "enter two numbers\n";
    cin >> a >> b;
    cout << "enter a letter you want to find the number\n";
    cin >> find_it;
    cout << "i am " << val << " years old " << " with " << a << " dogs and " << b << " cats " << endl;
    cout << C << grade <<endl;
    find_the_letter_number(find_it);
    cout << "enter a number you want to calculate\n";
    return 0;
}

void kevin(int n)
{
    cout << "you call " << n << endl;
}

void find_the_letter_number(char x)
{
    cout << (int)x;     //或者输入int(x)
}