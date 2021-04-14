/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TVPMusicContextMenuDataItem : NSObject {

	BOOL _disabled;
	BOOL _hasCheckmark;
	NSString* _title;
	NSString* _identifier;
	long long _menuItemType;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) long long menuItemType;                       //@synthesize menuItemType=_menuItemType - In the implementation block
@property (nonatomic,copy) id actionBlock;                                 //@synthesize actionBlock=_actionBlock - In the implementation block
@property (assign,nonatomic) BOOL hasCheckmark;                            //@synthesize hasCheckmark=_hasCheckmark - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(long long)menuItemType;
-(BOOL)isDisabled;
-(void)setActionBlock:(id)arg1 ;
-(id)actionBlock;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 actionBlock:(/*^block*/id)arg3 ;
-(void)setHasCheckmark:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)setMenuItemType:(long long)arg1 ;
-(BOOL)hasCheckmark;
@end

