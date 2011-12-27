#include "testApp.h"
//#include <glut.h>
//--------------------------------------------------------------
void testApp::setup(){


	sphereCenter = ofVec3f(0, 0, 0);

	camera.setPosition(ofVec3f(0, 0, 0));


	camera.cacheMatrices(false) ;

	skybox.load();
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){


	camera.begin();

    skybox.draw();

    camera.lookAt(ofVec3f(mouseY,  0,mouseX), ofVec3f(0, 1, 0));



	camera.end();

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}
//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}
