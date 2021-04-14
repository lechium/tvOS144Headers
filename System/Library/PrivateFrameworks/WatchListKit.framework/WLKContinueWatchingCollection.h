/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface WLKContinueWatchingCollection : NSObject {

	NSString* _collectionID;
	NSString* _title;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSString * collectionID;              //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSArray *)items;
-(NSString *)collectionID;
@end

