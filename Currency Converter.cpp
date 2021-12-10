#include<iostream>
using namespace std;

int main()
{
	float rupees,dollars, euros, won;
	string curr;
	string curr1;
	double amt;
	double t_amt;
	
	cout<<"The currencies are: Rupees, Dollars, Euros, Won. \n"<<endl;
	
	cout<<"Which currency would you like to convert: "<<endl;

    cin >> curr;

    cout << "What currency would you like to convert to: \n";

    cin >> curr1;

    cout << "How much amount would you like to convert: \n";

    cin >> amt;
    
        if (curr == "rupees"){

        if (curr1 == "dollars"){

            t_amt = amt * 0.013;

            cout << amt << "Rs. is equal to " << t_amt << " $\n";

        }else if (curr1 == "won"){

            t_amt = amt * 15.58;

            cout << amt << "Rs. is equal to " << t_amt << " KRW\n";

        }else if (curr1 == "euros"){

            t_amt = amt * 0.012;

            cout << t_amt << "Rs. is equal to " << t_amt << " €\n";

        }

    }else if (curr == "dollars"){
        
        if (curr1 == "rupees"){

            t_amt = amt * 75.61;

            cout << amt << "$ is equal to " << t_amt << " Rs.\n";

        }else if (curr1 == "won"){

            t_amt = amt * 1178.93;

            cout << amt << "$ is equal to " << t_amt << " KRW\n";

        }else if (curr1 == "euros"){

            t_amt = amt * 0.89;

            cout << amt << "$ is equal to " << t_amt << " €\n";

        }

    }else if (curr == "won"){

            if (curr1 == "dollars"){

                t_amt = amt * 0.00085;

                cout << amt << "KRW is equal to " << t_amt << " $\n";

            }else if (curr1 == "rupees"){

                t_amt = amt * 0.064;

                cout << amt << "KRW is equal to " << t_amt << " Rs.\n";

            }else if (curr1 == "euros"){

                t_amt = amt * 0.00075;

                cout << amt << "KRW is equal to " << t_amt << " €\n";

            }

    }else if (curr == "euros"){

        if (curr1 == "dollars"){

            t_amt = amt * 1.13;

            cout << amt << "€ is equal to " << t_amt << " $\n";

        }else if (curr1 == "won"){

            t_amt = amt * 1330.43;

            cout << amt << "€ is equal to " << t_amt << " KRW\n";

        }else if (curr1 == "rupees"){

            t_amt = amt * 85.37;

            cout << amt << "€ is equal to " << t_amt << " Rs.\n";

        }

    }else{

        cout << "Invalid entry. \n(ps: check spelling!)\n";

    }

}

