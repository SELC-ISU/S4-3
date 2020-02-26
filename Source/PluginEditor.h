/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class TestProjectAudioProcessorEditor  : public AudioProcessorEditor,
	private Slider::Listener
{
public:
    TestProjectAudioProcessorEditor (TestProjectAudioProcessor&);
    ~TestProjectAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    TestProjectAudioProcessor& processor;

	void sliderValueChanged(Slider* slider) override; // [3]

	Slider frequencyControl;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TestProjectAudioProcessorEditor)
};
