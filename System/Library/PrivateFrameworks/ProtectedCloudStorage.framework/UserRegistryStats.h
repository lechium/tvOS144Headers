/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UserRegistryStats : NSObject <NSSecureCoding> {

	long long _fetchRecordZoneChanges;
	long long _lastfetchRecordZoneChangesAtStart;
	long long _pushNotifications;
	long long _zoneReset;
	long long _recordFetch;
	long long _recordModify;

}

@property (assign) long long fetchRecordZoneChanges;                         //@synthesize fetchRecordZoneChanges=_fetchRecordZoneChanges - In the implementation block
@property (assign) long long lastfetchRecordZoneChangesAtStart;              //@synthesize lastfetchRecordZoneChangesAtStart=_lastfetchRecordZoneChangesAtStart - In the implementation block
@property (assign) long long pushNotifications;                              //@synthesize pushNotifications=_pushNotifications - In the implementation block
@property (assign) long long zoneReset;                                      //@synthesize zoneReset=_zoneReset - In the implementation block
@property (assign) long long recordFetch;                                    //@synthesize recordFetch=_recordFetch - In the implementation block
@property (assign) long long recordModify;                                   //@synthesize recordModify=_recordModify - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)fetchRecordZoneChanges;
-(long long)lastfetchRecordZoneChangesAtStart;
-(long long)pushNotifications;
-(long long)zoneReset;
-(long long)recordFetch;
-(long long)recordModify;
-(void)setFetchRecordZoneChanges:(long long)arg1 ;
-(void)setLastfetchRecordZoneChangesAtStart:(long long)arg1 ;
-(void)setPushNotifications:(long long)arg1 ;
-(void)setZoneReset:(long long)arg1 ;
-(void)setRecordFetch:(long long)arg1 ;
-(void)setRecordModify:(long long)arg1 ;
-(void)printUserRegistryStats:(_sFILE*)arg1 ;
-(id)getUserRegistryStats;
@end

