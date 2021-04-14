/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIImage;

@interface UITabBarSwappableImageView : UIImageView {

	UIImage* _value;
	UIImage* _alternate;
	UIImage* _landscapeValue;
	UIImage* _landscapeAlternate;
	BOOL _showAlternate;
	BOOL _showLandscape;

}
-(void)setImage:(id)arg1 ;
-(void)setLandscape:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_selectedImage;
-(void)didMoveToWindow;
-(id)_unselectedImage;
-(void)setCurrentImage;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 landscapeImage:(id)arg3 landscapeAlternateImage:(id)arg4 ;
-(id)_unselectedCompactImage;
-(id)_selectedCompactImage;
-(void)showAlternateImage:(BOOL)arg1 ;
-(void)setAlternateImage:(id)arg1 ;
@end

