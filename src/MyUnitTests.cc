// Definiciones de prueba. ¡No edite este archivo!

#include <tuple>

#define CATCH_CONFIG_MAIN // define main() automáticamente
#include "catch.hpp"

#include "student.hh" // implementaciones del estudiante

// ===========================
// pruebas para el ejercicio 1
// ---------------------------

TEST_CASE("Ex1", "[example]")
{
    REQUIRE(add(1, 1) == 2);
}

// ===========================
// pruebas para el ejercicio 2
// ---------------------------

TEST_CASE("Ex2", "[example]")
{
    REQUIRE(mul(3, 3) == 9);
}
