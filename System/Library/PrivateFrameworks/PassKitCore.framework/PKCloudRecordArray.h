/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface PKCloudRecordArray : NSObject <NSSecureCoding> {

	NSMutableDictionary* _cloudRecordByDatabase;

}

@property (nonatomic,retain) NSMutableDictionary * cloudRecordByDatabase;              //@synthesize cloudRecordByDatabase=_cloudRecordByDatabase - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(long long)count;
-(id)allObjects;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allItems;
-(id)_descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(NSMutableDictionary *)cloudRecordByDatabase;
-(id)allRecordsWithRecordType:(id)arg1 ;
-(id)allRecordNames;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)addCloudRecord:(id)arg1 forContainerDatabaseIdentifier:(id)arg2 ;
-(void)applyCloudRecordArray:(id)arg1 ;
-(id)allObjectsByDatabaseIdentifier;
-(void)setCloudRecordByDatabase:(NSMutableDictionary *)arg1 ;
@end

