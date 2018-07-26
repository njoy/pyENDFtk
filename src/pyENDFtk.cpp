
#include <pybind11/pybind11.h>

#include "ENDFtk.hpp"

namespace py = pybind11;

PYBIND11_MODULE( pyENDFtk, module ){
  module.doc () = R"pbdoc(
    Python bindings to the ENDFtk library.
    )pbdoc";

#include "pyENDFtk.hpp"

}
