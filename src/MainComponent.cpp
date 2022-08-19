#include "MainComponent.h"

MainComponent::MainComponent() {
    setSize(600, 400);
    juce::Random rand;

    slider1.setSliderStyle(juce::Slider::LinearVertical);
    slider1.setTextBoxStyle(juce::Slider::TextBoxAbove, false, 100, 25);
    slider1.setRange(0.0f, 1.0f);
    slider1.setValue(rand.nextDouble());
    addAndMakeVisible(slider1);
    slider1.setBounds(getWidth() / 2 - 200, getHeight() / 2 - 100, 50, 200);



    slider2.setSliderStyle(juce::Slider::LinearVertical);
    slider2.setTextBoxStyle(juce::Slider::TextBoxAbove, false, 100, 25);
    slider2.setRange(0.0f, 1.0f);
    slider2.setValue(rand.nextDouble());
    addAndMakeVisible(slider2);
    slider2.setBounds(getWidth() / 2 - 100, getHeight() / 2 - 100, 50, 200);


    slider3.setSliderStyle(juce::Slider::LinearVertical);
    slider3.setTextBoxStyle(juce::Slider::TextBoxAbove, false, 100, 25);
    slider3.setRange(0.0f, 1.0f);
    slider3.setValue(rand.nextDouble());
    addAndMakeVisible(slider3);
    slider3.setBounds(getWidth() / 2, getHeight() / 2 - 100, 50, 200);

}

void MainComponent::paint(juce::Graphics &g) {
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (16.0f));
    g.setColour (juce::Colours::white);

}

void MainComponent::resized() {

}