# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
add_executable (exe6 "Task7_main.c")
target_link_libraries(exe6 tlib2)