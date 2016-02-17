/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "GUIComponents/CustomLookAndFeel.h"
#include "GUIComponents/FilterResponseDisplay.h"


//==============================================================================
/**
*/
class FilterGuiDemoAudioProcessorEditor  : public AudioProcessorEditor,
                                           public SliderListener,
                                           public ComboBoxListener
{
public:

    FilterGuiDemoAudioProcessorEditor (FilterGuiDemoAudioProcessor&);
    ~FilterGuiDemoAudioProcessorEditor();
    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    //==============================================================================
    AudioProcessorParameter* getParameterFromSlider(const Slider* slider) const;
    
    //==============================================================================
    void sliderValueChanged(Slider*) override;
    void sliderDragStarted (Slider*) override;
    void sliderDragEnded   (Slider*) override;
    
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    FilterGuiDemoAudioProcessor& processor;

    //GUI Components
    CustomLookAndFeel customLookAndFeel;
    FilterResponseDisplay filterResponseDisplay;
    Slider frequencyCutoffSlider, filterGainSlider;
    ComboBox filterTypeDropDown;
    Label filterCutoffLabel, filterGainLabel;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FilterGuiDemoAudioProcessorEditor)
};


#endif  // PLUGINEDITOR_H_INCLUDED
