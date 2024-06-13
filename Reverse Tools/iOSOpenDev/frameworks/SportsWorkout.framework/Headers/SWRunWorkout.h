/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <SportsWorkout/SWRunSensorPacketObserver.h>
#import <SportsWorkout/SWWorkout.h>

@class SWPaceModel, SWRunSensor, NSData;

@interface SWRunWorkout : SWWorkout <SWRunSensorPacketObserver> {
	SWRunSensor *_sensor;	// 28 = 0x1c
	SWPaceModel *_paceModel;	// 32 = 0x20
	BOOL _hasStarted;	// 36 = 0x24
	float _weightInLbs;	// 40 = 0x28
	BOOL _isCalibration;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) float maximumCalibrationDistanceMiles;	// G=0x4611; @dynamic
@property(readonly, assign, nonatomic) float minimumCalibrationDistanceMiles;	// G=0x45f1; @dynamic
@property(readonly, assign, nonatomic) BOOL canBeUsedForRunCalibration;	// G=0x45cd; @dynamic
@property(readonly, assign, nonatomic) BOOL canBeUsedForWalkCalibration;	// G=0x45a9; @dynamic
@property(copy, nonatomic) NSData *paceModelParameters;	// G=0x4589; S=0x4569; @dynamic
@property(assign, nonatomic) BOOL isCalibration;	// G=0x4b69; S=0x4b79; @synthesize=_isCalibration
@property(readonly, assign, nonatomic) BOOL isWalk;	// G=0x4039; @dynamic
@property(assign, nonatomic) float weightInLbs;	// G=0x4b49; S=0x4b59; @synthesize=_weightInLbs
@property(readonly, assign, nonatomic) SWRunSensor *sensor;	// G=0x4b39; @synthesize=_sensor
+ (id)workoutWithSensor:(id)sensor;	// 0x3ff1
// declared property setter: - (void)setIsCalibration:(BOOL)calibration;	// 0x4b79
// declared property getter: - (BOOL)isCalibration;	// 0x4b69
// declared property setter: - (void)setWeightInLbs:(float)lbs;	// 0x4b59
// declared property getter: - (float)weightInLbs;	// 0x4b49
// declared property getter: - (id)sensor;	// 0x4b39
- (void)sensor:(id)sensor didReceivePacketPayload:(const char *)payload timestamp:(unsigned long)timestamp;	// 0x49b5
- (void)pauseWorkout;	// 0x4925
- (void)activateWorkout;	// 0x469d
- (BOOL)recalibrateWithAdjustedDistanceMiles:(float)adjustedDistanceMiles;	// 0x4679
- (BOOL)calibrateWithDistanceMiles:(float)distanceMiles forWalk:(BOOL)walk;	// 0x4651
- (void)resetCalibration;	// 0x4631
// declared property getter: - (float)maximumCalibrationDistanceMiles;	// 0x4611
// declared property getter: - (float)minimumCalibrationDistanceMiles;	// 0x45f1
// declared property getter: - (BOOL)canBeUsedForRunCalibration;	// 0x45cd
// declared property getter: - (BOOL)canBeUsedForWalkCalibration;	// 0x45a9
// declared property getter: - (id)paceModelParameters;	// 0x4589
// declared property setter: - (void)setPaceModelParameters:(id)parameters;	// 0x4569
- (id)workoutData;	// 0x405d
// declared property getter: - (BOOL)isWalk;	// 0x4039
- (void)dealloc;	// 0x3f91
- (id)initWithSensor:(id)sensor;	// 0x3f0d
@end