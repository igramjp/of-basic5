#include "ofApp.h"

float start_x[1000];
float start_y[1000];
float end_x[1000];
float end_y[1000];

//--------------------------------------------------------------
void ofApp::setup(){
    int i;
    ofBackground(0, 0, 0);
    ofEnableAlphaBlending();
    ofSetLineWidth(2);
    ofEnableSmoothing();
    
    for (i=0; i<1000; i++) {
        start_x[i] = ofRandom(0, ofGetWidth());
        start_y[i] = ofRandom(0, ofGetHeight());
        end_x[i] = ofRandom(0, ofGetWidth());
        end_y[i] = ofRandom(0, ofGetHeight());
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int i;
    ofSetColor(31, 127, 255, 63);
    for (i=0; i<1000; i++) {
        ofDrawLine(start_x[i], start_y[i], end_x[i], end_y[i]);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
