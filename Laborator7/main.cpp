#pragma once


#include<stdio.h>
#include<iostream>
#include "VectorTemp.h"

using namespace std;

float operator"" _Kelvin(unsigned long long int x) {
    
    return x - 237.5;
}

float operator"" _Fahrenheit(unsigned long long int x) {
    return (x - 32)/1.8;
}
int main()
{ 
    //Problema 1
    float a = 300_Kelvin;

    float b = 120_Fahrenheit;
    cout << a << endl << b << endl;
   

    VectorTemp<float> v;

    v.push(13.2);
    v.push(a);
    v.push(8);
    v.push(9);
    v.Print();
    v.push(6);
    v.push(3);

    v.push(39);
    v.Print();
    v.insert(25, 2);
    v.Print();
    v.remove(5);
    v.Print();
    
    return 0;
}

