/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification {

	BOOL _shouldReload;
	NSSet* _insertedEntries;
	NSSet* _updatedEntries;
	NSSet* _deletedEntries;

}

@property (assign,nonatomic) BOOL shouldReload;                  //@synthesize shouldReload=_shouldReload - In the implementation block
@property (nonatomic,copy) NSSet * insertedEntries;              //@synthesize insertedEntries=_insertedEntries - In the implementation block
@property (nonatomic,copy) NSSet * updatedEntries;               //@synthesize updatedEntries=_updatedEntries - In the implementation block
@property (nonatomic,copy) NSSet * deletedEntries;               //@synthesize deletedEntries=_deletedEntries - In the implementation block
+(id)notificationWithFullReload;
+(id)notificationWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3 ;
-(id)name;
-(id)userInfo;
-(id)object;
-(BOOL)shouldReload;
-(id)_initWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3 ;
-(id)_initWithFullReload;
-(void)setShouldReload:(BOOL)arg1 ;
-(NSSet *)insertedEntries;
-(void)setInsertedEntries:(NSSet *)arg1 ;
-(NSSet *)updatedEntries;
-(void)setUpdatedEntries:(NSSet *)arg1 ;
-(NSSet *)deletedEntries;
-(void)setDeletedEntries:(NSSet *)arg1 ;
@end

