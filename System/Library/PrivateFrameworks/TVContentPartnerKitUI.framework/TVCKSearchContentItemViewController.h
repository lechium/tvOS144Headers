/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVCKSearchAppViewController.h>

@class TVCKSearchSiriContext, TVSSContentItem;

@interface TVCKSearchContentItemViewController : TVCKSearchAppViewController {

	TVCKSearchSiriContext* _siriContext;
	BOOL _userDriven;
	BOOL _playTrailer;
	TVSSContentItem* _contentItem;

}

@property (nonatomic,retain) TVSSContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (assign,nonatomic) BOOL userDriven;                            //@synthesize userDriven=_userDriven - In the implementation block
@property (assign,nonatomic) BOOL playTrailer;                           //@synthesize playTrailer=_playTrailer - In the implementation block
-(void)viewDidLoad;
-(id)_launchOptions;
-(void)setContentItem:(TVSSContentItem *)arg1 ;
-(TVSSContentItem *)contentItem;
-(BOOL)playTrailer;
-(void)setPlayTrailer:(BOOL)arg1 ;
-(BOOL)userDriven;
-(void)setUserDriven:(BOOL)arg1 ;
-(id)siriContext;
-(id)initWithContentItem:(id)arg1 userDriven:(BOOL)arg2 playTrailer:(BOOL)arg3 ;
@end

