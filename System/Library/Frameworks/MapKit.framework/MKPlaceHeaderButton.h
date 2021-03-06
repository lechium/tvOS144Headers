/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/_MKPlaceActionControlledButton.h>

@class NSLayoutConstraint, _MKPlaceActionButtonController, NSString;

@interface MKPlaceHeaderButton : UIButton <_MKPlaceActionControlledButton> {

	unsigned long long _buttonType;
	BOOL _primary;
	NSLayoutConstraint* _heightConstraint;
	BOOL _buttonHighlighted;
	_MKPlaceActionButtonController* _buttonController;

}

@property (assign,nonatomic,__weak) _MKPlaceActionButtonController * buttonController;              //@synthesize buttonController=_buttonController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged;
-(void)placeActionButtonControllerTextDidChange:(id)arg1 ;
-(_MKPlaceActionButtonController *)buttonController;
-(void)setPrimaryTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)buttonSelected:(id)arg1 ;
-(void)setPrimaryTitle:(id)arg1 ;
-(void)setButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(id)initWithPrimaryType:(unsigned long long)arg1 ;
-(void)applyButtonDefaultConfiguration;
-(void)_setVibrantView;
-(void)_updateStylePrimaryButton;
-(void)_updateStyleNonPrimaryButton;
-(id)_primaryButtonTextColor;
-(void)updateButtonWithHighlighted:(BOOL)arg1 ;
-(BOOL)_isTintColorWhite;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(id)_primaryButtonColor;
@end

