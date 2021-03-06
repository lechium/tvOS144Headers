/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSMutableDictionary* _cloudRecordByDatabaseZone;

}

@property (nonatomic,retain) NSMutableDictionary * cloudRecordByDatabaseZone;              //@synthesize cloudRecordByDatabaseZone=_cloudRecordByDatabaseZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(long long)count;
-(id)allObjects;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)allItems;
-(id)descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(id)countByZoneID;
-(void)addCloudRecord:(id)arg1 ;
-(void)applyCloudRecordDatabase:(id)arg1 ;
-(id)allRecordsWithRecordType:(id)arg1 ;
-(id)allRecordNames;
-(NSMutableDictionary *)cloudRecordByDatabaseZone;
-(void)setCloudRecordByDatabaseZone:(NSMutableDictionary *)arg1 ;
@end

