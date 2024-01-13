#include <iostream>
using namespace std;
main()
{
    // variable declaration
    char main_menu_select;
    string user_id, password;
    string new_user_id, new_password;
    char login_select;
    double deposit;
    double withdraw;
    double balance;

    cout << endl
         << "             Hi! Welcome to Abhinav Joshi Banking Service.             " << endl
         << endl;
    cout << "Please select one of the options from the menu below" << endl
         << endl;
    do
    {
        // main menu code
        cout << "################# MAIN MENU ################" << endl
             << endl;
        cout << "l -> Login" << endl;
        cout << "c -> Create Account" << endl;
        cout << "q -> Quit" << endl
             << endl;
        cout << "> ";
        cin >> main_menu_select;
        cout << endl;

        switch (main_menu_select)
        {
        case 'l': // login portal

            cout << "Username: ";
            cin >> user_id;
            cout << "Password: ";
            cin >> password;
            cout << endl;

            if (new_user_id == user_id && new_password == password)
            {
                cout << "You have logged in successfully!" << endl
                     << endl;

                do
                { // after login code
                    cout << endl
                         << "What would you like to do:" << endl
                         << endl;
                    cout << "d -> Deposit Money" << endl;
                    cout << "w -> Withdraw Money" << endl;
                    cout << "r -> Request Balance" << endl;
                    cout << "m -> Main Menu" << endl
                         << endl;
                    cout << "> ";
                    cin >> login_select;
                    cout << endl;

                    switch (login_select)
                    {
                    case 'd': // deposit money
                        cout << "Enter the amout you want to deposit: Rs";
                        cin >> deposit;
                        cout << "Total Balance: Rs" << balance + deposit << endl;
                        break;

                    case 'w': // withdraw money
                        cout << "Enter the amount you want to withdraw: Rs";
                        cin >> withdraw;
                        if (withdraw > balance + deposit)
                        {
                            cout << "Insuffient funds!" << endl;
                            cout << "Total Balance: Rs" << balance + deposit << endl;
                        }
                        else
                        {
                            cout << "Remaining Balance: Rs" << balance + deposit - withdraw << endl;
                        }
                        break;

                    case 'r': // request balance
                        cout << "Current Balance: Rs" << balance + deposit - withdraw << endl;
                        break;

                    case 'm': // going back to main menu
                        cout << "Thank You for using our banking services." << endl
                             << endl;
                        break;

                    default: // in case of a wrong option entered
                        cout << "Invalid option! Please try again. ";
                        break;
                    }

                } while (login_select != 'm'); // condition to stop the secondary do-while loop
            }

            else
            {
                cout << "Login credentials are incorrect!" << endl
                     << endl;
            }
            break;

        case 'c': // account creating portal
            cout << "Username: ";
            cin >> new_user_id;
            cout << "Password: ";
            cin >> new_password;
            cout << endl;
            cout << "Your account has been successfully created." << endl
                 << endl;
            break;

        case 'q': // to logout
            cout << "             Session END!       " << endl;
            cout << "Thank you for using Abhinav Joshi banking services." << endl;
            break;

        default:
            cout << " That is an invalid option. Please enter correct option! " << endl;
            break;
        }
    } while (main_menu_select != 'q'); // condition to stop the main do-while loop

    return 0;
}
