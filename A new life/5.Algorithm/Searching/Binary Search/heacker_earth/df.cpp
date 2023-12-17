int main()
{

    // Number of values given

    int n = 5;

    float x[] = { 40, 50, 60, 70, 80 };



    // y[][] is used for difference table

    // with y[][0] used for input

    float y[n][n];

    y[0][0] = 31;

    y[1][0] = 73;

    y[2][0] = 124;

    y[3][0] = 159;

    y[4][0] = 190;


    // Calculating the forward difference

    // table

    for (int i = 1; i < n; i++) {

        for (int j = 0; j < n - i; j++)

            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];

    }


    // Displaying the forward difference table

    for (int i = 0; i < n; i++) {

        cout << setw(4) << x[i]

             << "\t";

        for (int j = 0; j < n - i; j++)

            cout << setw(4) << y[i][j]

                 << "\t";

        cout << endl;

    }