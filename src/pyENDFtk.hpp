#ifndef PYENDFTK_HPP
#define PYENDFTK_HPP

#include "pybind11/pybind11.h"

namespace py = pybind11;

#include "pyENDFtk/test.hpp"

PYBIND11_MODULE(ENDFtk, m) {

    m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------
        .. currentmodule:: cmake_example
        .. autosummary::
           :toctree: _generate
           add
           subtract
    )pbdoc";

    m.def("add", &add, R"pbdoc(
        Add two numbers
        Some other explanation about the add function.
    )pbdoc");

    m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers
        Some other explanation about the subtract function.
    )pbdoc");
}
