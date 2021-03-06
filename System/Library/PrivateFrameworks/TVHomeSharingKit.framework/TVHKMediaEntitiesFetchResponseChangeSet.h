/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVHKCollectionChangeSet, NSDictionary;

@interface TVHKMediaEntitiesFetchResponseChangeSet : NSObject {

	TVHKCollectionChangeSet* _mediaEntitiesChangeSet;
	NSDictionary* _groupingChangeSets;
	TVHKCollectionChangeSet* _recentlyAddedMediaEntitiesChangeSet;

}

@property (nonatomic,retain) TVHKCollectionChangeSet * mediaEntitiesChangeSet;                           //@synthesize mediaEntitiesChangeSet=_mediaEntitiesChangeSet - In the implementation block
@property (nonatomic,copy) NSDictionary * groupingChangeSets;                                            //@synthesize groupingChangeSets=_groupingChangeSets - In the implementation block
@property (nonatomic,retain) TVHKCollectionChangeSet * recentlyAddedMediaEntitiesChangeSet;              //@synthesize recentlyAddedMediaEntitiesChangeSet=_recentlyAddedMediaEntitiesChangeSet - In the implementation block
+(id)new;
-(id)description;
-(id)init;
-(BOOL)hasChanges;
-(TVHKCollectionChangeSet *)mediaEntitiesChangeSet;
-(id)initWithMediaEntitiesChangeSet:(id)arg1 ;
-(void)setRecentlyAddedMediaEntitiesChangeSet:(TVHKCollectionChangeSet *)arg1 ;
-(void)setGroupingChangeSets:(NSDictionary *)arg1 ;
-(TVHKCollectionChangeSet *)recentlyAddedMediaEntitiesChangeSet;
-(NSDictionary *)groupingChangeSets;
-(void)setMediaEntitiesChangeSet:(TVHKCollectionChangeSet *)arg1 ;
@end

