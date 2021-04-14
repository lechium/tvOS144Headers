/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUILegacyButton.h>

@class NSString;

@interface VUILegacyMarkAsWatchedButton : VUILegacyButton {

	NSString* _itemID;
	NSString* _itemType;
	NSString* _channelID;
	NSString* _adamID;

}

@property (nonatomic,retain) NSString * itemID;                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * itemType;               //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) NSString * channelID;              //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,retain) NSString * adamID;                 //@synthesize adamID=_adamID - In the implementation block
-(NSString *)itemID;
-(void)setItemType:(NSString *)arg1 ;
-(NSString *)itemType;
-(NSString *)channelID;
-(void)setAdamID:(NSString *)arg1 ;
-(NSString *)adamID;
-(void)setItemID:(NSString *)arg1 ;
-(id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
-(void)_selectButtonAction:(id)arg1 eventType:(id)arg2 ;
-(void)updateWithElement:(id)arg1 ;
-(void)setChannelID:(NSString *)arg1 ;
@end
