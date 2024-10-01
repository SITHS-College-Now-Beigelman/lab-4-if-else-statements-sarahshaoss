//Sarah Shao
//10/01/2024
//Lab 4

#include <iostream>
#include <string>

using namespace std; //shortcut

int main()
{
    string name;  // declares name as a string
    double grams; // declares grams as a double
    int loop;
    int i;

    cout << "How many fruits do you want to input?\n> ";
    cin >> loop;

    // stores data in grams

    for (i = 1; i <= loop; i++)
    {
        cout << "\nWhat is the name of the fruit?\n> ";
        cin >> name;
    // stores data in name
        cout << "Number of grams of sugar that one cup of the fruit:\n> ";
        cin >> grams;
    // stores data in grams
        if (grams < 10) //if the grams of sugar is less than 10
            {cout << name << " LOW SUGAR FRUIT";}
            // value is true and prints it out
        else if (grams >= 10 && grams <= 14) // if grams of sugar is greater than and equal to 10 and less than and equal to 14
            {cout << name << " MEDIUM SUGAR FRUIT"; }
            // value is true and prints it out
                else if (grams > 14) // if grams of sugar is greater than 14
                {cout <<name << " HIGH SUGAR FRUIT";} 
                // value is true and prints it out
    }
    return 0; // returns code
    /*
    How many fruits do you want to input?
    > 5

    What is the name of the fruit?
    > grapes
    Number of grams of sugar that one cup of the fruit:
    > 23.37
    grapes HIGH SUGAR FRUIT
    What is the name of the fruit?
    > avocado
    Number of grams of sugar that one cup of the fruit:
    > .99
    avocado LOW SUGAR FRUIT
    What is the name of the fruit?
    > strawberries
    Number of grams of sugar that one cup of the fruit:
    > 7
    strawberries LOW SUGAR FRUIT
    What is the name of the fruit?
    > grapefruit
    Number of grams of sugar that one cup of the fruit:
    > 10.6
    grapefruit MEDIUM SUGAR FRUIT
    What is the name of the fruit?
    > orange
    Number of grams of sugar that one cup of the fruit:
    > 14
    orange MEDIUM SUGAR FRUIT */
}

