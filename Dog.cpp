//
//  Dog.cpp
//  dogs
//
//  Created by Jonathan Beilin on 10/30/17.
//

#include "Dog.hpp"

Dog::Dog() {
}

void Dog::setup() {
	// generate a random color for the furcolor
	furColor.setHsb(ofRandom(360), 64 + ofRandom(128), 64 + ofRandom(128));
//    position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    
    position.set(ofRandom(ofGetWidth()), 100);
}
void Dog::update() {

}

void Dog::draw() {
	ofSetColor(furColor);
	ofDrawRectangle(position, 1082, 30);
}
void Dog::sit() {

}

// This is a method that allows you to access the dog's
// private furColor member variable outside of the class
ofColor Dog::getFurColor() {
	return furColor;
}
