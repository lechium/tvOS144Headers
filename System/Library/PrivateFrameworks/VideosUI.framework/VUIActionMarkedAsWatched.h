/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionMarkedAsWatched : VUIAction {

	NSString* _itemID;
	NSString* _itemType;
	NSString* _channelID;
	NSString* _adamID;

}

@property (nonatomic,retain) NSString * itemID;                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * itemType;               //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) NSString * channelID;              //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,retain) NSString * adamID;                 //@synthesize adamID=_adamID - In the implementation block
-(id)initWithContextData:(id)arg1 ;
-(NSString *)itemID;
-(void)setItemType:(NSString *)arg1 ;
-(NSString *)itemType;
-(NSString *)channelID;
-(void)setAdamID:(NSString *)arg1 ;
-(NSString *)adamID;
-(void)setItemID:(NSString *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setChannelID:(NSString *)arg1 ;
@end

