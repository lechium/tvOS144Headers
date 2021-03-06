/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVViewLayout.h>

@class VUIScoreboardLayout, VUITextBadgeLayout, TVImageLayout;

@interface VUISportsOverlayLayout : TVViewLayout {

	BOOL _logoShowOnlyOnFocus;
	VUIScoreboardLayout* _scoreboardLayout;
	VUITextBadgeLayout* _textBadgeLayout;
	TVImageLayout* _appImageLayout;
	TVImageLayout* _logoImageLayout;

}

@property (nonatomic,retain) VUIScoreboardLayout * scoreboardLayout;              //@synthesize scoreboardLayout=_scoreboardLayout - In the implementation block
@property (nonatomic,retain) VUITextBadgeLayout * textBadgeLayout;                //@synthesize textBadgeLayout=_textBadgeLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * appImageLayout;                      //@synthesize appImageLayout=_appImageLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * logoImageLayout;                     //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
@property (assign,nonatomic) BOOL logoShowOnlyOnFocus;                            //@synthesize logoShowOnlyOnFocus=_logoShowOnlyOnFocus - In the implementation block
+(id)overlayLayoutForElement:(id)arg1 cardLayoutType:(long long)arg2 ;
+(long long)_scoreboardTypeForElement:(id)arg1 ;
+(id)_sportsOverlayALayoutWithElement:(id)arg1 ;
+(id)_sportsOverlayBLayoutWithElement:(id)arg1 ;
+(id)_sportsOverlayCLayoutWithElement:(id)arg1 ;
-(TVImageLayout *)appImageLayout;
-(TVImageLayout *)logoImageLayout;
-(VUIScoreboardLayout *)scoreboardLayout;
-(void)setScoreboardLayout:(VUIScoreboardLayout *)arg1 ;
-(VUITextBadgeLayout *)textBadgeLayout;
-(BOOL)logoShowOnlyOnFocus;
-(void)setTextBadgeLayout:(VUITextBadgeLayout *)arg1 ;
-(void)setAppImageLayout:(TVImageLayout *)arg1 ;
-(void)setLogoImageLayout:(TVImageLayout *)arg1 ;
-(void)setLogoShowOnlyOnFocus:(BOOL)arg1 ;
@end

