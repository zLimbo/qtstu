add_executable(widget 
    main.cpp 
    widget.cpp 
    widget.h 
)


set_target_properties(widget PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)