cmake_minimum_required(VERSION 3.27)
project(SGI)

set(CMAKE_CXX_STANDARD 17)

set(wxWidgets_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/wxWidgets)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
find_package(wxWidgets REQUIRED COMPONENTS core base)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${wxWidgets_INCLUDE_DIRS})

set(SOURCES
        src/Application.cpp
        src/Inmueble.cpp
        src/Inquilino.cpp
        src/Persona.cpp
        src/Propietario.cpp
        src/Usuario.cpp
        src/wxfb_project.cpp
        src/gui/GuiAgregarInmuebles.cpp
        src/gui/GuiAgregarInquilinos.cpp
        src/gui/GuiAgregarPropietarios.cpp
        src/gui/GuiAgregarUsers.cpp
        src/gui/GuiEditInmuebles.cpp
        src/gui/GuiEditInquilinos.cpp
        src/gui/GuiEditPropietarios.cpp
        src/gui/GuiEditUsers.cpp
        src/gui/GuiLogin.cpp
        src/gui/GuiMenuInmuebles.cpp
        src/gui/GuiMenuInquilinos.cpp
        src/gui/GuiMenuPropietarios.cpp
        src/gui/GuiMenuUsers.cpp
        src/fs/ioInmueble.cpp
        src/fs/ioInquilino.cpp
        src/fs/ioPropietario.cpp
        src/fs/ioUsuario.cpp
)
add_executable(SGI ${SOURCES})

target_link_libraries(SGI ${wxWidgets_LIBRARIES})