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
	Matrix& getRows(const Matrix&) const;
	Matrix& getColumn(int) const;
	Matrix& getColumns(std::vector<int>) const;
	Matrix& getColumns(const Matrix&) const;
	double getEntry(int, int) const;
	void setRow(int, const Matrix&);
	void setColumn(int, const Matrix&);
	void setRow(int, std::vector<double>);
	void setColumn(int, std::vector<double>);
	void setMatrixSize(int, int);
	void setEntry(int, int, double);
	void setMatrix(const Matrix*);
	void deleteRow(int);
	void deleteColumn(int);
	void transpose();
	void scale(double);
	std::string print(bool = 1) const;
	void appendMatrix(const Matrix&, bool = 0);

	const Matrix& operator=(const Matrix&);
	const Matrix& operator=(std::vector<double>);
	bool operator==(const Matrix&);
	bool operator<(const Matrix&);
	bool operator>(const Matrix&);
	bool operator<=(const Matrix&);
	bool operator>=(const Matrix&);
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
	Matrix& operator*(const Matrix&) const;
	Matrix& operator/(const double);

	friend std::ostream& operator<<(std::ostream&, const Matrix&);

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
	std::string printMatrix(std::vector<int>, int) const;
	std::string printLine(int) const;
	std::string printRow(int, std::vector<int>) const;
	std::string printEntry(int, int, std::vector<int>) const;
	bool unevenSpace(int, int, std::vector<int>) const;
	double getDiffWidth(int, int, std::vector<int>) const;
	std::vector<int> findMaxValueInRow() const;
	std::string eraseZeros(std::string) const;
	Matrix& multiplication(const Matrix&) const;
	double vectorMultiplication(Matrix&, Matrix&) const;
	double decideMatrixSize(const Matrix&) const;

	int _rows = 0;
	int _columns = 0;
	bool _transposeFlag = false;
	double **_matrix;
};


#endif