/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteKit.framework/TVRemoteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TVRemoteItem;
@class NSString, NSArray;

@interface _TVRemoteItemModel : NSObject <NSSecureCoding> {

	BOOL _group;
	id<TVRemoteItem> _item;
	NSString* _uuid;
	NSString* _title;
	long long _icon;
	long long _itemType;
	NSArray* _items;

}

@property (nonatomic,retain) id<TVRemoteItem> item;                  //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long icon;                         //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) long long itemType;                     //@synthesize itemType=_itemType - In the implementation block
@property (assign,getter=isGroup,nonatomic) BOOL group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSArray * items;                          //@synthesize items=_items - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGroup:(BOOL)arg1 ;
-(void)setItem:(id<TVRemoteItem>)arg1 ;
-(id<TVRemoteItem>)item;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)uuid;
-(NSArray *)items;
-(long long)icon;
-(void)setIcon:(long long)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setItemType:(long long)arg1 ;
-(long long)itemType;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(BOOL)isGroup;
-(id)_stringForItemType:(long long)arg1 ;
@end

