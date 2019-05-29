# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
#
add_library(tlib1 STATIC "Task6_func.c")
target_include_directories(tlib1 PUBLIC "../header")