#ifndef PRETTIEST_H
#define PRETTIEST_H

#include <iostream>

inline void log(std::string msg) { std::cout << "\x1b[32m[INFO]  \x1b[m:\x1b[32m " + msg + "\x1b[m" << std::endl; }
inline void warn(std::string msg) { std::cout << "\x1b[3;33m[WARN]  \x1b[m:\x1b[3;33m " + msg + "\x1b[m" << std::endl; }
inline void error(std::string msg) { std::cout << "\x1b[1;31m[ERROR] \x1b[m:\x1b[1;31m " + msg + "\x1b[m" << std::endl; }

#endif