#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle("KubuK");
	receiver.setup(PORT);
    ofSetBackgroundColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){

	while(receiver.hasWaitingMessages()){
		// get the next message
		ofxOscMessage m;
		receiver.getNextMessage(m);
		if( m.getAddress() == "/verdefa1" )
        {
			// both the arguments are floats
			yaw = m.getArgAsFloat(0);
			pitch = m.getArgAsFloat(1);
			roll = m.getArgAsFloat(2);
			acc_x = m.getArgAsFloat(3);
			acc_y = m.getArgAsFloat(4);
			acc_z = m.getArgAsFloat(5);
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(180, 100, 10);
    ofDrawBox( acc_x + 180 * 0.25, acc_y + 180 * 0.25, acc_z + 180 * 0.25, yaw + 16384 * 0.0625, pitch + 16384  * 0.0625, roll + 16384 * 0.0625 );
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
