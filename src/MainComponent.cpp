#include "MainComponent.h"

MainComponent::MainComponent() {
    setSize(600, 400);

    slider1.setSliderStyle(juce::Slider::LinearVertical);
    slider1.setTextBoxStyle(juce::Slider::TextBoxAbove, false, 50, 25);
    slider1.setRange(0.0f, 1.0f);
    juce::Random rand;
    slider1.setValue(rand.nextDouble());
    addAndMakeVisible(slider1);
    slider1.setBounds(getWidth() / 2 - 200, getHeight() / 2 - 100, 50, 200);

}

void MainComponent::paint(juce::Graphics &g) {
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (16.0f));
    g.setColour (juce::Colours::white);

}

void MainComponent::resized() {

}