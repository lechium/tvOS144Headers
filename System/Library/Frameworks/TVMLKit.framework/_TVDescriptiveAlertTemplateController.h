/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, NSArray, UIView, UIColor, IKImageElement;

@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController {

	IKViewElement* _templateElement;
	NSArray* _templateSubviews;
	NSArray* _templateSubcontrollers;
	UIView* _preferredFocusView;
	UIColor* _backgroundColor;
	IKImageElement* _bgImageElement;
	IKImageElement* _bgHeroImageElement;

}
-(void)loadView;
-(long long)_blurEffectStyle;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_normalizeButtonsInViews:(id)arg1 ;
@end
