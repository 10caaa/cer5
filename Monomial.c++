#include "Monomial.h"

namespace MathExpressions {
    Monomial1D::Monomial1D(float coeff, const int exps[1]) : coefficient(coeff) {
        exponents[0] = exps ? exps[0] : 0;
    }

    Monomial1D::Monomial1D(const Monomial1D& other) : coefficient(other.coefficient) {
        exponents[0] = other.exponents[0];
    }

    void Monomial1D::differentiate(Monomial1D& result, const int mask[1]) const {
        result.coefficient = mask[0] == 1 ? coefficient * exponents[0] : 0.0f;
        result.exponents[0] = mask[0] == 1 && exponents[0] > 0 ? exponents[0] - 1 : 0;
    }

    std::string Monomial1D::toString() const {
        std::ostringstream os;
        os << coefficient << "x^" << exponents[0];
        return os.str();
    }
}
