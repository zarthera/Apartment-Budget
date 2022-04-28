#include "Header.h"
#include <iostream>
#include <random>
#include <cstdlib>

using namespace std;

void MoneyForApartment() {
    //Random Number Generator
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(500, 660); //define range

    //Bills
    int phone = 250;
    int renters_insurance = 13;
    int car_insurance = 441;
    int car_payment = 400;
    int groceries = 500;
    int bills = phone + renters_insurance + car_insurance + car_payment + groceries;
    int dad_money = 150;

    //Income
    int mom_income = 1242;
    int income;

    int weeks;
    int week1;
    int week2;
    int week3;
    int week4;

    //Sorts through 4 weeks of random weekly incomes
    for (weeks = 0; weeks <= 4; weeks++) {
        switch (weeks) {
        case 1:
            week1 = distr(gen);
            std::cout << "Week 1: " << week1 << "\n";
            break;
        case 2:
            week2 = distr(gen);
            std::cout << "Week 2: " << week2 << "\n";
            break;
        case 3:
            week3 = distr(gen);
            std::cout << "Week 3: " << week3 << "\n";
            break;
        case 4:
            week4 = distr(gen);
            std::cout << "Week 4: " << week4 << "\n";
            break;
        }

    }

    std::cout << "Mom's Money: " << mom_income << "\n";
    std::cout << "Dad's Money: " << dad_money << "\n";
    income = week1 + week2 + week3 + week4 + mom_income + dad_money;
    std::cout << "\n";
    std::cout << "Total Monthly Income: " << income << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Bills: \n" << "Car Insurance: " << car_insurance << "\n" << "Car Payment: " << car_payment << "\n" << "Phone: " << phone << "\n" << "Renter's Insurance: "
        << renters_insurance << "\n" << "Groceries: " << groceries << "\n";
    std::cout << "\n";
    std::cout << "Monthly Bills: " << bills << "\n";
    std::cout << "\n";
    std::cout << "\n";

    int remaining_money = income - bills + 400;
    std::cout << "Apartment Money: " << remaining_money;





    std::cout << "\n"; std::cout << "\n";  std::cout << "\n";  std::cout << "\n";
    std::cout << "\n";  std::cout << "\n";  std::cout << "\n";  std::cout << "\n";
    std::cout << "\n";  std::cout << "\n";  std::cout << "\n";  std::cout << "\n";
    std::cout << "\n";  std::cout << "\n";  std::cout << "\n";  std::cout << "\n";
    std::cout << "\n";  std::cout << "\n";  std::cout << "\n";  std::cout << "\n";
}