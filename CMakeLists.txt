cmake_minimum_required(VERSION 3.23)
project(JuceCalculator VERSION 0.0.1 LANGUAGES CXX )
set(CMAKE_CXX_STANDARD 20)
add_subdirectory(libs/JUCE)
juce_add_gui_app(JuceCalculator PRODUCT_NAME "Juce Calculator")
target_link_libraries(JuceCalculator
        PRIVATE
            juce::juce_core
            juce::juce_gui_basics
            juce::juce_audio_utils
)
add_subdirectory(src/)
target_compile_definitions(JuceCalculator
        PRIVATE
            JUCE_WEB_BROWSER=0
            JUCE_USE_CULR=0
            JUCE_APPLICATION_NAME_STRING="Juce Calculator"
            JUCE_APPLICATION_VERSION="0.0.1"
)
