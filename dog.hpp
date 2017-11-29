/
//  Dog.hpp
//  dogs
//
//  Created by Jonathan Beilin on 10/30/17.
//

#ifndef Dog_hpp
#define Dog_hpp

#include <stdio.h>

#include "ofMain.h"

class Dog{

public:

	Dog();

	void setup();
	void update();
	void draw();
	void sit();
    void ofGetMousePressed();
    void keyPressed(int key);
    void mouseScrolled(int x, int y, float scrollX, float scrollY);
    
	ofColor getFurColor();

	string name;
	ofPoint position;
    ofColor bgColor;
    
private:
	ofColor furColor;
};

#endif /* Dog_hpp */
