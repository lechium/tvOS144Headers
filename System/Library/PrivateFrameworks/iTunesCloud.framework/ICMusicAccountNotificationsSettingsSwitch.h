/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSMutableDictionary, NSString;

@interface ICMusicAccountNotificationsSettingsSwitch : NSObject {

	NSDictionary* _itemResponseDictionary;
	NSMutableDictionary* _valueDictionary;
	BOOL _isToggled;
	BOOL _hasBeenPreviouslyToggled;

}

@property (assign,nonatomic) BOOL isToggled; 
@property (nonatomic,readonly) BOOL hasBeenPreviouslyToggled; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDictionary * itemResponseDictionary;              //@synthesize itemResponseDictionary=_itemResponseDictionary - In the implementation block
-(NSString *)identifier;
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(NSDictionary *)itemResponseDictionary;
-(id)initWithToggleState:(BOOL)arg1 hasBeenToggled:(BOOL)arg2 identifier:(id)arg3 ;
-(void)setIsToggled:(BOOL)arg1 ;
-(BOOL)isToggled;
-(BOOL)hasBeenPreviouslyToggled;
-(void)setHasBeenPreviouslyToggled:(BOOL)arg1 ;
@end

