#include "MainWindow.h"
#include "MainComponent.h"

MainWindow::MainWindow(const juce::String name): juce::DocumentWindow(name, juce::Colours::darkgrey,
                                                                      juce::DocumentWindow::TitleBarButtons::allButtons) {
    setUsingNativeTitleBar (true);
    setContentOwned(new MainComponent(), true);
    setVisible(true);

}

void MainWindow::closeButtonPressed() {
    juce::JUCEApplication::getInstance()->systemRequestedQuit();
}
