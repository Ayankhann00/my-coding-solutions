#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Input the matrix
void inputMatrix(int &a, int &b, int &c, int &d, int arr1[MAX_SIZE][MAX_SIZE], int arr2[MAX_SIZE][MAX_SIZE])
{
    // a=row of 1st matrix,b=cols of 1st matrix,c=rows of 2nd matrix,d=cols of 2nd matrix.
    cout << "Input the size of the matrix 1:" << endl;
    cin >> a >> b;
    cout << "Input the elements of the matrix 1:" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Input the size of the matrix 2:" << endl;
    cin >> c >> d;
    cout << "Input the elements of the matrix 2:" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> arr2[i][j];
        }
    }
}

// Function to Display the square matrix
void displayMatrix(int rows, int cols, int arr[100][100])
{
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to add two matrices
void addMatrices(int rows, int cols, int arr1[100][100], int arr2[100][100], int result[100][100])
{
    cout << "Sum of Matrices:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int arr1[100][100], int rows2, int cols2, int arr2[100][100], int result[100][100])
{
    if (cols1 != rows2)
    {
        cout << "Matrices cannot be multiplied. Number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return;
    }

    cout << "Product of Matrices:" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to find the transpose of a matrix
void transposeMatrix(int rows, int cols, int arr[100][100], int result[100][100])
{
    cout << "Transpose of Matrix:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            result[i][j] = arr[j][i];
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arr1[MAX_SIZE][MAX_SIZE];
    int arr2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    int row1, row2, col1, col2;

    inputMatrix(row1, col1, row2, col2, arr1, arr2);

    cout << "Matrix 1:" << endl;
    displayMatrix(row1, col1, arr1);

    cout << "Matrix 2:" << endl;
    displayMatrix(row2, col2, arr2);

    if (col1 == row2)
    {
        // Multiply matrices only if the number of columns in the first matrix is equal to the number of rows in the second matrix
        multiplyMatrices(row1, col1, arr1, row2, col2, arr2, result);
    }
    else
    {
        cout << "Matrices cannot be multiplied. Dimensions do not match." << endl;
    }

    // Find the transpose of Matrix 1
    transposeMatrix(row1, col1, arr1, result);

    return 0;
}
