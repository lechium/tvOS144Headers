/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID;

@interface CKDAssetZoneKey : NSObject <NSCopying> {

	CKRecordZoneID* _destinationZoneID;
	CKRecordZoneID* _sourceZoneID;
	long long _sourceDatabaseScope;
	long long _destinationDatabaseScope;

}

@property (nonatomic,retain) CKRecordZoneID * destinationZoneID;              //@synthesize destinationZoneID=_destinationZoneID - In the implementation block
@property (assign,nonatomic) long long destinationDatabaseScope;              //@synthesize destinationDatabaseScope=_destinationDatabaseScope - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * sourceZoneID;                   //@synthesize sourceZoneID=_sourceZoneID - In the implementation block
@property (assign,nonatomic) long long sourceDatabaseScope;                   //@synthesize sourceDatabaseScope=_sourceDatabaseScope - In the implementation block
@property (nonatomic,readonly) BOOL isCrossOwner; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)CKPropertiesDescription;
-(CKRecordZoneID *)sourceZoneID;
-(void)setSourceZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)destinationZoneID;
-(id)initWithDestinationZoneID:(id)arg1 destinationDatabaseScope:(long long)arg2 sourceZoneID:(id)arg3 sourceDatabaseScope:(long long)arg4 ;
-(long long)destinationDatabaseScope;
-(long long)sourceDatabaseScope;
-(id)initWithDestinationZoneID:(id)arg1 destinationDatabaseScope:(long long)arg2 ;
-(BOOL)isCrossOwner;
-(void)setDestinationZoneID:(CKRecordZoneID *)arg1 ;
-(void)setSourceDatabaseScope:(long long)arg1 ;
-(void)setDestinationDatabaseScope:(long long)arg1 ;
@end

