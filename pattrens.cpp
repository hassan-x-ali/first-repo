#include<iostream>
using namespace std;

int main()
{
    //Print square pattern of numbers
    int n, sum = 0;
    cout << "Enter number of rows in pattern: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) //outer loop for rows
    {
        for (int j = 1; j <= n; j++) //inner loop for columns (what to print in each row)
        
        {
            cout << j << " ";
        }
        cout << endl;
    }

    //print square pattern of counting numbers
    int number, addition = 0;
    cout << "Enter a number of rows for the pattern: " << endl;
    cin >> number;
    for (int i = 0; i < number; i++) //outer loop for rows
    {
        for (int j = 0; j < number ; j++) //inner loop for columns (what to print in each row)
        {
            cout << addition << " ";
            addition++ ;
        }
        cout << endl;

    }

    //print triangle pattern of asterisks
    cout << "Enter a number of rows for the triangle pattern: " << endl;
    cin >> number;
    for (int i = 1; i <= number; i++) //outer loop for rows
    {
        for (int j = 1; j <= i; j++) //inner loop for columns (what to print in each row)
        {
            cout << "$" << " ";
        }
        cout << endl;
    }

    //print triangle pattern of numbers
    cout << "Enter a number of rows for the triangle pattern: " << endl;
    cin >> number;
    for (int i = 1; i <= number; i++) //outer loop for rows
    {
        for (int j = 1; j <= i; j++) //inner loop for columns (what to print in each row)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    //print triangle pattern of alphabets
    cout << "Enter a number of rows for the triangle pattern: " << endl;
    cin >> number;
    char alphabet = 'A';
    for (int i = 1; i <= number; i++) //outer loop for rows
    {
        for (int j = 1; j <= i; j++) //inner loop for columns (what to print in each row)
        {
            cout << alphabet << " ";
        }
        alphabet++;
        cout << endl;
    }

    //other patterns can be added here following the same structure
    int x;
    cout << "Enter a number of rows for the pattern: " << endl;
    cin >> x;
    for (int i = 1; i <= x; i++) //outer loop for rows
    {
        for (int j = 1; j <= i; j++) //inner loop for columns (what to print in each row)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    int y;
    cout << "Enter a number of rows for the pattern: " << endl;
    cin >> y;
    for (int i = 0; i <= y; i++) //outer loop for rows
    {
        for (int j = i+1; j >= 1; j--) //inner loop for columns (what to print in each row)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    int z, no = 0;
    cout << "Enter a number of rows for the pattern: " << endl;
    cin >> z;
    for (int i = 1; i <= z; i++) //outer loop for rows
    {
        for (int j = 1; j <= i; j++) //inner loop for columns (what to print in each row)
        {
            cout << no << " ";
            no++;
        }
        cout << endl;
    }

    int a, b = 1;
    cout << "Enter a number of rows for the pattern: " << endl;
    cin >> a;
    for (int i = a; i >= 1; i--) //outer loop for rows
    {
        for (int j = 1; j <= i; j++) //inner loop for columns (what to print in each row)
        {
            cout << b << " ";
        }
        b++;
        cout << endl;
    }   

    //pyramid pattern of numbers
    int rows;
    cout << "Enter the number of rows for the pyramid pattern: " << endl;
    cin >> rows;
    for (int i = 1; i <= rows; i++) //outer loop for rows
    {
        for (int j = 1; j <= rows - i; j++) //inner loop for spaces
        {
            cout << " ";
        }   
        for (int k = 1; k <= (2 * i - 1); k++) //inner loop for numbers
        {
            cout << i;
        }
        cout << endl;
    }

    //pyramid pattern of nubers with balance
    int r;
    cout << "Enter the number of rows for the pyramid pattern: " << endl;
    cin >> r;
    for (int i = 1; i <= r; i++) //outer loop for rows
    {
        for (int j = 1; j <= r - i - 1; j++) //inner loop for spaces
        {
            cout << " ";
        }

        for (int k = 1; k <= i + 1; k++) //inner loop for numbers
        {
            cout << k;
        }

        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }

    //Hollow diamond pattern
    cout << "Enter the number of rows for the pyramid pattern: " << endl;
    cin >> r;

    for (int i = 1; i <= r; i++) // outer loop for rows
    {
        for (int j = 1; j <= r - i; j++) // spaces
        {
            cout << " ";
        }

        for (int k = 1; k <= i + 1; k++) // ascending numbers
        {
            cout << k;
        }

        for (int l = i; l >= 1; l--) // descending numbers
        {
            cout << l;
        }
        cout << endl;
    }

    cout << endl;

    // Hollow diamond pattern
    int d;
    cout << "Enter the number of rows for the hollow diamond pattern (half-height): " << endl;
    cin >> d;

    // top half (including middle row)
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d - i; j++) // leading spaces
        {
            cout << " ";
        }

        cout << "*"; // left star

        if (i != 1) // rows other than the tip need a right star
        {
            for (int j = 1; j <= 2 * i - 3; j++) // gap between stars
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // bottom half
    for (int i = d - 1; i >= 1; i--)
    {
        for (int j = 1; j <= d - i; j++) // leading spaces
        {
            cout << " ";
        }

        cout << "*"; // left star

        if (i != 1) // rows other than the tip need a right star
        {
            for (int j = 1; j <= 2 * i - 3; j++) // gap between stars
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}