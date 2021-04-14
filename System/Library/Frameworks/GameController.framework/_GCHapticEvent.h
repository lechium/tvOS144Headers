/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GCHapticEvent : NSObject <NSSecureCoding> {

	BOOL _stopped;
	BOOL _transientBeganAsContinuousEvent;
	unsigned long long _identifier;
	long long _type;
	long long _subtype;
	double _startTime;
	double _intensity;
	double _sharpness;

}

@property (assign,nonatomic) unsigned long long identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long subtype;                                 //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) double startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double intensity;                                  //@synthesize intensity=_intensity - In the implementation block
@property (assign,nonatomic) double sharpness;                                  //@synthesize sharpness=_sharpness - In the implementation block
@property (assign,nonatomic) BOOL stopped;                                      //@synthesize stopped=_stopped - In the implementation block
@property (assign,nonatomic) BOOL transientBeganAsContinuousEvent;              //@synthesize transientBeganAsContinuousEvent=_transientBeganAsContinuousEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(unsigned long long)identifier;
-(double)startTime;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(long long)subtype;
-(void)setSubtype:(long long)arg1 ;
-(double)sharpness;
-(void)setSharpness:(double)arg1 ;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(BOOL)stopped;
-(void)setStopped:(BOOL)arg1 ;
-(pair<bool, float>)valueForNoteParam:(unsigned)arg1 inParameters:(id)arg2 ;
-(void)evaluateDeviceNoteParams:(id)arg1 ;
-(id)initWithSyntheticCommand:(id)arg1 ;
-(BOOL)transientBeganAsContinuousEvent;
-(void)setTransientBeganAsContinuousEvent:(BOOL)arg1 ;
@end
