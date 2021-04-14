/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol HMBLocalZoneID;
@class NSUUID;

@interface HMBLocalSQLContextRowZone : HMFObject {

	id<HMBLocalZoneID> _identifier;
	unsigned long long _zoneRow;
	NSUUID* _replication;

}

@property (assign,nonatomic) unsigned long long zoneRow;                 //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,retain) id<HMBLocalZoneID> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUUID * replication;                       //@synthesize replication=_replication - In the implementation block
-(id)debugDescription;
-(id)description;
-(id)init;
-(id<HMBLocalZoneID>)identifier;
-(void)setIdentifier:(id<HMBLocalZoneID>)arg1 ;
-(unsigned long long)zoneRow;
-(id)initWithZoneRow:(unsigned long long)arg1 ;
-(id)initWithZoneRow:(unsigned long long)arg1 name:(id)arg2 token:(id)arg3 ;
-(void)setZoneRow:(unsigned long long)arg1 ;
-(NSUUID *)replication;
-(void)setReplication:(NSUUID *)arg1 ;
@end
