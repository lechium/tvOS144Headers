/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface CHHapticParameterCurve : NSObject {

	NSString* _param;
	double _time;
	NSArray* _controlPoints;

}

@property (readonly) NSString * parameterID;               //@synthesize param=_param - In the implementation block
@property (assign) double relativeTime;                    //@synthesize time=_time - In the implementation block
@property (readonly) NSArray * controlPoints; 
-(id)init;
-(NSArray *)controlPoints;
-(double)relativeTime;
-(NSString *)parameterID;
-(id)initWithParameterID:(id)arg1 controlPoints:(id)arg2 relativeTime:(double)arg3 ;
-(void)setRelativeTime:(double)arg1 ;
@end

