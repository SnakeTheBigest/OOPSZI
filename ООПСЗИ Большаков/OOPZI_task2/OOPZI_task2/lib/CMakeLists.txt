# CMakeList.txt: проект CMake для OOPZI_task2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
add_library(tlibt2 STATIC "Func_p_1.c" "Func_p_2.c")
target_include_directories(tlibt2 PUBLIC "../header")
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
