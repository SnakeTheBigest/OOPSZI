# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
#


add_executable (exe5 "Task6_main.c")
target_link_libraries(exe5 tlib1)