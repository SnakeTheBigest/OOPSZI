# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
add_library(tlib STATIC "Task5_func.c")
target_include_directories(tlib PUBLIC "../header")