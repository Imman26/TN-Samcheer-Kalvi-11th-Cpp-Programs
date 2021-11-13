#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char str[50];
    cout << "Enter a string : ";
    fgets(str);
    cout << "You enterd : ";
    puts(str);
    return 0;
}