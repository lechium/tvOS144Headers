/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVRCGameControllerEvent : NSObject <NSSecureCoding> {

	BOOL _down;
	double _timestamp;
	CGPoint _joystickLocation;

}

@property (nonatomic,readonly) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (getter=isDown,nonatomic,readonly) BOOL down;               //@synthesize down=_down - In the implementation block
@property (nonatomic,readonly) CGPoint joystickLocation;              //@synthesize joystickLocation=_joystickLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(BOOL)isDown;
-(id)_initWithTimestamp:(double)arg1 isDown:(BOOL)arg2 joystickLocation:(CGPoint)arg3 ;
-(CGPoint)joystickLocation;
@end
