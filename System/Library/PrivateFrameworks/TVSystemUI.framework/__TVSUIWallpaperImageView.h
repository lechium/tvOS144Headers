/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class NSArray, __TVSUIWallpaperProxy, UIView;

@interface __TVSUIWallpaperImageView : UIImageView {

	long long _variant;
	NSArray* _userInterfaceStyles;
	long long _currentUserInterfaceStyle;
	__TVSUIWallpaperProxy* _wallpaperProxy;
	UIView* _overlayView;

}

@property (nonatomic,readonly) long long variant;                                   //@synthesize variant=_variant - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userInterfaceStyles;                  //@synthesize userInterfaceStyles=_userInterfaceStyles - In the implementation block
@property (nonatomic,readonly) long long currentUserInterfaceStyle;                 //@synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) __TVSUIWallpaperProxy * wallpaperProxy;              //@synthesize wallpaperProxy=_wallpaperProxy - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                                //@synthesize overlayView=_overlayView - In the implementation block
-(void)dealloc;
-(long long)variant;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)overlayView;
-(long long)currentUserInterfaceStyle;
-(void)_updateWallpaperImageAnimated:(BOOL)arg1 ;
-(void)updateWallpaperImage:(id)arg1 ;
-(void)reducedTransparencyDidChange:(id)arg1 ;
-(void)_updateWallpaperForReducedTransparency:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 variant:(long long)arg2 userInterfaceStyles:(id)arg3 ;
-(NSArray *)userInterfaceStyles;
-(__TVSUIWallpaperProxy *)wallpaperProxy;
@end

