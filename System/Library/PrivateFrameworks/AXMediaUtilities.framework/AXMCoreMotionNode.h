/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMCoreMotionNode : AXMSourceNode {

	unsigned long long _samplesPerSecond;
	double _lastSampleTime;

}

@property (assign,nonatomic) double lastSampleTime;                            //@synthesize lastSampleTime=_lastSampleTime - In the implementation block
@property (assign,nonatomic) unsigned long long samplesPerSecond;              //@synthesize samplesPerSecond=_samplesPerSecond - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)nodeInitialize;
-(unsigned long long)samplesPerSecond;
-(void)setSamplesPerSecond:(unsigned long long)arg1 ;
-(double)lastSampleTime;
-(void)setLastSampleTime:(double)arg1 ;
@end

