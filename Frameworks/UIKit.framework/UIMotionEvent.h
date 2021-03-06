/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer;

@interface UIMotionEvent : UIInternalEvent  {
    id _motionAccelerometer;
    int _subtype;
    int _shakeState;
    int _stateMachineState;
    double _shakeStartTime;
    double _lastMovementTime;
    double _highLevelTime;
    double _lowEndTimeout;
    NSTimer *_idleTimer;
    BOOL _sentMotionBegan;
    float _lowPassState[10];
    unsigned int _lowPassStateIndex;
    unsigned int _highPassStateIndex;
    float _highPassState[2];
    int notifyToken;
}

@property int shakeState;


- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (float)_lowPass:(float)arg1;
- (float)_highPass:(float)arg1;
- (int)_feedStateMachine:(float)arg1 currentState:(int)arg2 timestamp:(double)arg3;
- (float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(int)arg4;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1;
- (void)_resetLowPassState;
- (void)_idleTimerFired;
- (void)_willSuspend;
- (void)_willResume;
- (void)_enablePeakDetectionIfNecessary;
- (int)_shakeState;
- (int)type;
- (int)subtype;
- (int)shakeState;
- (void)setShakeState:(int)arg1;
- (void)_setSubtype:(int)arg1;
- (id)_init;
- (id)description;
- (void)dealloc;

@end
