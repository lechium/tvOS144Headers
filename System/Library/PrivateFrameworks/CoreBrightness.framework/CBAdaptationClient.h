/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BrightnessSystemClient;

@interface CBAdaptationClient : NSObject {

	BrightnessSystemClient* bsc;
	BOOL ownsClient;
	int _mode;
	BOOL _modeSet;
	BOOL _supported;

}

@property (assign) BOOL supported;              //@synthesize supported=_supported - In the implementation block
+(BOOL)supportsAdaptation;
-(id)init;
-(void)dealloc;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(id)initWithClientObj:(id)arg1 ;
-(BOOL)supported;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)setWeakestAdaptationModeFromArray:(int*)arg1 withLength:(int)arg2 andPeriod:(float)arg3 ;
-(BOOL)getEnabled;
-(int)getAdaptationMode;
-(BOOL)animateFromWeakestAdaptationModeInArray:(int*)arg1 withLength:(int)arg2 toWeakestInArray:(int*)arg3 withLength:(int)arg4 withProgress:(float)arg5 andPeriod:(float)arg6 ;
-(BOOL)setAdaptationMode:(int)arg1 withPeriod:(float)arg2 ;
-(BOOL)overrideStrengths:(float*)arg1 forModes:(int*)arg2 nModes:(int)arg3 ;
-(BOOL)getStrengths:(float*)arg1 nStrengths:(int)arg2 ;
@end

