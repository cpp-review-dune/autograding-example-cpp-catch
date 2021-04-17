// Definiciones de prueba. ¡No edite este archivo!

#include <iostream>
#include <tuple>
#include <vector>
#define CATCH_CONFIG_MAIN // define main() automáticamente
#include "catch.hpp"

#include "student_vectors.hh" // implementaciones del estudiante

// ===========================
// pruebas para el ejercicio 1
// ---------------------------

TEST_CASE("Ex1", "[example]")
{
    std::vector<int> alpha = { 3, 4 };

    REQUIRE(norm_2(alpha) == 5.0);
}
