/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDFamiliarFacesBulletinLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	BOOL _doorbellPressed;
	long long _numberOfKnownPersons;
	long long _numberOfUnknownPersons;
	NSString* _bulletinReason;
	double _secondsFromDoorbellToFaceClassification;

}

@property (readonly) long long numberOfKnownPersons;                              //@synthesize numberOfKnownPersons=_numberOfKnownPersons - In the implementation block
@property (readonly) long long numberOfUnknownPersons;                            //@synthesize numberOfUnknownPersons=_numberOfUnknownPersons - In the implementation block
@property (copy,readonly) NSString * bulletinReason;                              //@synthesize bulletinReason=_bulletinReason - In the implementation block
@property (readonly) BOOL doorbellPressed;                                        //@synthesize doorbellPressed=_doorbellPressed - In the implementation block
@property (readonly) double secondsFromDoorbellToFaceClassification;              //@synthesize secondsFromDoorbellToFaceClassification=_secondsFromDoorbellToFaceClassification - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)initWithNumberOfKnownPersons:(long long)arg1 numberOfUnknownPersons:(long long)arg2 bulletinReason:(id)arg3 doorbellPressed:(BOOL)arg4 secondsFromDoorbellToFaceClassification:(double)arg5 ;
-(long long)numberOfKnownPersons;
-(long long)numberOfUnknownPersons;
-(NSString *)bulletinReason;
-(BOOL)doorbellPressed;
-(double)secondsFromDoorbellToFaceClassification;
-(id)serializedEvent;
@end

