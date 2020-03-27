// Copyright 2020 Isaev Ilya
#ifndef MODULES_TASK_2_ISAEV_FOX_ALG_FOX_ALG_H_
#define MODULES_TASK_2_ISAEV_FOX_ALG_FOX_ALG_H_

using Matrix = std::vector<std::vector<double>>;

inline bool isSquared(const Matrix& mat) {
    return mat.size() == mat[0].size();
}

inline bool doubleComparison(const double& a, const double& b) {
    return std::abs(a-b) <= std::numeric_limits<double>::epsilon()*std::max(std::abs(a), std::abs(b));
}

Matrix getRandomMatrix(const int& n);
Matrix naiveMultiplication(const Matrix& mat1, const Matrix& mat2);
Matrix blockMultiplication(const Matrix& mat1, const Matrix& mat2);
bool matrixComparison(const Matrix& mat1, const Matrix& mat2);

Matrix foxAlgParallel(const Matrix& mat1, const Matrix& mat2, const unsigned& n_threads);

#endif  // MODULES_TASK_2_ISAEV_FOX_ALG_FOX_ALG_H_
