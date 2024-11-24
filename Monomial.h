#ifndef MONOMIAL_H
#define MONOMIAL_H

#include <string>
#include <sstream>

namespace MathExpressions {
    class Monomial1D {
        float coefficient;
        int exponents[1];

    public:
        Monomial1D(float coeff = 0.0f, const int exps[1] = nullptr);
        Monomial1D(const Monomial1D& other);
        void differentiate(Monomial1D& result, const int mask[1]) const;
        std::string toString() const;
    };
}

#endif
