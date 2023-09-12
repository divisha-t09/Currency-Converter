# Currency-Converter
This C++ program allows you to convert between different currencies, including Rupees, Dollars, Euros, and Won. You can input an amount in one currency and specify the target currency for conversion.

## Features:-
Convert between Rupees (Rs), Dollars ($), Euros (€), and Won (KRW).
Supports conversion in both directions (e.g., from Rupees to Dollars and from Dollars to Rupees).
Provides accurate currency conversion rates.
How to Use
Clone this repository to your local machine or download the currency_converter.cpp file.

Compile the code using a C++ compiler. For example, you can use the g++ compiler as follows:

bash
Copy code
g++ currency_converter.cpp -o currency_converter
Run the program:

bash
Copy code
./currency_converter
Follow the on-screen prompts to perform currency conversion:

Select the currency you want to convert from (Rupees, Dollars, Euros, or Won).
Select the currency you want to convert to.
Enter the amount you wish to convert.
The program will display the converted amount in the selected currency.

You can perform multiple conversions as needed.

If you enter an invalid currency or make a typo, the program will inform you of the error.

Currency Conversion Rates
The program uses the following currency conversion rates for accuracy:

1 Rupee (Rs) = 0.013 Dollars ($)
1 Rupee (Rs) = 15.58 Won (KRW)
1 Rupee (Rs) = 0.012 Euros (€)
1 Dollar ($) = 75.61 Rupees (Rs)
1 Dollar ($) = 1178.93 Won (KRW)
1 Dollar ($) = 0.89 Euros (€)
1 Won (KRW) = 0.00085 Dollars ($)
1 Won (KRW) = 0.064 Rupees (Rs)
1 Won (KRW) = 0.00075 Euros (€)
1 Euro (€) = 1.13 Dollars ($)
1 Euro (€) = 1330.43 Won (KRW)
1 Euro (€) = 85.37 Rupees (Rs)
Note
This program provides a basic demonstration of currency conversion and does not cover real-time currency exchange rates. You can update the conversion rates in the code to match current market rates if needed.

Ensure you enter the currency names correctly to avoid errors. The program is case-sensitive.
