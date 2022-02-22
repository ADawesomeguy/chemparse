#!/bin/bash
# Create build directory, without producing an error if it already exists
mkdir -p build/
cd build/
cmake ..
make
cp ../periodic-table.json ./bin
echo "Copied periodic table JSON to bin directory"
