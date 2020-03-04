/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
TestProjectAudioProcessorEditor::TestProjectAudioProcessorEditor(TestProjectAudioProcessor &p)
        : AudioProcessorEditor(&p), processor(p) {
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize(400, 300);

    frequencyControl.setSliderStyle(Slider::LinearBarVertical);
    frequencyControl.setRange(0.5, 1.8, 0.1);
    frequencyControl.setTextBoxStyle(Slider::NoTextBox, false, 90, 0);
    frequencyControl.setPopupDisplayEnabled(true, false, this);
    frequencyControl.setTextValueSuffix(" Hz");
    frequencyControl.setValue(1.0);

    // this function adds the slider to the editor
    addAndMakeVisible(&frequencyControl);


    frequencyControl.addListener(this);
}

TestProjectAudioProcessorEditor::~TestProjectAudioProcessorEditor() {
}

//==============================================================================
void TestProjectAudioProcessorEditor::paint(Graphics &g) {
    // fill the whole window white
    g.fillAll(Colours::white);

    // set the current drawing colour to black
    g.setColour(Colours::black);

    // set the font size and draw text to the screen
    g.setFont(15.0f);

    g.drawFittedText("808 Frequency", 0, 0, getWidth(), 30, Justification::centred, 1);
}

void TestProjectAudioProcessorEditor::resized() {
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    frequencyControl.setBounds(40, 30, 20, getHeight() - 60);
}
