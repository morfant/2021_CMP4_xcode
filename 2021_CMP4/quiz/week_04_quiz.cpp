//
//  week_04_quiz.cpp
//  2021_CMP4
//
//  Created by Gang il Lee on 2021/10/20.
//
#include "common_lib.h"
#include "week_04_quiz.hpp"

void run_quiz_04() {
//    int age;
//    string name;
//    string phone;
//    cout << "age? " ;
//    cin >> age;
//    cout << "name? " ;
//    cin >> name;
//    cout << "phone number? ";
//    cin >> phone;
//
//    cout << " ----------------------------------------" << "\n"
//    << "| age: " << age << "\t\t\t\t\t\t\t\t|\n"
//    << "| name: " << name << "\t\t\t\t\t\t\t\t|\n"
//    << "| phone: " << phone << "\t\t\t\t\t|\n"
//    << " ----------------------------------------" << endl;



    float height;
    float weight;
    float bmi;
    string bmiState;

    cout << "height? (cm) " << endl;
    cin >> height;
    height = height / 100;
    cout << "weight? (kg) " << endl;
    cin >> weight;
    bmi = weight / (height * height);
    if(bmi < 18.5){
        bmiState = "low";
    } else if(bmi < 23) {
        bmiState = "normal";
    } else if(bmi < 25) {
        bmiState = "high";
    } else if(bmi < 30) {
        bmiState = "pretty high";
    } else {
        bmiState = "very high";
    }
    cout << "Your BMI is " << bmi << " and it's " << bmiState << endl;
}


