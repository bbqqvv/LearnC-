#include <iostream>
#include <math.h>

using namespace std;

void ex1() {
    cout << "Hello Friend!" << endl;
    cout << "My name is: Nguyen Van A" << endl;
    cout << "MSSV is: D12CQCN01-N" << endl;
    cout << "My phone: 0966467356" << endl;
}

void ex2() {
    double a, b, c;
    cout << "Enter intensity value: ";
    cin >> a;
    cout << "Enter the resistance value: ";
    cin >> b;
    c = a * b;
    cout << "Value is: " << c << endl;
}

void ex3() {
    double a, b, c;
    double average;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    average = (a + b + c) / 3;
    cout << "Average value is: " << average << endl;
}

void ex4() {
    double math, literature, physic, chemistry, biology, english, average;
    int coefficientMath = 3;
    int coefficientLiterature = 2;
    int coefficientPhysic = 2;
    int coefficientEnglish = 2;
    int coefficientChemistry = 1;
    int coefficientBiology = 1;

    int totalCoefficient = coefficientMath + coefficientLiterature + coefficientPhysic + coefficientEnglish + coefficientChemistry + coefficientBiology;

    cout << "Enter math scores: ";
    cin >> math;
    cout << "Enter literature score: ";
    cin >> literature;
    cout << "Enter physic score: ";
    cin >> physic;
    cout << "Enter chemistry score: ";
    cin >> chemistry;
    cout << "Enter biology score: ";
    cin >> biology;
    cout << "Enter english score: ";
    cin >> english;

    average = (math * coefficientMath + literature * coefficientLiterature + physic * coefficientPhysic + chemistry * coefficientChemistry + biology * coefficientBiology + english * coefficientEnglish) / totalCoefficient;

    cout << endl;
    cout << "Average of Student is: " << average << endl;
}

void ex5() {
    double a,b;

    cout << "Enter first number: "; cin >> a;
    cout << "Enter second number: "; cin >> b;
    double sum = a+b;
    double difference  = a-b;
    double product = a*b;
    double quotient = a/b;
    double average = (a+b)/2;

    cout <<"Sum is: "<<sum<<endl;
    cout <<"Difference is: "<<difference<<endl;
    cout <<"Product is: "<<product<<endl;
    cout <<"Quotilent is: "<<quotient<<endl;
    cout <<"Average is: "<<average<<endl;
}

void ex6() {
    double r,s,p;
    const double pi = 3.14;
    cout << "-----------------a-------------------------"<<endl;
    cout <<"Enter Radius: "; cin >> r;
    s = pi*r*r;
    p = 2*pi*r;
    cout <<"Acreage is: "<<s<<endl;
    cout <<"Perimeter is: "<<p<<endl;
    cout << "------------------b------------------------"<<endl;
    cout << "Enter Acreage: "; cin >> s;
    r = sqrt(s/pi);
    cout << "Perimeter is: "<<r<<endl;
}

void ex7() {

}


void ex8() {

}
