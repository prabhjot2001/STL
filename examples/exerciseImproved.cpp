#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Matrix
{
private:
    size_t mRows, mCols;
    vector<vector<T>> matrix;

public:
    Matrix(const size_t row, const size_t col)
    {
        mRows = row;
        mCols = col;
        matrix.resize(mRows, vector<T>(mCols));
    }

    vector<T> &operator[](const size_t row_number)
    {
        return matrix[row_number];
    }
};
int main()
{
    Matrix<int> mat(3, 4);
    mat[1][1] = 20;
    cout << mat[1][1] << endl;
}