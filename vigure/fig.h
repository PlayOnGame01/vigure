#pragma once

namespace figNamespace {
    class Fig {
    protected:

        double m_value1;
        double m_value2;

    public:

        void SetDimension(const double value1);
        void SetDimension(const double value1, const double value2);
        virtual void ShowArea() const;
    };
}