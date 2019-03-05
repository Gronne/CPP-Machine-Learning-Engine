#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix
{
public:
	Matrix(int=1, int=1);
	~Matrix();
	int getNumberOfRows() const;
	int getNumberOfColumns() const;
	Matrix& getRow(int) const;
	Matrix& getRows(std::vector<int>) const;
	Matrix& getColumn(int) const;
	Matrix& getColumns(std::vector<int>) const;
	double getEntry(int, int) const;
	void setRow(int, const Matrix *);
	void setColumn(int, const Matrix *);
	void setRow(int, std::vector<double>);
	void setColumn(int, std::vector<double>);
	void setMatrixSize(int, int);
	void setEntry(int, int, double);
	void setMatrix(const Matrix*);
	void deleteRow(int);
	void deleteColumn(int);
	void transpose();
	void scale(double);
	void print() const;
	void appendMatrix(const Matrix&, bool = 0);

	void operator=(const Matrix&);
	bool operator==(const Matrix&);
	bool operator!=(const Matrix&);
	void operator+=(const Matrix&);
	void operator+=(const double);
	void operator-=(const Matrix&);
	void operator-=(const double);
	void operator*=(const Matrix&);
	void operator*=(const double);
	Matrix& operator+(const Matrix&);
	Matrix& operator+(const double);
	Matrix& operator-(const Matrix&);
	Matrix& operator-(const double);
	Matrix& operator*(const double);
	Matrix& operator*(Matrix&) const;
	Matrix& operator/(const double);

private:
	void constructMatrix();
	void setRows(int);
	void setColumns(int);
	void resizeMatrix(int, int);
	void checkForInvalidRowOrColumn(int, int) const;
	void insertRow(Matrix *, int, int) const;
	void insertColumn(Matrix *, int, int) const;
	void constructRowMatrix(Matrix *, int) const;
	void constructColumnMatrix(Matrix *, int) const;
	void deleteMatrix();
	double getWidestNumberInRow(int) const;
	double numberWidth(double) const;
	void printMatrix(std::vector<int>, int) const;
	void printLine(int) const;
	void printRow(int, std::vector<int>) const;
	void printEntry(int, int, std::vector<int>) const;
	bool unevenSpace(int, int, std::vector<int>) const;
	double getDiffWidth(int, int, std::vector<int>) const;
	std::vector<int> findMaxValueInRow() const;
	std::string eraseZeros(std::string) const;
	Matrix& multiplication(const Matrix&) const;
	double vectorMultiplication(Matrix&, Matrix&) const;

	int _rows = 0;
	int _columns = 0;
	bool _transposeFlag = false;
	double **_matrix;
};


#endif