# Matrix in Yates Order
 Yates Order's matrix for Yates Analysis in case of a full factorial DOE(Design of experiment) in C++

# Yates Analysis
 "In statistics, a Yates analysis is an approach to analyzing data obtained from a designed experiment, where a factorial design has been used. Full- and fractional-factorial designs are common in designed experiments for engineering and scientific applications. In these designs, each factor is assigned two levels. These are typically called the low and high levels. For computational purposes, the factors are scaled so that the low level is assigned a value of -1 and the high level is assigned a value of +1. These are also commonly referred to as "-" and "+".

A full factorial design contains all possible combinations of low/high levels for all the factors. A fractional factorial design contains a carefully chosen subset of these combinations. The criterion for choosing the subsets is discussed in detail in the fractional factorial designs article."  [ source : https://en.wikipedia.org/wiki/Yates_analysis]


# Yates Order

Before performing a Yates analysis, the data should be arranged in "Yates order". That is, given k factors, the kth column consists of 2(k - 1) minus signs (i.e., the low level of the factor) followed by 2(k - 1) plus signs (i.e., the high level of the factor).

# What do you get with this code?
This code generate a matrix in Yates Order for a full factorial Experiement. It can be use to implement the Yates Analysis

# TO DO LIST
- Update the header path into main.cpp and matrix.cpp

# use case
![image]
(C:\Users\User\Desktop\usecase.png "Use Case")