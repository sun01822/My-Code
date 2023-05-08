#include <bits/stdc++.h>
#include<math.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip;
    tip = meal_cost * ((double)tip_percent) / 100;

    double tax = meal_cost * ((double)tax_percent) / 100;

    double total  = meal_cost + tip + tax;

    cout << round(total) << endl;

}

int main()
{
    double meal_cost;
    cin >> meal_cost;


    int tip_percent;
    cin >> tip_percent;


    int tax_percent;
    cin >> tax_percent;

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
