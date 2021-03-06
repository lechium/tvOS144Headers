/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface PXLoadingFailureBadgeView : UIImageView {

	SCD_Struct_PX58 _needsUpdateFlags;
	long long __sizeClass;

}

@property (assign,setter=_setSizeClass:,nonatomic) long long _sizeClass;              //@synthesize _sizeClass=__sizeClass - In the implementation block
+(CGSize)_imageSizeForSizeClass:(long long)arg1 ;
+(id)_imageForSizeClass:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)sizeToFit;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_needsUpdate;
-(void)layoutSubviews;
-(void)_updateIfNeeded;
-(void)_setNeedsUpdate;
-(void)_invalidateImage;
-(void)_updateImageIfNeeded;
-(long long)_sizeClass;
-(void)_invalidateSizeClass;
-(void)_updateSizeClassIfNeeded;
-(void)_setSizeClass:(long long)arg1 ;
@end

