#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    counter = 0;
//    ofBackground(255);

	// setup your myDog instance of the Dog class
	myDog.setup();
    chacha.setup();
    chumchum.setup();
    lila.setup();
    mima.setup();
    lolo.setup();
    momo.setup();
    koko.setup();
    

	// this doesn't work -- why?
	// (because furColor is private)
//	ofColor dogColor = myDog.furColor;

	// however, this works
    ofColor dogColor = myDog.getFurColor();
}

//--------------------------------------------------------------
void ofApp::update(){
	myDog.update();
    chacha.update();
    chumchum.update();
    lila.update();
    mima.update();
    lolo.update();
    momo.update();
    koko.update();
    
    ofColor background1;
    background1.set(255, 100, 100);
    ofColor background2;
    background2.set(255,255,255);
    ofColor background3;
    background3.set(100, 100, 100);
    
    if (counter == 0) {
        ofBackground(background1);
    } else if (counter == 1) {
        ofBackground(background2);
    }
    
    if (counter == 1) {
        ofBackground(background2);
    } else if (counter == 2) {
        ofBackground(background3);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofSetColor(127, 167, 0);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 130);
    
    ofSetColor(23, 167, 0);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 70);
    
    ofSetColor(0, 214, 10);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 50);
    
    ofSetColor(245, 10, 90);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 40);
    
    
    
	myDog.draw();
    chacha.draw();
    chumchum.draw();
    lila.draw();
    mima.draw();
    lolo.draw();
    momo.draw();
    koko.draw();

    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
//    if(key == ' '){
    
    if (key == ' ') {
        counter ++;
    }
    
    if (counter > 5) {
        counter = 0;
    }
    
    if(key == 'a'){
  
    chacha.position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    if(key == 's'){
        
        myDog.position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    if(key == 'i'){
        
        chumchum.position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    if(key == 'l'){
        
        lila.position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    
    if(key == 'n'){
        
        mima.position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    
    if(key == 'c'){
        
       lolo.position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    
    if(key == 'q'){
        
        momo.position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    
    if(key == 'p'){
        
        koko.position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key == 'z'){
        
        mima.position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    
}

//--------------------------------------------------------------
//void ofApp::mouseScrolled(ofMouseEventArgs &mouse){
//    
//}


//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
   
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    //Could not make this run
//    if (0, 1, 2){
//       ofSetColor(245, 10, 90);
//        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 400);
//    }
//}
}
//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
