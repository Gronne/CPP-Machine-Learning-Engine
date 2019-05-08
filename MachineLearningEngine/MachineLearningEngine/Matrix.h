#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix
{
public:
	Matrix(int=1, int=1);
	Matrix(const Matrix&);
	Matrix(const Matrix*);
	~Matrix();
	int getNumberOfRows() const;
	int getNumberOfColumns() const;
	int getSmallestSize() const;
	int getLargestSize() const;
	Matrix& getRow(int) const;
	Matrix& getRow(std::vector<int>) const;
	Matrix& getRow(const Matrix&) const;
	Matrix& getColumn(int) const;
	Matrix& getColumn(std::vector<int>) const;
	Matrix& getColumn(const Matrix&) const;
	double getEntry(int, int) const;
	void setRow(int, const Matrix&);
	void setColumn(int, const Matrix&);
	void setRow(int, std::vector<double>);
	void setColumn(int, std::vector<double>);
	void setMatrixSize(const Matrix&);
	void setMatrixSize(int, int);
	void setEntry(int, int, double);
	void setMatrix(const Matrix&);
	void deleteRow(int);
	void deleteRow(std::vector<int>);
	void deleteRow(const Matrix&);
	void deleteColumn(int);
	void deleteColumn(std::vector<int>);
	void deleteColumn(const Matrix&);
	Matrix& transpose();
	Matrix& transpose() const;
	Matrix& transpose(bool);
	void scale(double);
	std::string print(bool = 1) const;
	void appendMatrix(const Matrix&, bool = 0);
	Matrix& sort(int = 0, bool = 0, int = 0);
	Matrix& sort(int = 0, bool = 0, int = 0) const;

	const Matrix& operator=(const Matrix&);
	const Matrix& operator=(std::vector<double>);
	bool operator==(const Matrix&) const;
	bool operator<(const Matrix&) const;
	bool operator>(const Matrix&) const;
	bool operator<=(const Matrix&) const;
	bool operator>=(const Matrix&) const;
	bool operator!=(const Matrix&) const;
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
	//Matrix& operator ~();  //Inverte

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
	std::string matrixToString(std::vector<int>, int) const;
	std::string printLine(int) const;
	std::string printRow(int, std::vector<int>) const;
	std::string printEntry(int, int, std::vector<int>) const;
	bool unevenSpace(int, int, std::vector<int>) const;
	double getDiffWidth(int, int, std::vector<int>) const;
	std::vector<int> findMaxValueInEachColumn() const;
	std::string eraseZeros(std::string) const;
	Matrix& multiplication(const Matrix&) const;
	double vectorMultiplication(Matrix&, Matrix&) const;
	double decideMatrixSize(const Matrix&) const;
	void appendRight(const Matrix&, Matrix&);
	void appendUnder(const Matrix&, Matrix&);

	void transferEntries(const Matrix&);
	void transferEntriesBesideRow(Matrix&, int);
	void transferEntriesBesideCol(Matrix&, int);

	void deleteExceptions(const Matrix&, bool = 0);
	void appendExceptions(const Matrix&, bool);

	void sortHighLow(bool = 0, int = 0);
	void sortLowHigh(bool = 0, int = 0);
	bool bubbleSortOneIteration(bool, bool, int);
	double sortValue(Matrix&, int = 0);
	double sortValueSum(Matrix&);
	double sortValueMax(Matrix&);
	double sortValueMin(Matrix&);
	bool bubbleSortRow(int, bool, int);
	bool bubbleSortCol(int, bool, int);
	void shiftColumns(int, int);
	void shiftRows(int, int);

	int _rows = 0;
	int _columns = 0;
	bool _transposeFlag = false;
	double **_matrix;
};


#endif