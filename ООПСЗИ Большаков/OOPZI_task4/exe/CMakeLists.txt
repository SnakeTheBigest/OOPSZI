# CMakeList.txt: проект CMake для OOPZI_task2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (version_1 "main_f.cpp")
target_link_libraries(version_1  LIB_COMPLEX)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
