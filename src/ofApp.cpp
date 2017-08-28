#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetVerticalSync(true);
  ofBackground(0, 0, 0);

  ofSetWindowShape(800, 600);
  ofSetWindowPosition(0, 0);
  ofSetWindowTitle("app");

  gradient.addColor( ofColor::red );
  gradient.addColor( ofColor::blue );
  // gradient.addColor( ofColor::magenta );
  // gradient.addColor( ofColor::cyan );
  // gradient.addColor( ofColor::white );
  // gradient.addColor( ofColor::black );

  // string cmd = "electron ~/of/apps/Sites/hybrid/electron --enable-transparent-visuals --show-fps-counter --disable-gpu-blacklist --enable-gpu-rasterization --enable-gpu-memory-buffer-compositor-resources --enable-gpu-memory-buffer-video-frames --enable-native-gpu-memory-buffers --enable-zero-copy &";
  string cmd = "electron ~/of/apps/Sites/hybrid/electron --enable-transparent-visuals --enable-gpu-rasterization --enable-zero-copy &";
  system(cmd.c_str());
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  gradient.drawDebug(0, 0, ofGetWidth(), ofGetHeight());
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
