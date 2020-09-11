#include <iostream>

using namespace std;

int main()
{
    float num_1, num_2, result;
    int operation;
    bool flag = 1;
    cout << "welcome to the ultimate calculator" << endl;
    while (flag) {
        cout << "what would you like yo do? (1 = +,2 = -,3 = *,4 = /,5 = exit): ";
        cin >> operation;
        if (operation == 5) {
            cout << "shutting the programm\n";
            flag = 0;
            break;
        }
        cout << "write a num: ";
        cin >> num_1;
        cout << "\nwrite next num: ";
        cin >> num_2;
        
        switch (operation)
        {
        case 1:
            result = num_1 + num_2;
            cout << "result is " << result << "\n";
            break;
        case 2:
            result = num_1 - num_2;
            cout << "result is " << result << "\n";
            break;
        case 3:
            result = num_1 * num_2;
            cout << "result is " << result << "\n";
            break;
        case 4:
            result = num_1 / num_2;
            cout << "result is " << result << "\n";
            break;
        case 5:
            cout << "shutting the programm\n";
            flag = 0;
            break;
        default:
            cout << "wrong input, check the number\nof opertion you want to do\n";
            break;
        }
    }
    system("pause");
    return 0;
}

