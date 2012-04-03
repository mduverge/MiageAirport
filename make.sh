#! /bin/bash

echo "Nettoyage Ancien Executable"
rm MiageAirport

echo "Compilation"
g++ -Wall *.cpp -o MiageAirport

echo "Nettoyage"
rm *~

./MiageAirport
