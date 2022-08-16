#include <iostream>
#include "juce_gui_basics/juce_gui_basics.h"

class JuceCalculatorApplication: public juce::JUCEApplication {
    const juce::String getApplicationName() override;
    const juce::String getApplicationVersion() override;
    void initialise (const juce::String& commandLineParameters) override;
    void shutdown() override;
};