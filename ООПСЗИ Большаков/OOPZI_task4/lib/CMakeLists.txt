# CMakeList.txt: проект CMake для OOPZI_task2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
add_library(LIB_COMPLEX STATIC "Complex_class.cpp")
target_include_directories(LIB_COMPLEX PUBLIC "../header")
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
