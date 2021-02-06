#include <cmath>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include <thread>
namespace SiriusFM{
    class DiffusionCEV
    {
        private:
            double const const_mu;
            double const const_sigma;
            double const beta;
        public:
            double mu(double St, double t){
                return const_mu*St;
            }
            double sigma(double St, double t){
                if(beta<0){return 0;}
                if(const_sigma<=0){return 0;}
                if(beta<0){return 0;}
                return const_sigma*pow(St, beta);
            }
        DifffusionCEV(double const_m, double const_s, double const_beta)
        :const_mu(const_m)
         const_sigma(const_s)
         beta(const_beta)
        if(const_sigma<=0 || beta < 0){throw std::invalid_argument('Bad arguments');}
    }
}