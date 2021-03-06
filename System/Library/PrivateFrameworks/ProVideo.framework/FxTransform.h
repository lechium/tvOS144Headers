/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface FxTransform : NSObject {

	FxTransformPriv* _priv;

}
+(id)identity;
+(id)transformWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)transformWithScale:(CGPoint)arg1 rotate:(float)arg2 translate:(CGPoint)arg3 shear:(CGPoint)arg4 ;
-(void)dealloc;
-(CGPoint)scale;
-(void)setScale:(CGPoint)arg1 ;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
-(CGPoint)shear;
-(void)setShear:(CGPoint)arg1 ;
-(void)setCGAffineTransform:(CGAffineTransform)arg1 ;
-(id)initWithScale:(CGPoint)arg1 rotate:(float)arg2 translate:(CGPoint)arg3 shear:(CGPoint)arg4 ;
-(CGAffineTransform)cgAffineTransform;
@end

