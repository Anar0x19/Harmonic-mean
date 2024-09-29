#include <iostream>
#include <vector>

namespace MusicAnalysis {

    double harmonicMean(const std::vector<double>& frequencies) {
        double sum = 0.0;
        for (double f : frequencies) {
            sum += 1.0 / f;
        }
        return frequencies.size() / sum;
    }

    void printMeanFrequency(const std::vector<double>& frequencies) {
        double meanFrequency = harmonicMean(frequencies);
        std::cout << "Средняя гармоническая частота аккорда: " << meanFrequency << " Hz" << std::endl;
    }

}

int main() {
    std::vector<double> frequencies = {440, 523.25, 659.25};  // A4, C5, E5 
    MusicAnalysis::printMeanFrequency(frequencies);
    return 0;
}
