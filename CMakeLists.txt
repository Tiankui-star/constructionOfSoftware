cmake_minimum_required(VERSION 3.16)

project(constructionOfSoftware VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appconstructionOfSoftware
    main.cpp
)

qt_add_qml_module(appconstructionOfSoftware
    URI constructionOfSoftware
    QML_FILES
        Main.qml
        SOURCES generate.h
        SOURCES generate.cpp
        SOURCES binaryequals.h binaryequals.cpp
        SOURCES exercise.h exercise.cpp
        SOURCES addoperation.h addoperation.cpp
        SOURCES suboperation.h suboperation.cpp
        SOURCES exercisesheet.h exercisesheet.cpp
        SOURCES ExerciseFileTester.h
        SOURCES ExerciseFileTest.cpp
        SOURCES practice.h practice.cpp
        SOURCES judgement.h judgement.cpp
        SOURCES OperationBase.h
        SOURCES OperationBase.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appconstructionOfSoftware PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appconstructionOfSoftware
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appconstructionOfSoftware
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appconstructionOfSoftware
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
