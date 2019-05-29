# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
add_library(tlib2 STATIC "Task7_func.c")
target_include_directories(tlib2 PUBLIC "../header")
