#include "main.h"
#include "main_window.h"

START_JUCE_APPLICATION(JuceCalculatorApplication)

const juce::String JuceCalculatorApplication::getApplicationName() {
    return JUCE_APPLICATION_NAME_STRING;
}

const juce::String JuceCalculatorApplication::getApplicationVersion() {
    return JUCE_APPLICATION_VERSION;
}

void JuceCalculatorApplication::initialise(const juce::String &commandLineParameters) {
    mainWindow.reset(new MainWindow(getApplicationName()));
}

void JuceCalculatorApplication::shutdown() {
    mainWindow = nullptr;
}
