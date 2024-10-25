# Definite Integration Calculator

This project is a C++ program for approximating definite integrals using five numerical methods: Left Endpoint, Right Endpoint, Midpoint, Trapezoidal, and Simpson's Rule. Each method allows the comparison of approximation errors and supports user-defined precision, interval bounds, and subintervals.

## Features

- **User Input**: Specify left and right bounds, number of subintervals, and desired precision.
- **Integration Methods**:
  - Left Endpoint
  - Right Endpoint
  - Midpoint
  - Trapezoidal
  - Simpson’s Rule (requires an even number of subintervals)
- **Customizable Function**: Update the `integrand()` function to integrate other expressions easily.

## Usage

1. **Compile and Run**: Use a C++ compiler to build and execute the program.
   ```bash
   g++ integration_calculator.cpp -o integration_calculator
   ./integration_calculator
