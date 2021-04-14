/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVSUIBlackScreenRecoveryViewController, NSArray;

@interface TVSUIBlackScreenRecoveryIterator : NSObject {

	double _interval;
	TVSUIBlackScreenRecoveryViewController* _currentController;
	NSArray* _modesToTry;
	unsigned long long _currentModeIndex;
	/*^block*/id _iterationBlock;

}

@property (nonatomic,retain) TVSUIBlackScreenRecoveryViewController * currentController;              //@synthesize currentController=_currentController - In the implementation block
@property (nonatomic,retain) NSArray * modesToTry;                                                    //@synthesize modesToTry=_modesToTry - In the implementation block
@property (assign,nonatomic) unsigned long long currentModeIndex;                                     //@synthesize currentModeIndex=_currentModeIndex - In the implementation block
@property (assign,nonatomic) double interval;                                                         //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy) id iterationBlock;                                                         //@synthesize iterationBlock=_iterationBlock - In the implementation block
+(id)scheduleIterationForDisplayModes:(id)arg1 iterationInterval:(double)arg2 iterationBlock:(/*^block*/id)arg3 ;
-(void)stop;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(TVSUIBlackScreenRecoveryViewController *)currentController;
-(void)setCurrentController:(TVSUIBlackScreenRecoveryViewController *)arg1 ;
-(void)setModesToTry:(NSArray *)arg1 ;
-(void)setCurrentModeIndex:(unsigned long long)arg1 ;
-(void)setIterationBlock:(id)arg1 ;
-(void)_switchToNextMode;
-(id)iterationBlock;
-(NSArray *)modesToTry;
-(unsigned long long)currentModeIndex;
@end
