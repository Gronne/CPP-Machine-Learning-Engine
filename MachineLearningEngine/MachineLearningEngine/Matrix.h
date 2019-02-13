#pragma once
class Matrix
{
public:
	Matrix(int=1, int=1);
	~Matrix();
	int getNumberOfRows();
	int getNumberOfColumns();
	double getEntry(int, int);
	void setMatrixSize(int, int);
	void setEntry(int, int, double);
	void setMatrix(Matrix);
	void transpose();

private:
	void constructMatrix();
	void setRows(int);
	void setColumns(int);
	void resizeMatrix(int, int);
	void checkForInvalidRowOrColumn(int, int);
	bool deleteMatrix();

	int _rows = 0;
	int _columns = 0;
	bool _transposeFlag = false;
	double **_matrix;
};

