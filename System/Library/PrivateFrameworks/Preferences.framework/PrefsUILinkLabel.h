/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSURL;

@interface PrefsUILinkLabel : UILabel {

	NSURL* _url;
	BOOL _touchingURL;
	NSURL* _URL;
	id _target;
	SEL _action;

}

@property (nonatomic,retain) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)openURL:(id)arg1 ;
-(void)tappedLink:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)color:(id)arg1 byMultiplyingSubComponentsBy:(float)arg2 ;
@end

