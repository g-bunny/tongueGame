#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFullscreen(true);
    this->bg = new Background();
    this->iceCream = new IceCreamLevel();
    this->teeth = new UI();
}

//--------------------------------------------------------------
void ofApp::update(){
    bg->update();
    iceCream->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    bg->draw();
    ofPushMatrix();
    ofTranslate(ofGetScreenWidth()/2,0);
    iceCream->draw();
    iceCream->move();
    ofPopMatrix();
    teeth->draw();
    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
