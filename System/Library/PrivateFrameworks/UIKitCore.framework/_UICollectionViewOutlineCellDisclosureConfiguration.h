/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, UIColor;

@interface _UICollectionViewOutlineCellDisclosureConfiguration : NSObject <NSCopying> {

	/*^block*/id _disclosureWasTappedHandler;
	UIImage* _image;
	long long _alignment;
	double _animationRotationAngle;
	UIColor* _disclosureColor;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long alignment;                        //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) double animationRotationAngle;              //@synthesize animationRotationAngle=_animationRotationAngle - In the implementation block
@property (nonatomic,retain) UIColor * disclosureColor;                  //@synthesize disclosureColor=_disclosureColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 alignment:(long long)arg2 ;
-(id)initWithImage:(id)arg1 alignment:(long long)arg2 animationRotationAngle:(double)arg3 disclosureColor:(id)arg4 disclosureWasTappedHandler:(/*^block*/id)arg5 ;
-(double)animationRotationAngle;
-(void)setAnimationRotationAngle:(double)arg1 ;
-(UIColor *)disclosureColor;
-(void)setDisclosureColor:(UIColor *)arg1 ;
@end

