/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIScreenBoundingPathUtilities.h>

@class _UIBoundingPathBitmap;

@interface _UIScreenComplexBoundingPathUtilities : _UIScreenBoundingPathUtilities {

	long long _type;
	_UIBoundingPathBitmap* _bitmap;

}
+(BOOL)isScreenSupported:(id)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(void)_loadBitmapForScreen:(id)arg1 type:(long long)arg2 ;
-(id)boundingPathForWindow:(id)arg1 ;
@end

