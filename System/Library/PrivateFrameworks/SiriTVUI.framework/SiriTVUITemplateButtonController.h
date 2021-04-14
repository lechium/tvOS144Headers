/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

@class NSMutableDictionary, SiriTVUIButtonTemplateItem, SiriTVUITemplateButton;

@interface SiriTVUITemplateButtonController : SiriTVUITemplateItemViewController {

	NSMutableDictionary* _cachedBackgroundImages;

}

@property (nonatomic,retain) SiriTVUIButtonTemplateItem * templateItem; 
@property (nonatomic,retain) SiriTVUITemplateButton * view; 
@property (nonatomic,retain) NSMutableDictionary * cachedBackgroundImages;              //@synthesize cachedBackgroundImages=_cachedBackgroundImages - In the implementation block
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(NSMutableDictionary *)cachedBackgroundImages;
-(void)setCachedBackgroundImages:(NSMutableDictionary *)arg1 ;
-(void)_updateContentForTraitCollection:(id)arg1 ;
-(BOOL)prefersFocus;
-(id)_imageWithRightBorderOfColor:(id)arg1 fromImage:(id)arg2 forDisplayScale:(double)arg3 ;
@end

