// url = https://leetcode.com/problems/convert-the-temperature

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin,fahrenheit;
        kelvin = celsius + 273.15;
        fahrenheit = celsius * 1.80 + 32.00;
        return {kelvin,fahrenheit};

    }
};
