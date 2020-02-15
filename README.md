# ofxSkyBox

A simple ofxAddon to display a SkyBox object in an openFrameworks scene.

## Setup

You need to instantiate in the header an ofxSkyBox, an ofCamera and an ofSphereCenter.

Then in the setup():

set the sphereCenter, the ofCamera position and load the ofxSkyBox instance.

```
void testApp::setup(){

	sphereCenter = ofVec3f(0, 0, 0);

	camera.setPosition(ofVec3f(0, 0, 0));

	skybox.load();
}
```


in draw():

between the camera begin/end update the skybox and the lookAt vector.

```
void testApp::draw(){

	camera.begin();

    skybox.draw();

    camera.lookAt(ofVec3f(mouseY,  0,mouseX), ofVec3f(0, 1, 0));

	camera.end();

}

```

## Tested

Tested with openFrameworks 0.11.0.
