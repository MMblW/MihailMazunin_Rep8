#include <iostream>
#include <string>
using namespace std;
struct Car
{
    string Mark;
    int Year;
    int Price;
    string Col;
};
void Delete(Car A[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (A[i].Year < n)
        {
            A[i] = A[i+1];
        }
    }
}
void Print(Car A[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0 && A[j].Mark == A[j+1].Mark; j--)
        {
            Car tmp = A[j-1];
            A[j-1] = A[j];
            A[j] = tmp;
            size -= 2;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << A[i].Mark << " " << A[i].Year << " " << A[i].Price << " " << A[i].Col << endl;
    }
}
int main()
{
    int size = 4;
    int n;
    Car A[4];
    A[0] = {"Toyota Supra", 1999, 50, "Green"};
    A[1] = {"DeLorean", 2015, 30, "Gray"};
    A[2] = {"Panzerkampfwagen VIII Maus", 1945, 200, "Black"};
    A[3] = {"ExampleCar", 2024, 40, "Red"};
    Print(A, size);
    cin >> n;
    Delete(A, size, n);
    Print(A, size);
}








