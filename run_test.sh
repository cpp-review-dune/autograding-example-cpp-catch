#!/bin/bash
set -e

mkdir -p src/build && cd src/build
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release ..
make

# TODO: Crear funciones y pasarle como argumento el nombre del tutorial.