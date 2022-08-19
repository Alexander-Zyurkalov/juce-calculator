#pragma once
#include "juce_gui_basics/juce_gui_basics.h"
class MainComponent: public juce::Component{
public:
    MainComponent();

    void paint(juce::Graphics &) override;
    void resized() override;
private:
    juce::Slider slider1;
    juce::Slider slider2;
    juce::Slider slider3;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
};
