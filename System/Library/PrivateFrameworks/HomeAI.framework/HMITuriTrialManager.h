/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class TRIClient, NSString;

@interface HMITuriTrialManager : HMFObject <HMFLogging> {

	TRIClient* _trialClient;
	NSString* _compiledModelArchivePath;
	double _personThresholdHigh;
	double _personThresholdMedium;
	double _petThresholdHigh;
	double _petThresholdMedium;
	double _vehicleThresholdHigh;
	double _vehicleThresholdMedium;
	double _faceThreshold;
	NSString* _modelPath;

}

@property (readonly) double personThresholdHigh;                    //@synthesize personThresholdHigh=_personThresholdHigh - In the implementation block
@property (readonly) double personThresholdMedium;                  //@synthesize personThresholdMedium=_personThresholdMedium - In the implementation block
@property (readonly) double petThresholdHigh;                       //@synthesize petThresholdHigh=_petThresholdHigh - In the implementation block
@property (readonly) double petThresholdMedium;                     //@synthesize petThresholdMedium=_petThresholdMedium - In the implementation block
@property (readonly) double vehicleThresholdHigh;                   //@synthesize vehicleThresholdHigh=_vehicleThresholdHigh - In the implementation block
@property (readonly) double vehicleThresholdMedium;                 //@synthesize vehicleThresholdMedium=_vehicleThresholdMedium - In the implementation block
@property (readonly) double faceThreshold;                          //@synthesize faceThreshold=_faceThreshold - In the implementation block
@property (readonly) NSString * modelPath;                          //@synthesize modelPath=_modelPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logCategory;
-(void)configure;
-(NSString *)modelPath;
-(double)personThresholdMedium;
-(double)petThresholdMedium;
-(double)vehicleThresholdMedium;
-(double)personThresholdHigh;
-(double)petThresholdHigh;
-(double)vehicleThresholdHigh;
-(double)faceThreshold;
-(BOOL)loadModelFromTrialWithError:(id*)arg1 ;
-(void)updateLevels;
-(void)submitUpdateModelTask;
-(void)registerForTrialUpdates;
@end

