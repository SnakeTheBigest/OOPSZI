# CMakeList.txt: проект CMake для OOPZI_task2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
add_library(task3_WHILEtlib1 STATIC "task1.c" "task2.c" "task3.c" "task4.c" "task5.c")
target_include_directories(task3_WHILEtlib1 PUBLIC "../header")
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
