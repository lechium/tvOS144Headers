/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DKSync3PolicyCommonMethods.h>

@class NSDictionary, NSString;

@interface _DKSync3TransportPolicy : NSObject <_DKSync3PolicyCommonMethods> {

	BOOL _isSyncDisabled;
	NSDictionary* _properties;
	NSString* _name;
	NSString* _transport;
	unsigned long long _maximumSyncsPerDay;
	unsigned long long _syncBatchSizeInEvents;
	unsigned long long _maximumBatchesPerSync;
	unsigned long long _minimumSyncWindowInSeconds;
	unsigned long long _minimumTimeBetweenSyncsInSeconds;
	unsigned long long _singleDevicePeriodicSyncCadenceInDays;
	unsigned long long _additionsBucketCountTriggeringSync;
	unsigned long long _deletionsBucketCountTriggeringSync;

}

@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(id)description;
-(id)init;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
@end

