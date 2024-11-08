/**
 * @file temperature_analysis.cpp
 * @brief Temperature data analysis example demonstrating basic C++ data types and variables
 * @author Cristian Leo
 * @date 2024/11/08
 * 
 * This program analyzes a week's worth of temperature data to calculate:
 * - Total temperature
 * - Average temperature
 * - Maximum temperature
 * - Minimum temperature

 * Run the file with `./temperature_analysis` in the terminal
 */

#include <iostream>
#include <iomanip> // For output formatting

int main() {
    // Constants
    const int NUM_TEMPERATURES = 7;  // Number of temperature readings (one week)
    
    // Data storage
    double temperatures[NUM_TEMPERATURES] = {
        23.5, // Monday
        19.8, // Tuesday
        22.1, // Wednesday
        20.0, // Thursday
        21.7, // Friday
        23.0, // Saturday
        18.5  // Sunday
    };
    
    // Variables for calculations
    double totalTemperature = 0.0;
    double averageTemperature = 0.0;
    double maxTemperature = temperatures[0];  // Initialize with first temperature
    double minTemperature = temperatures[0];  // Initialize with first temperature

    // Calculate statistics
    for (int i = 0; i < NUM_TEMPERATURES; ++i) {
        // Accumulate total
        totalTemperature += temperatures[i];
        
        // Find maximum temperature
        if (temperatures[i] > maxTemperature) {
            maxTemperature = temperatures[i];
        }
        
        // Find minimum temperature
        if (temperatures[i] < minTemperature) {
            minTemperature = temperatures[i];
        }
    }
    
    // Calculate average
    averageTemperature = totalTemperature / NUM_TEMPERATURES;

    // Output results with formatted precision
    std::cout << "Temperature Statistics for the Week:\n";
    std::cout << "----------------------------------------\n";
    std::cout << std::fixed << std::setprecision(2);  // Set decimal precision to 2
    std::cout << "Total Temperature: " << totalTemperature << " degrees Celsius\n";
    std::cout << "Average Temperature: " << averageTemperature << " degrees Celsius\n";
    std::cout << "Maximum Temperature: " << maxTemperature << " degrees Celsius\n";
    std::cout << "Minimum Temperature: " << minTemperature << " degrees Celsius\n";
    std::cout << "----------------------------------------\n";

    return 0;
} 