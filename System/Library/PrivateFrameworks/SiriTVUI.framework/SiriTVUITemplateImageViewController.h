/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

@class NSURL, UITraitCollection, SiriTVUITemplateImageView, SiriTVUIImageViewTemplateItem;

@interface SiriTVUITemplateImageViewController : SiriTVUITemplateItemViewController {

	NSURL* _currentImageURL;
	UITraitCollection* _previousTraitCollection;
	BOOL _hasAppeared;

}

@property (nonatomic,retain) SiriTVUITemplateImageView * view; 
@property (nonatomic,retain) SiriTVUIImageViewTemplateItem * templateItem; 
@property (assign,nonatomic) BOOL hasAppeared;                                          //@synthesize hasAppeared=_hasAppeared - In the implementation block
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)_updateImageWithTraitCollection:(id)arg1 ;
@end

