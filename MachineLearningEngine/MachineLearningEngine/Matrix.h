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
	Matrix& getRow(int);
	Matrix& getRows(std::vector<int>);
	Matrix& getColumn(int);
	Matrix& getColumns(std::vector<int>);
	double getEntry(int, int) const;
	void setMatrixSize(int, int);
	void setEntry(int, int, double);
	void setMatrix(const Matrix*);
	void transpose();

	void operator=(const Matrix &obj) {
		this->setMatrix(&obj);
	}

private:
	void constructMatrix();
	void setRows(int);
	void setColumns(int);
	void resizeMatrix(int, int);
	void checkForInvalidRowOrColumn(int, int) const;
	void insertRow(Matrix *, int, int);
	void insertColumn(Matrix *, int, int);
	void deleteMatrix();

	int _rows = 0;
	int _columns = 0;
	bool _transposeFlag = false;
	double **_matrix;
};


#endif