/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDControl.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ASDLevelControl : ASDControl {

	float _decibelValue;
	float _minimumDecibelValue;
	float _maximumDecibelValue;
	NSObject*<OS_dispatch_queue> _valueQueue;
	BOOL _settable;

}

@property (assign,nonatomic) float decibelValue; 
@property (assign,nonatomic) float minimumDecibelValue; 
@property (assign,nonatomic) float maximumDecibelValue; 
@property (assign,nonatomic) float scalarValue; 
@property (getter=isSettable,nonatomic,readonly) BOOL settable;              //@synthesize settable=_settable - In the implementation block
+(id)volumeControlWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(BOOL)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(unsigned)baseClass;
-(float)scalarValue;
-(float)decibelValue;
-(float)minimumDecibelValue;
-(float)maximumDecibelValue;
-(void)setScalarValue:(float)arg1 ;
-(void)setDecibelValue:(float)arg1 ;
-(float)scalarFromDecibel:(float)arg1 ;
-(float)decibelFromScalar:(float)arg1 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned)arg4 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)driverClassName;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(BOOL)isSettable;
-(id)initWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(BOOL)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 andObjectClassID:(unsigned)arg8 ;
-(BOOL)changeScalarValue:(float)arg1 ;
-(BOOL)changeDecibelValue:(float)arg1 ;
-(float)_scalarFromDecibel:(float)arg1 ;
-(float)_decibelFromScalar:(float)arg1 ;
-(id)initWithDecibelValue:(float)arg1 minimumValue:(float)arg2 maximumValue:(float)arg3 isSettable:(BOOL)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 ;
-(void)setMaximumDecibelValue:(float)arg1 ;
-(void)setMinimumDecibelValue:(float)arg1 ;
@end

