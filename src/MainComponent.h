#pragma once
#include "juce_gui_basics/juce_gui_basics.h"
class MainComponent: public juce::Component{
public:
    MainComponent();

    void paint(juce::Graphics &) override;
    void resized() override;
private:
    juce::Slider slider1;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
};
