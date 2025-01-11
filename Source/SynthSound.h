/*
  ==============================================================================

    SynthSound.h
    Created: 6 Jan 2025 1:43:14am
    Author:  James Edmond

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote (int midiNoteNumber) override { return true; }
    
    bool appliesToChannel (int midiChannel) override { return true; }
    
};
