# CMakeList.txt: проект CMake для OOPZI_task2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (lab5_version_3 "task_main.cpp")
target_link_libraries(lab5_version_3 task5_LIB_int_data)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
