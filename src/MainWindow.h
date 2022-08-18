#pragma once
#include <juce_gui_basics/juce_gui_basics.h>
class MainWindow: juce::DocumentWindow {


public:
    MainWindow(const juce::String name);
private:
    void closeButtonPressed() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainWindow)
};