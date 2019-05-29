# CMakeList.txt: проект CMake для OOPZI_task2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
add_library(task5_LIB_int_data STATIC "task_int_data.cpp" "task_abstract_data_v_2.cpp")
target_include_directories(task5_LIB_int_data PUBLIC "../header")
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
