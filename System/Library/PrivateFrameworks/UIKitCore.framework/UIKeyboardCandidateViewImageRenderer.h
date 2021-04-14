/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSCache;

@interface UIKeyboardCandidateViewImageRenderer : NSObject {

	UIView* _viewForTraitCollection;
	NSCache* _imageCache;

}

@property (nonatomic,retain) NSCache * imageCache;                                //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewForTraitCollection;              //@synthesize viewForTraitCollection=_viewForTraitCollection - In the implementation block
+(id)sharedImageRenderer;
-(id)init;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(UIView *)viewForTraitCollection;
-(id)highlightedBarCellBackgroundImageWithColor:(id)arg1 insets:(UIEdgeInsets)arg2 ;
-(id)pocketShadowImageForDarkKeyboard:(BOOL)arg1 fadesToBottom:(BOOL)arg2 drawShadow:(BOOL)arg3 topPadding:(double)arg4 bottomPadding:(double)arg5 height:(double)arg6 ;
-(id)handwritingCellBackgroundImageForDarkKeyboard:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(id)extensionMaskImage;
-(void)setViewForTraitCollection:(UIView *)arg1 ;
@end

