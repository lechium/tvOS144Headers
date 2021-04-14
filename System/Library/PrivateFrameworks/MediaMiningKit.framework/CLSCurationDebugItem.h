/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaMiningKit/CLSCurationDebugObject.h>

@protocol CLSInvestigationItem;
@interface CLSCurationDebugItem : CLSCurationDebugObject {

	unsigned long long _dedupingType;
	CLSCurationDebugItem* _dedupedDebugItem;
	id<CLSInvestigationItem> _item;

}

@property (nonatomic,retain) id<CLSInvestigationItem> item;              //@synthesize item=_item - In the implementation block
+(id)stringForDedupingType:(unsigned long long)arg1 ;
-(id)identifier;
-(id)dictionaryRepresentation;
-(void)setItem:(id<CLSInvestigationItem>)arg1 ;
-(id<CLSInvestigationItem>)item;
-(id)timestamp;
-(id)initWithItem:(id)arg1 ;
-(void)dupeToDebugItem:(id)arg1 withDedupingType:(unsigned long long)arg2 ;
@end

