/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSMutableArray;

@interface HMDAnalyticsPredicateData : HMFObject {

	BOOL _containsCalendarTime;
	BOOL _containsCharacteristicValue;
	BOOL _containsSignificantTime;
	BOOL _containsSignificantTimeOffset;
	NSMutableArray* _presenceEvents;

}
-(id)init;
@end
