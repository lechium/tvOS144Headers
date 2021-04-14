/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
@class NSString;

@interface TUCarPlayHardwareControlsBroadcaster : NSObject {

	IOHIDEventSystemClientRef _hidEventSystemClientRef;
	NSString* _eventTypeToIgnore;

}

@property (retain) NSString * eventTypeToIgnore;              //@synthesize eventTypeToIgnore=_eventTypeToIgnore - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)eventTypeToIgnore;
-(void)setEventTypeToIgnore:(NSString *)arg1 ;
-(void)longPressTimerFired:(id)arg1 ;
@end
