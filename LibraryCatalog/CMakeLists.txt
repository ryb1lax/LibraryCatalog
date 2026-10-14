# CMakeList.txt: проект CMake для LibraryCatalog; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (LibraryCatalog "LibraryCatalog.cpp" "LibraryCatalog.h" "Book.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET LibraryCatalog PROPERTY CXX_STANDARD 17)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
