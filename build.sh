clang++ -g -O3 lex.cpp `llvm-config --cxxflags --ldflags --system-libs --libs all` -rdynamic -std=c++1y -o lex