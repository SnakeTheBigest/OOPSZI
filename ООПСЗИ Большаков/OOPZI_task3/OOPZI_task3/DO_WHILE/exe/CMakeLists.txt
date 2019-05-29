# CMakeList.txt: проект CMake для OOPZI_task2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (task3_doWHILE "MAIN.c")
target_link_libraries(task3_doWHILE task3_doWHILEtlib2)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
