/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor, NSString;

@interface _UIImageAssetRenditionCacheKey : NSObject {

	UIColor* resolvedTintColor;
	NSString* appearanceName;
	CGSize _size;
	unsigned _drawMode;
	SCD_Struct_UI32 _flags;

}
+(id)keyWithSize:(CGSize)arg1 unresolvedTintColor:(id)arg2 traitCollection:(id)arg3 bold:(BOOL)arg4 letterpress:(BOOL)arg5 drawMode:(unsigned)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

