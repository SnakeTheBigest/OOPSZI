# CMakeList.txt: проект CMake для OOPZI_task2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (task3_WHILE "MAIN.c")
target_link_libraries(task3_WHILE task3_WHILEtlib1)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
