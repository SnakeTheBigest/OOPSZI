# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
add_executable (exe4 "Task5_main.c")
target_link_libraries(exe4 tlib)
