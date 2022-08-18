#include "main_window.h"

MainWindow::MainWindow(const juce::String name): juce::DocumentWindow(name, juce::Colours::darkgrey,
                                                                      juce::DocumentWindow::TitleBarButtons::allButtons) {
    setUsingNativeTitleBar (true);
    centreWithSize(400, 400);
    setResizable(true, true);
    setVisible(true);

}

void MainWindow::closeButtonPressed() {
    juce::JUCEApplication::getInstance()->systemRequestedQuit();
}
