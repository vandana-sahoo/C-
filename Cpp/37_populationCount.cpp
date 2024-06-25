#include <iostream>
#include <cmath>

int main() {
    int rewaPopulation = 12634;
    int satnaPopulation = 22634;
    double rewaGrowthRate = 0.07;
    double satnaGrowthRate = 0.06;
    int years = 0;

    while (rewaPopulation <= satnaPopulation) {
        rewaPopulation = std::round(rewaPopulation * (1 + rewaGrowthRate));
        satnaPopulation = std::round(satnaPopulation * (1 + satnaGrowthRate));
        years++;
    }

    std::cout << "It takes " << years << " years for Rewa's population to become higher than Satna's population." << std::endl;

    return 0;
}
