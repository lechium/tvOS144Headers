/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UICachedBoundingPathBitmapDataReferenceCorner : NSObject <NSSecureCoding> {

	UIBoundingPathBitmapDataCorner* _referenceCorner;

}
+(BOOL)supportsSecureCoding;
+(id)cachedReferenceCornerForRadius:(long long)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIBoundingPathBitmapDataCorner*)referenceCornerCopy;
-(id)initWithReferenceCorner:(UIBoundingPathBitmapDataCorner*)arg1 ;
@end

