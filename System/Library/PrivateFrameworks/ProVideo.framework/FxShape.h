/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface FxShape : NSObject {

	FxShapePriv* _priv;

}
+(id)shapeWithRect:(CGRect)arg1 ;
+(id)infiniteShape;
-(void)dealloc;
-(id)initWithRect:(CGRect)arg1 ;
-(CGRect)extent;
-(BOOL)isInfinite;
-(id)initWithInfiniteBounds;
-(id)intersectWithShape:(id)arg1 ;
@end

