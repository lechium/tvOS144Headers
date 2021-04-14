/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSSet;

@interface TVHKDMAPEntityParsedResponse : NSObject {

	unsigned long long _responseType;
	unsigned long long _entityType;
	NSArray* _entities;
	NSArray* _sortHeaders;
	NSSet* _deletedEntityNonPersistentIDs;

}

@property (assign,nonatomic) unsigned long long responseType;                  //@synthesize responseType=_responseType - In the implementation block
@property (assign,nonatomic) unsigned long long entityType;                    //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,copy) NSArray * entities;                                 //@synthesize entities=_entities - In the implementation block
@property (nonatomic,copy) NSArray * sortHeaders;                              //@synthesize sortHeaders=_sortHeaders - In the implementation block
@property (nonatomic,copy) NSSet * deletedEntityNonPersistentIDs;              //@synthesize deletedEntityNonPersistentIDs=_deletedEntityNonPersistentIDs - In the implementation block
-(id)description;
-(id)init;
-(NSArray *)entities;
-(void)setEntities:(NSArray *)arg1 ;
-(unsigned long long)responseType;
-(unsigned long long)entityType;
-(void)setEntityType:(unsigned long long)arg1 ;
-(void)setResponseType:(unsigned long long)arg1 ;
-(NSArray *)sortHeaders;
-(NSSet *)deletedEntityNonPersistentIDs;
-(void)setSortHeaders:(NSArray *)arg1 ;
-(void)setDeletedEntityNonPersistentIDs:(NSSet *)arg1 ;
@end

