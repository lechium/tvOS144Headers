/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSMutableSet, NSDictionary, NSSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem {

	CoreDAVLeafItem* _maxResourcesItem;
	CoreDAVLeafItem* _maxSizeItem;
	NSMutableSet* _supportedItems;

}

@property (nonatomic,readonly) NSDictionary * dictRepresentation; 
@property (nonatomic,retain) CoreDAVLeafItem * maxResourcesItem;               //@synthesize maxResourcesItem=_maxResourcesItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * maxSizeItem;                    //@synthesize maxSizeItem=_maxSizeItem - In the implementation block
@property (nonatomic,readonly) NSSet * supportedItems;                         //@synthesize supportedItems=_supportedItems - In the implementation block
@property (nonatomic,readonly) long long maxResources; 
@property (nonatomic,readonly) long long maxSize; 
@property (nonatomic,readonly) BOOL supportsInsert; 
@property (nonatomic,readonly) BOOL supportsUpdate; 
@property (nonatomic,readonly) BOOL supportsDelete; 
+(id)copyParseRules;
-(id)description;
-(id)init;
-(long long)maxSize;
-(NSDictionary *)dictRepresentation;
-(long long)maxResources;
-(void)setMaxResourcesItem:(CoreDAVLeafItem *)arg1 ;
-(void)setMaxSizeItem:(CoreDAVLeafItem *)arg1 ;
-(void)addSupportedItem:(id)arg1 ;
-(BOOL)supportsInsert;
-(BOOL)supportsUpdate;
-(BOOL)supportsDelete;
-(BOOL)supportsItemWithNameSpace:(id)arg1 name:(id)arg2 ;
-(CoreDAVLeafItem *)maxResourcesItem;
-(CoreDAVLeafItem *)maxSizeItem;
-(NSSet *)supportedItems;
@end

