/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIGradient : NSObject {

	SCD_Struct_UI77* _values;
	double _height;
	CGShadingRef _shader;

}
-(void)dealloc;
-(void)fillRect:(CGRect)arg1 ;
-(id)initVerticalWithValues:(SCD_Struct_UI77*)arg1 ;
-(void)fillRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
@end
