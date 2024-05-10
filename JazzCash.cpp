#include <iostream>
#include <string>


using namespace std;

class JazzCash
{
private:
    int CurrentBalance, challan, Bill;
    int bankType, amount, sendingOption;
    string number, Mnumber, Cnumber, cnumber, pen;
    int option, load, ope, loan, type, pin, package;
    int bill, education, comp, MbankType, Pin;
    int p1,pacakage;
    bool length;

public:
    JazzCash()
    {
        CurrentBalance = 10000;
        challan = 100;
        Bill = 100;
        Pin = 1111;
        p1=1000;
    }

    void sendMoney()
    {
        cout << "Where you want to send money: " << endl;
        cout << "1: To Bank\t2: To Mobile Account" << endl;
        cout << "3: To Rasat\t4: To CNIC" << endl;
        cin >> sendingOption;

        if (sendingOption == 1)
        {
            cout << "Which Bank: " << endl;
            cout << "1: Habib Bank Limited\t2: Allied Bank Limited" << endl;
            cout << "3: Mezan Bank Limited\t4: Bank AL Falah Limited" << endl;
            cin >> bankType;

            if (bankType >= 1 && bankType <= 4)
            {
                cout << "Enter The 17 Digit Bank number: " << endl;
                cin >> number;

                if (number.length() != 17 || !allDigits(number))
                {
                    cout << "Invalid Number!" << endl;
                    while (number.length() != 17 || !allDigits(number))
                    {
                        cout << "Enter The 17 Digit Bank number: " << endl;
                        cin >> number;
                    }
                    cout << "Enter your amount: ";
                    cin >> amount;

                    if (amount <= CurrentBalance)
                    {
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                    else
                    {
                        while (amount > CurrentBalance)
                        {
                            cout << "Low Balance!" << endl;
                            cout << "Enter your amount again: ";
                            cin >> amount;
                        }
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                }
                else
                {
                    cout << "Enter your amount: ";
                    cin >> amount;

                    if (amount <= CurrentBalance)
                    {
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                    if (amount > CurrentBalance)
                    {
                        while (amount > CurrentBalance)
                        {
                            cout << "Low Balance!" << endl;
                            cout << "Enter your amount again: ";
                            cin >> amount;
                        }
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                }
            }
            if (bankType < 1 || bankType > 4)
            {
                while (bankType < 1 || bankType > 4)
                {
                    cout << "Invalid Choice" << endl;
                    cout << "Which Bank: " << endl;
                    cout << "1: Habib Bank Limited\t2: Allied Bank Limited" << endl;
                    cout << "3: Mezan Bank Limited\t4: Bank AL Falah Limited" << endl;
                    cin >> bankType;
                }
                cout << "Enter The 17 Digit Bank number: " << endl;
                cin >> number;

                if (number.length() != 17 || !allDigits(number))
                {
                    cout << "Invalid Number!" << endl;
                    while (number.length() != 17 || !allDigits(number))
                    {
                        cout << "Enter The 17 Digit Bank number: " << endl;
                        cin >> number;
                    }
                    cout << "Enter your amount: ";
                    cin >> amount;

                    if (amount <= CurrentBalance)
                    {
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                    if (amount > CurrentBalance)
                    {
                        while (amount > CurrentBalance)
                        {
                            cout << "Low Balance!" << endl;
                            cout << "Enter your amount again: ";
                            cin >> amount;
                        }
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                }
                else
                {
                    cout << "Enter your amount: ";
                    cin >> amount;

                    if (amount <= CurrentBalance)
                    {
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                    if (amount > CurrentBalance)
                    {
                        while (amount > CurrentBalance)
                        {
                            cout << "Low Balance!" << endl;
                            cout << "Enter your amount again: ";
                            cin >> amount;
                        }
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                }
            }
        }
        else if (sendingOption == 2)
        {
            cout << "Which Bank: " << endl;
            cout << "1: JazzCash\t2: EasyPisa" << endl;
            cout << "3: Upisa" << endl;
            cin >> MbankType;

            if (MbankType >= 1 && MbankType <= 3)
            {
                cout << "Enter The 11 Digit Bank number: " << endl;
                cin >> Mnumber;

                if (Mnumber.length() != 11 || !allDigits(number))
                {
                    cout << "Invalid Number!" << endl;
                    while (Mnumber.length() != 11 || !allDigits(number))
                    {
                        cout << "Enter The 11 Digit Bank number: " << endl;
                        cin >> Mnumber;
                    }
                    cout << "Enter your amount: ";
                    cin >> amount;

                    if (amount <= CurrentBalance)
                    {
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                    if (amount > CurrentBalance)
                    {
                        while (amount > CurrentBalance)
                        {
                            cout << "Low Balance!" << endl;
                            cout << "Enter your amount again: ";
                            cin >> amount;
                        }
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                }
                else
                {
                    cout << "Enter your amount: ";
                    cin >> amount;

                    if (amount <= CurrentBalance)
                    {
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                    if (amount > CurrentBalance)
                    {
                        while (amount > CurrentBalance)
                        {
                            cout << "Low Balance!" << endl;
                            cout << "Enter your amount again: ";
                            cin >> amount;
                        }
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                }
            }
            if (MbankType < 1 || MbankType > 3)
            {
                while (MbankType < 1 || MbankType > 3)
                {
                    cout << "Invalid Choice" << endl;
                    cout << "Which Bank: " << endl;
                    cout << "1: JazzCash\t2: EasyPisa" << endl;
                    cout << "3: Upisa" << endl;
                    cin >> MbankType;
                }
                cout << "Enter The 11 Digit Bank number: " << endl;
                cin >> Mnumber;

                if (Mnumber.length() != 11 || !allDigits(number))
                {
                    cout << "Invalid Number!" << endl;
                    while (Mnumber.length() != 11 || !allDigits(number))
                    {
                        cout << "Enter The 11 Digit Bank number: " << endl;
                        cin >> Mnumber;
                    }
                    cout << "Enter your amount: ";
                    cin >> amount;

                    if (amount <= CurrentBalance)
                    {
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                    if (amount > CurrentBalance)
                    {
                        while (amount > CurrentBalance)
                        {
                            cout << "Low Balance!" << endl;
                            cout << "Enter your amount again: ";
                            cin >> amount;
                        }
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                }
                else
                {
                    cout << "Enter your amount: ";
                    cin >> amount;

                    if (amount <= CurrentBalance)
                    {
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                    if (amount > CurrentBalance)
                    {
                        while (amount > CurrentBalance)
                        {
                            cout << "Low Balance!" << endl;
                            cout << "Enter your amount again: ";
                            cin >> amount;
                        }
                        cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Transaction is cancelled!" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction Has Been done" << endl;
                            CurrentBalance -= amount;
                        }
                    }
                }
            }
        }
        else if (sendingOption == 3)
        {
            cout << "Enter The 11 Digit Rast Account Number: " << endl;
            cin >> Mnumber;

            if (Mnumber.length() != 11 || !allDigits(Mnumber))
            {
                while (Mnumber.length() != 11 || !allDigits(Mnumber))
                {
                    cout << "Invalid Number!" << endl;
                    cout << "Enter The 11 Digit Rast Account Number: " << endl;
                    cin >> Mnumber;
                }
                cout << "Enter your amount: ";
                cin >> amount;

                if (amount <= CurrentBalance)
                {
                    cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                    cin >> option;

                    if (option == 1)
                    {
                        cout << "Transaction is cancelled!" << endl;
                    }
                    else
                    {
                        cout << "Your Transaction Has Been done" << endl;
                        CurrentBalance -= amount;
                    }
                }
                if (amount > CurrentBalance)
                {
                    while (amount > CurrentBalance)
                    {
                        cout << "Low Balance!" << endl;
                        cout << "Enter your amount: ";
                        cin >> amount;
                    }
                    cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                    cin >> option;

                    if (option == 1)
                    {
                        cout << "Transaction is cancelled!" << endl;
                    }
                    else
                    {
                        cout << "Your Transaction Has Been done" << endl;
                        CurrentBalance -= amount;
                    }
                }
            }
            else
            {
                cout << "Enter your amount: ";
                cin >> amount;

                if (amount <= CurrentBalance)
                {
                    cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                    cin >> option;

                    if (option == 1)
                    {
                        cout << "Transaction is cancelled!" << endl;
                    }
                    else
                    {
                        cout << "Your Transaction Has Been done" << endl;
                        CurrentBalance -= amount;
                    }
                }
                if (amount > CurrentBalance)
                {
                    while (amount > CurrentBalance)
                    {
                        cout << "Low Balance!" << endl;
                        cout << "Enter your amount: ";
                        cin >> amount;
                    }
                    cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                    cin >> option;

                    if (option == 1)
                    {
                        cout << "Transaction is cancelled!" << endl;
                    }
                    else
                    {
                        cout << "Your Transaction Has Been done" << endl;
                        CurrentBalance -= amount;
                    }
                }
            }
        }
        else if (sendingOption == 4)
        {
            cout << "Enter The 13 Digit CNIC Number: " << endl;
            cin >> cnumber;

            if (cnumber.length() != 13 || !allDigits(cnumber))
            {
                cout << "Invalid Number!" << endl;
                while (cnumber.length() != 13 || !allDigits(cnumber))
                {
                    cout << "Enter The 13 Digit CNIC Number: " << endl;
                    cin >> cnumber;
                }
                cout << "Enter your amount: ";
                cin >> amount;

                if (amount <= CurrentBalance)
                {
                    cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                    cin >> option;

                    if (option == 1)
                    {
                        cout << "Transaction is cancelled!" << endl;
                    }
                    else
                    {
                        cout << "Your Transaction Has Been done" << endl;
                        CurrentBalance -= amount;
                    }
                }
                else if (amount > CurrentBalance)
                {
                    while (amount > CurrentBalance)
                    {
                        cout << "Low Balance!" << endl;
                        cout << "Enter your amount: ";
                        cin >> amount;
                    }
                    cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                    cin >> option;

                    if (option == 1)
                    {
                        cout << "Transaction is cancelled!" << endl;
                    }
                    else
                    {
                        cout << "Your Transaction Has Been done" << endl;
                        CurrentBalance -= amount;
                    }
                }
            }
            else
            {
                cout << "Enter your amount: ";
                cin >> amount;

                if (amount <= CurrentBalance)
                {
                    cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                    cin >> option;

                    if (option == 1)
                    {
                        cout << "Transaction is cancelled!" << endl;
                    }
                    else
                    {
                        cout << "Your Transaction Has Been done" << endl;
                        CurrentBalance -= amount;
                    }
                }
                else if (amount > CurrentBalance)
                {
                    while (amount > CurrentBalance)
                    {
                        cout << "Low Balance!" << endl;
                        cout << "Enter your amount: ";
                        cin >> amount;
                    }
                    cout << "Funds will transfer after 30min.\n if you want to cancel the transaction than enter 1: " << endl;
                    cin >> option;

                    if (option == 1)
                    {
                        cout << "Transaction is cancelled!" << endl;
                    }
                    else
                    {
                        cout << "Your Transaction Has Been done" << endl;
                        CurrentBalance -= amount;
                    }
                }
            }
        }
        else
        {
            cout << "Invalid Option!" << endl;
            sendMoney();
        }
    }
    void payBills()
    {
        cout << "Which Type of Bill you want to pay: " << endl;
        cout << "1: Electricity Bill" << endl;
        cout << "2: Gas Bill\t3: Water Bill" << endl;
        cin >> bill;

        if (bill == 1)
        {
            cout << "Which Company: " << endl;
            cout << "K Electric\t2: MEPCO " << endl;
            cin >> comp;

            if (comp >= 1 && comp <= 2)
            {
                cout << "Enter the Bill Number: ";
                cin >> Cnumber;

                if (Cnumber.length() != 10 || !allDigits(Cnumber))
                {
                    cout << "Invalid Number!" << endl;
                    while (Cnumber.length() != 10 || !allDigits(Cnumber))
                    {
                        cout << "Enter the Bill Number: ";
                        cin >> Cnumber;
                    }
                    cout << "Your Bill is Fetched! " << endl;

                    if (challan >= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
                else
                {
                    cout << "Your Bill is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
            }
            else if (comp < 1 || comp > 2)
            {

                while (comp < 1 || comp > 4)
                {
                    cout << "Invalid Choice!" << endl;
                    cout << "Which Company: " << endl;
                    cout << "K Electric\t2: MEPCO " << endl;
                    cin >> comp;
                }
                cout << "Enter the Bill Number: " << endl;
                cin >> Cnumber;
                if (Cnumber.length() != 10 || !allDigits(Cnumber))
                {
                    cout << "Invalid Number!" << endl;
                    while (Cnumber.length() != 10 || !allDigits(Cnumber))
                    {
                        cout << "Enter the Bill Number: ";
                        cin >> Cnumber;
                    }
                    cout << "Your Bill is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
                else
                {
                    cout << "Your Challan is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
            }
        }
        if (bill == 2)
        {
            cout << "Which Company: " << endl;
            cout << "1: SNGPL\t2: SSGC " << endl;
            cin >> comp;

            if (comp >= 1 && comp <= 2)
            {
                cout << "Enter the Bill Number: ";
                cin >> Cnumber;

                if (Cnumber.length() != 10 || !allDigits(Cnumber))
                {
                    cout << "Invalid Number!" << endl;
                    while (Cnumber.length() != 10 || !allDigits(Cnumber))
                    {
                        cout << "Enter the Bill Number: ";
                        cin >> Cnumber;
                    }
                    cout << "Your Bill is Fetched! " << endl;

                    if (challan >= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
                else
                {
                    cout << "Your Bill is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
            }
            else if (comp < 1 || comp > 2)
            {

                while (comp < 1 || comp > 4)
                {
                    cout << "Invalid Choice!" << endl;
                    cout << "Which Company: " << endl;
                    cout << "SNGPL\t2: SSGC " << endl;
                    cin >> comp;
                }
                cout << "Enter the Bill Number: " << endl;
                cin >> Cnumber;
                if (Cnumber.length() != 10 || !allDigits(Cnumber))
                {
                    cout << "Invalid Number!" << endl;
                    while (Cnumber.length() != 10 || !allDigits(Cnumber))
                    {
                        cout << "Enter the Bill Number: ";
                        cin >> Cnumber;
                    }
                    cout << "Your Bill is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
                else
                {
                    cout << "Your Challan is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
            }
        }
        if (bill == 3)
        {
            cout << "Which Company: " << endl;
            cout << "KWSB\t2: LWASA " << endl;
            cin >> comp;

            if (comp >= 1 && comp <= 2)
            {
                cout << "Enter the Bill Number: ";
                cin >> Cnumber;

                if (Cnumber.length() != 10 || !allDigits(Cnumber))
                {
                    cout << "Invalid Number!" << endl;
                    while (Cnumber.length() != 10 || !allDigits(Cnumber))
                    {
                        cout << "Enter the Bill Number: ";
                        cin >> Cnumber;
                    }
                    cout << "Your Bill is Fetched! " << endl;

                    if (challan >= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
                else
                {
                    cout << "Your Bill is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
            }
            else if (comp < 1 || comp > 2)
            {

                while (comp < 1 || comp > 4)
                {
                    cout << "Invalid Choice!" << endl;
                    cout << "Which Company: " << endl;
                    cout << "KWSB\t2: LWASA " << endl;
                    cin >> comp;
                }
                cout << "Enter the Bill Number: " << endl;
                cin >> Cnumber;
                if (Cnumber.length() != 10 || !allDigits(Cnumber))
                {
                    cout << "Invalid Number!" << endl;
                    while (Cnumber.length() != 10 || !allDigits(Cnumber))
                    {
                        cout << "Enter the Bill Number: ";
                        cin >> Cnumber;
                    }
                    cout << "Your Bill is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
                else
                {
                    cout << "Your Challan is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
            }
        }
        else
        {
        	cout<<"Invalid Option"<<endl;
        	payBills();
		}
    }
    void MobileLoad()
    {
        cout<<"Which type of sim you have: "<<endl;
        cout<<"1: Postpaid	2: Prepaid"<<endl;
        cin>>option;
        if(option==1 || option==2)
        {
        	cout<<"What you want to do"<<endl;
        	cout<<"1: Mobile Load	2: Mobile Pacakage"<<endl;
        	cin>>type;
        	if(type==1)
        	{
        		cout << "select your operator: " << endl;
            	cout << "1: Jazz\t2: Zong" << endl;
            	cout << "3: Telenor\t4: Ufone" << endl;
            	cin >> ope;
            	if(ope>=1 && ope<=4)
            	{
            		cout << "Enter Your 11 Digit Number: " << endl;
                	cin >> Mnumber;
                	if (Mnumber.length() != 11 || !allDigits(Mnumber))
                	{
                		while (Mnumber.length() != 11 || !allDigits(Mnumber))
                    	{
                        	cout << "Invalid Number!" << endl;
                        	cout << "Enter Your 11 Digit Number: " << endl;
                        	cin >> Mnumber;
                    	}
                    	cout<<"Enter the amount: "<<endl;
						cin>>amount;
						if(amount<=CurrentBalance)
						{
							cout<<"Enter your 4 Digit Pin: "<<endl;
							cin>>pin;
							if(pin==Pin)
							{
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
							}
							else //if(pin !=Pin)
							{
								while(pin !=Pin)
								{
									cout<<"Invalid Pin!"<<endl;
									cout<<"Enter your 4 Digit Pin: "<<endl;
									cin>>pin;
								}
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load=1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
								
							}
						}
						else //if(amount>CurrentBalance|| !allDigits(Mnumber))
						{
							while(amount>CurrentBalance)
							{
								cout<<"Low Balance!"<<endl;
								cout<<"Enter the amount: "<<endl;
								cin>>amount;
							}
							cout<<"Enter your 4 Digit Pin: "<<endl;
							cin>>pin;
							if(pin==Pin)
							{
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
							}
							else //if(pin !=Pin)
							{
								while(pin !=Pin)
								{
									cout<<"Invalid Pin!"<<endl;
									cout<<"Enter your 4 Digit Pin: "<<endl;
									cin>>pin;
								}
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
								
							}
						}
					}
					else
					{
						cout<<"Enter the amount: "<<endl;
						cin>>amount;
						if(amount<=CurrentBalance)
						{
							cout<<"Enter your 4 Digit Pin: "<<endl;
							cin>>pin;
							if(pin==Pin)
							{
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
							}
							else //if(pin !=Pin)
							{
								while(pin !=Pin)
								{
									cout<<"Invalid Pin!"<<endl;
									cout<<"Enter your 4 Digit Pin: "<<endl;
									cin>>pin;
								}
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
								
							}
						}
						else //if(amount>CurrentBalance)
						{
							while(amount>CurrentBalance)
							{
								cout<<"Low Balance!"<<endl;
								cout<<"Enter the amount: "<<endl;
								cin>>amount;
							}
							cout<<"Enter your 4 Digit Pin: "<<endl;
							cin>>pin;
							if(pin==Pin)
							{
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
							}
							else //if(pin !=Pin)
							{
								while(pin !=Pin)
								{
									cout<<"Invalid Pin!"<<endl;
									cout<<"Enter your 4 Digit Pin: "<<endl;
									cin>>pin;
								}
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
								
							}
						}
					}
				}
				else //if(ope<1 || ope>4)
				{
					while(ope<1 || ope>4)
					{
						cout<<"Invalid Option!"<<endl;
						cout << "select your operator: " << endl;
            			cout << "1: Jazz\t2: Zong" << endl;
            			cout << "3: Telenor\t4: Ufone" << endl;
            			cin >> ope;
					}
					cout << "Enter Your 11 Digit Number: " << endl;
                	cin >> Mnumber;
                	if (Mnumber.length() != 11 || !allDigits(Mnumber))
                	{
                		while (Mnumber.length() != 11 || !allDigits(Mnumber))
                    	{
                        	cout << "Invalid Number!" << endl;
                        	cout << "Enter Your 11 Digit Number: " << endl;
                        	cin >> Mnumber;
                    	}
                    	cout<<"Enter the amount: "<<endl;
						cin>>amount;
						if(amount<=CurrentBalance)
						{
							cout<<"Enter your 4 Digit Pin: "<<endl;
							cin>>pin;
							if(pin==Pin)
							{
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
							}
							else //if(pin !=Pin)
							{
								while(pin !=Pin)
								{
									cout<<"Invalid Pin!"<<endl;
									cout<<"Enter your 4 Digit Pin: "<<endl;
									cin>>pin;
								}
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
								
							}
						}
						else //if(amount>CurrentBalance)
						{
							while(amount>CurrentBalance)
							{
								cout<<"Low Balance!"<<endl;
								cout<<"Enter the amount: "<<endl;
								cin>>amount;
							}
							cout<<"Enter your 4 Digit Pin: "<<endl;
							cin>>pin;
							if(pin==Pin)
							{
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
							}
							else if(pin !=Pin)
							{
								while(pin !=Pin)
								{
									cout<<"Invalid Pin!"<<endl;
									cout<<"Enter your 4 Digit Pin: "<<endl;
									cin>>pin;
								}
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
								
							}
						}
					}
					else
					{
						cout<<"Enter the amount: "<<endl;
						cin>>amount;
						if(amount<=CurrentBalance)
						{
							cout<<"Enter your 4 Digit Pin: "<<endl;
							cin>>pin;
							if(pin==Pin)
							{
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
							}
							else //if(pin !=Pin)
							{
								while(pin !=Pin)
								{
									cout<<"Invalid Pin!"<<endl;
									cout<<"Enter your 4 Digit Pin: "<<endl;
									cin>>pin;
								}
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
								
							}
						}
						else //if(amount>CurrentBalance)
						{
							while(amount>CurrentBalance)
							{
								cout<<"Low Balance!"<<endl;
								cout<<"Enter the amount: "<<endl;
								cin>>amount;
							}
							cout<<"Enter your 4 Digit Pin: "<<endl;
							cin>>pin;
							if(pin==Pin)
							{
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
							}
							else if(pin !=Pin)
							{
								while(pin !=Pin)
								{
									cout<<"Invalid Pin!"<<endl;
									cout<<"Enter your 4 Digit Pin: "<<endl;
									cin>>pin;
								}
								cout<<"Your Transction is in progress if you want to cancel press 1: "<<endl;
								cin>>load;
								if(load==1)
								{
									cout<<"Transction is cancelled!"<<endl;
								}
								else
								{
									cout<<"Transction is Done!"<<endl;
								}
								
							}
						}
					}
				}
			}
			if(type==2)
			{
				cout << "select your operator: " << endl;
            	cout << "1: Jazz\t2: Zong" << endl;
            	cout << "3: Telenor\t4: Ufone" << endl;
            	cin >> ope;
            	if(ope>=1 && ope<=4)
            	{
            		cout << "Enter Your 11 Digit Number: " << endl;
                	cin >> Mnumber;	
                	if (Mnumber.length() != 11 || !allDigits(Mnumber))
                	{
                		while(Mnumber.length() != 11 || !allDigits(Mnumber))
                		{
                			cout<<"Invalid Number!"<<endl;
                			cout << "Enter Your 11 Digit Number: " << endl;
                			cin >> Mnumber;
						}
						cout << "Enter Your 11 Digit Number: " << endl;
                		cin >> Mnumber;
                		cout<<"Select your package: "<<endl;
                		cout<<"1: Monthly Package 15GB"<<endl;
                		cin>>pacakage;
                		if(package==1)
                		{
                			if(p1<=CurrentBalance)
                			{
                				cout<<"Enter your 4 Digit pin: "<<endl;
                				cin>>pin;
                				if(pin==Pin)
                				{
                					cout<<"Your Payment is in progress . if you want to cancel press 1"<<endl;
                					cin>>option;
                					if(option ==1)
                					{
                						cout<<"Payment is canceled"<<endl;
									}
									else
									{
										cout<<"Payment is Done"<<endl;
									}
								}
							}
						}
						else if(package !=1)
						{
							while(package !=1)
							{
								cout<<"Invalid package!"<<endl;
								cout<<"Select your package: "<<endl;
                				cout<<"1: Monthly Package 15GB"<<endl;
                				cin>>pacakage;
							}
							if(p1<=CurrentBalance)
                			{
                				cout<<"Enter your 4 Digit pin: "<<endl;
                				cin>>pin;
                				if(pin==Pin)
                				{
                					cout<<"Your Payment is in progress . if you want to cancel press 1"<<endl;
                					cin>>option;
                					if(option ==1)
                					{
                						cout<<"Payment is canceled"<<endl;
									}
									else
									{
										cout<<"Payment is Done"<<endl;
									}
								}
							}
						}
					}
					else
					{
						cout << "Enter Your 11 Digit Number: " << endl;
                		cin >> Mnumber;
                		cout<<"Select your package: "<<endl;
                		cout<<"1: Monthly Package 15GB"<<endl;
                		cin>>pacakage;
                		if(package==1)
                		{
                			if(p1<=CurrentBalance)
                			{
                				cout<<"Enter your 4 Digit pin: "<<endl;
                				cin>>pin;
                				if(pin==Pin)
                				{
                					cout<<"Your Payment is in progress . if you want to cancel press 1"<<endl;
                					cin>>option;
                					if(option ==1)
                					{
                						cout<<"Payment is canceled"<<endl;
									}
									else
									{
										cout<<"Payment is Done"<<endl;
									}
								}
							}
						}
						else if(package !=1)
						{
							while(package !=1)
							{
								cout<<"Invalid package!"<<endl;
								cout<<"Select your package: "<<endl;
                				cout<<"1: Monthly Package 15GB"<<endl;
                				cin>>pacakage;
							}
							if(p1<=CurrentBalance)
                			{
                				cout<<"Enter your 4 Digit pin: "<<endl;
                				cin>>pin;
                				if(pin==Pin)
                				{
                					cout<<"Your Payment is in progress . if you want to cancel press 1"<<endl;
                					cin>>option;
                					if(option ==1)
                					{
                						cout<<"Payment is canceled"<<endl;
									}
									else
									{
										cout<<"Payment is Done"<<endl;
									}
								}
							}
						}
					}
				}
				else if(ope<1 || ope>4)
				{
					while(ope<1 || ope>4)
					{
						cout<<"Invalid Choice!"<<endl;
						cout << "select your operator: " << endl;
            			cout << "1: Jazz\t2: Zong" << endl;
            			cout << "3: Telenor\t4: Ufone" << endl;
            			cin >> ope;
					}
					cout << "Enter Your 11 Digit Number: " << endl;
                	cin >> Mnumber;	
                	if (Mnumber.length() != 11 || !allDigits(Mnumber))
                	{
                		while(Mnumber.length() != 11 || !allDigits(Mnumber))
                		{
                			cout<<"Invalid Number!"<<endl;
                			cout << "Enter Your 11 Digit Number: " << endl;
                			cin >> Mnumber;
						}
						cout << "Enter Your 11 Digit Number: " << endl;
                		cin >> Mnumber;
                		cout<<"Select your package: "<<endl;
                		cout<<"1: Monthly Package 15GB"<<endl;
                		cin>>pacakage;
                		if(package==1)
                		{
                			if(p1<=CurrentBalance)
                			{
                				cout<<"Enter your 4 Digit pin: "<<endl;
                				cin>>pin;
                				if(pin==Pin)
                				{
                					cout<<"Your Payment is in progress . if you want to cancel press 1"<<endl;
                					cin>>option;
                					if(option ==1)
                					{
                						cout<<"Payment is canceled"<<endl;
									}
									else
									{
										cout<<"Payment is Done"<<endl;
									}
								}
							}
						}
						else if(package !=1)
						{
							while(package !=1)
							{
								cout<<"Invalid package!"<<endl;
								cout<<"Select your package: "<<endl;
                				cout<<"1: Monthly Package 15GB"<<endl;
                				cin>>pacakage;
							}
							if(p1<=CurrentBalance)
                			{
                				cout<<"Enter your 4 Digit pin: "<<endl;
                				cin>>pin;
                				if(pin==Pin)
                				{
                					cout<<"Your Payment is in progress . if you want to cancel press 1"<<endl;
                					cin>>option;
                					if(option ==1)
                					{
                						cout<<"Payment is canceled"<<endl;
									}
									else
									{
										cout<<"Payment is Done"<<endl;
									}
								}
							}
						}
					}
					else
					{
						cout << "Enter Your 11 Digit Number: " << endl;
                		cin >> Mnumber;
                		cout<<"Select your package: "<<endl;
                		cout<<"1: Monthly Package 15GB"<<endl;
                		cin>>pacakage;
                		if(package==1)
                		{
                			if(p1<=CurrentBalance)
                			{
                				cout<<"Enter your 4 Digit pin: "<<endl;
                				cin>>pin;
                				if(pin==Pin)
                				{
                					cout<<"Your Payment is in progress . if you want to cancel press 1"<<endl;
                					cin>>option;
                					if(option ==1)
                					{
                						cout<<"Payment is canceled"<<endl;
									}
									else
									{
										cout<<"Payment is Done"<<endl;
									}
								}
							}
						}
						else if(package !=1)
						{
							while(package !=1)
							{
								cout<<"Invalid package!"<<endl;
								cout<<"Select your package: "<<endl;
                				cout<<"1: Monthly Package 15GB"<<endl;
                				cin>>pacakage;
							}
							if(p1<=CurrentBalance)
                			{
                				cout<<"Enter your 4 Digit pin: "<<endl;
                				cin>>pin;
                				if(pin==Pin)
                				{
                					cout<<"Your Payment is in progress . if you want to cancel press 1"<<endl;
                					cin>>option;
                					if(option ==1)
                					{
                						cout<<"Payment is canceled"<<endl;
									}
									else
									{
										cout<<"Payment is Done"<<endl;
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			cout<<"Invalid Choice!"<<endl;
			MobileLoad();
		}
    }

    void ReadyCash()
    {
        cout << "Would You like to take a loan: " << endl;
        cout << "1: Yes\t2: No" << endl;
        cin >> loan;

        if (loan == 1 || loan == 2)
        {
            cout << "Enter the amount less than or equal to 1000: " << endl;
            cin >> amount;

            if (amount <= 1000)
            {
                cout << "You have taken the loan successfully" << endl;
                CurrentBalance += amount;
            }
            else
            {
            	while(amount>1000)
                {
                	cout<<"Invalid Choice!"<<endl;
					cout << "Enter the amount less than or equal to 1000: " << endl;
            		cin >> amount;	
				}
				cout << "You have taken the loan successfully" << endl;
                CurrentBalance += amount;
            }
        }
        else
        {
            while(loan>2)
            {
            	cout << "Invalid Option!" << endl;
            	cout << "Would You like to take a loan: " << endl;
            	cout << "1: Yes\t2: No" << endl;
            	cin >> loan;
			}
			cout << "Enter the amount less than or equal to 1000: " << endl;
            cin >> amount;

            if (amount <= 1000)
            {
                cout << "You have taken the loan successfully" << endl;
                CurrentBalance += amount;
            }
            else
            {
            	while(amount>1000)
                {
                	cout<<"Invalid Choice!"<<endl;
					cout << "Enter the amount less than or equal to 1000: " << endl;
            		cin >> amount;	
				}
				cout << "You have taken the loan successfully" << endl;
                CurrentBalance += amount;
            }
        }
        
    }
	void MyAccount()
	{
		cout<<"What you want to do "<<endl;
		cout<<"1: Check Balance		2: Change Pin"<<endl;
		cin>>type;
		if(type==1)
		{
			cout<<"Your Current Balance is: "<<CurrentBalance<<endl;;	
		}
		else if(type==2)
		{
			cout<<"Enter your 4 Digit New Pin: "<<endl;
			cin>>pen;
			if (pen.length() != 4 || !allDigits(number))
			{
				while(pen.length() != 4 || !allDigits(number))
				{
					cout<<"Invalid Format"<<endl;
					
				}
				cout<<"Enter your 4 Digit New Pin: "<<endl;
				cin>>pen;
//				int newPin = (stoi(pen));
//				Pin=newPin;
				cout<<"Your new pin is registerd"<<endl;
			}
			else
			{
//				Pin=pen;
				cout<<"Your new pin is registerd"<<endl;
			}
		}
		else
		{
			cout<<"Invalid Choice!"<<endl;
			MyAccount();
		}
		
	}
	
	void Payments()
	{
		cout<<"1: Educational Payments: "<<endl;
		cin>>bill;
		if (bill == 1)
        {
            cout << "Which School: " << endl;
            cout << "1: EFA School\t2: Allied School " << endl;
            cout << "3: Islamia University Bahawalpur\t4: Punjab College Bahawalpur" << endl;
            cin >> education;

            if (education >= 1 && education <= 4)
            {
                cout << "Enter the Challan Number: ";
                cin >> Cnumber;

                if (Cnumber.length() != 10 || !allDigits(Cnumber))
                {
                    cout << "Invalid Number!" << endl;
                    while (Cnumber.length() != 10 || !allDigits(Cnumber))
                    {
                        cout << "Enter the Challan Number: ";
                        cin >> Cnumber;
                    }
                    cout << "Your Challan is Fetched! " << endl;

                    if (challan >= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
                else
                {
                    cout << "Your Challan is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
            }
            else if (education < 1 || education > 4)
            {

                while (education < 1 || education > 4)
                {
                    cout << "Invalid Choice!" << endl;
                    cout << "Which School: " << endl;
                    cout << "1: EFA School\t2: Allied School " << endl;
                    cout << "3: Islamia University Bahawalpur\t4: Punjab College Bahawalpur" << endl;
                    cin >> education;
                }
                cout << "Enter the Challan Number: " << endl;
                cin >> Cnumber;
                if (Cnumber.length() != 10 || !allDigits(Cnumber))
                {
                    cout << "Invalid Number!" << endl;
                    while (Cnumber.length() != 10 || !allDigits(Cnumber))
                    {
                        cout << "Enter the Challan Number: ";
                        cin >> Cnumber;
                    }
                    cout << "Your Challan is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
                else
                {
                    cout << "Your Challan is Fetched! " << endl;

                    if (challan <= CurrentBalance)
                    {
                        cout << "Transaction will be done after 30 min. if you want to cancel then enter 1 " << endl;
                        cin >> option;

                        if (option == 1)
                        {
                            cout << "Your Transaction has been cancelled" << endl;
                        }
                        else
                        {
                            cout << "Your Transaction has been done" << endl;
                            CurrentBalance -= challan;
                        }
                    }
                    else
                    {
                        cout << "Low Balance!" << endl;
                    }
                }
            }
        }
		else
		{
			cout<<"Invalid Choice!"<<endl;
			Payments();
		}
			
	}
	void ContactUs()
	{
		cout<<"If you want to contact than call at 4444"<<endl;
	}
    bool allDigits(const string &str)
    {
        return (str.begin(), str.end(), ::isdigit);
    }
};
bool allDigits(const string &str)
{
    return (str.begin(), str.end(), ::isdigit);
}

int main()
{
	int option;
	JazzCash a;
    while(true)
    {
    	cout<<"What you want to do: "<<endl;
		cout<<"1: Send Money	\t2: PayBills"<<endl;
		cout<<"3: ReadyCash		4: Mobile Load & Bundles"<<endl;
		cout<<"5: Payments		6: My Account"<<endl;
		cout<<"7: Contact US	\t0: To Cancel"<<endl;
		cin>>option;
		if(option==1)
		{
			a.sendMoney();
		}
		else if(option==2)
		{
			a.payBills();
		}
		else if(option==3)
		{
			a.ReadyCash();
		}
		else if(option==4)
		{
			a.MobileLoad();
		}
		else if(option==5)
		{
			a.Payments();
		}
		else if(option==6)
		{
			a.MyAccount();
		}
		else if(option==7)
		{
			a.ContactUs();
		}
		else if(option==0)
		{
			break;
		}
		else
		{
		
		while(option>7)
		{
			cout<<"Invalid Choice!"<<endl;
			cout<<"What you want to do: "<<endl;
			cout<<"1: Send Money	2: PayBills"<<endl;
			cout<<"3: ReadyCash		4: Mobile Load & Bundles"<<endl;
			cout<<"5: Payments		6: My Account"<<endl;
			cout<<"7: Contact US"<<endl;
			cin>>option;
		}
		if(option==1)
		{
			a.sendMoney();
		}
		else if(option==2)
		{
			a.payBills();
		}
		else if(option==3)
		{
			a.ReadyCash();
		}
		else if(option==4)
		{
			a.MobileLoad();
		}
		else if(option==5)
		{
			a.Payments();
		}
		else if(option==6)
		{
			a.MyAccount();
		}
		else if(option==7)
		{
			a.ContactUs();
		}
		if(option==0)
		{
			break;
		}
	}
	}
    return 0;
}

