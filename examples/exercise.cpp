#include <iostream>
#include <vector>
using namespace std;

template <typename T = int>
class Matrix
{
private:
    size_t mRows, mCols;
    vector<vector<T> *> matrix;

public:
    Matrix(const size_t row, const size_t col)
    {
        mRows = row;
        mCols = col;
        matrix.reserve(mRows);
        for (int i = 0; i < mRows; i++)
        {
            matrix.push_back(new vector<T>(mCols));
        }
    }
    // function, operator [] overloaded
    vector<T>& operator[](const size_t row_number)
    {
        return *(matrix[row_number]);
    }
};
int main()
{

    Matrix<int> m(3, 4);
    m[1][1] = 10;

    cout << m[1][1] << endl;
}